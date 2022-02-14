
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long long*,int) ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned long long VAR_0[2];

 if (FUNC_0(VAR_0, 2) <= 1)
  return 0;
 if (!(VAR_0[0] & (1ULL << 61)) ||
     !(VAR_0[0] & (1ULL << 51)))
  return 0;
 return 1;
}
