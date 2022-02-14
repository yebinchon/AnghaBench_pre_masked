
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1 - 6; VAR_2++)
  if (VAR_0[VAR_2] == '.' && VAR_0[VAR_2+1] == 'g' && VAR_0[VAR_2+2] == 'c' &&
      VAR_0[VAR_2+3] == 'd' && VAR_0[VAR_2+4] == 'a' && VAR_0[VAR_2+5] == 0)
   return VAR_2;
 return -1;
}
