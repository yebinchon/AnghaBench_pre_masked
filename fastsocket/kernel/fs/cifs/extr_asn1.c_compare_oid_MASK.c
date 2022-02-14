
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(unsigned long *VAR_0, unsigned int VAR_1,
     unsigned long *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1 != VAR_3)
  return 0;
 else {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_0[VAR_4] != VAR_2[VAR_4])
    return 0;
  }
  return 1;
 }
}
