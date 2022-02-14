
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *FUNC_0(const char *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 if (!VAR_0)
  return 0;

 for (VAR_2 = 0; VAR_0[VAR_2] != '\0' && VAR_3 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2] == '\n')
   VAR_3++;
 return VAR_0+VAR_2;
}
