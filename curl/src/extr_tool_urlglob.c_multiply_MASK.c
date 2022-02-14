
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long *VAR_0, long VAR_1)
{
  unsigned long VAR_2 = *VAR_0 * VAR_1;
  if(!VAR_1) {
    *VAR_0 = 0;
    return 0;
  }
  if(VAR_2/VAR_1 != *VAR_0)
    return 1;
  *VAR_0 = VAR_2;
  return 0;
}
