//�ַ���ǰ׺��ϣ����
//���ַ�����ɹ�ϣֵ����
//˼·�����str��ͬʱ����m��ѯ�ʣ�
//����ǰ׺��Ԥ��������p����ת��
#include<iostream>

using namespace std;
const int N = 100010,t=131;//����ĸת��Ϊt���Ƶ��������ַ����Ĺ�ϣֵ���бȽ�
typedef unsigned long long ull;//��ull������Ļ�����Ϊ��ȡģ��2��64�η�
int n, m;
char str[N];
ull h[N], p[N];
ull get(int l, int r) {
	return h[r] - h[l - 1] * p[r - l + 1];//��l��r֮���ַ����Ĺ�ϣֵ
}
int main() {
	cin >> n >> m >> str+1;//str+1��ʾ��0λ��������
	p[0] = 1;
	for (int i = 1; i <= n; i++) {
		p[i] = p[i - 1] * t;//��ʾ�η�
		h[i] = h[i - 1] * t + str[i];//������Ϊ����
	//	cout << str[1] << " " << h[1];
	}
	while (m--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		if (get(l1, r1) == get(l2, r2)) cout << "yes" << endl;
		else cout << "No" << endl;	
	}
}