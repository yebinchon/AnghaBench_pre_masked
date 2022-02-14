
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long long
FUNC_0 (long long VAR_0)
{

  union lll {
    long long ll;
    long s[2];
  };

  union lll VAR_1,VAR_2;

  VAR_2.ll = VAR_0;

  VAR_1.s[1] = -VAR_2.s[1];
  VAR_1.s[0] = -VAR_2.s[0] - ((int) VAR_1.s[1] != 0);

  return VAR_1.ll;
}
