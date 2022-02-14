
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0)
{
 int VAR_1;
 int VAR_2 = 1;

 if (!VAR_0)
  return 0;

 for (VAR_1 = 0; VAR_0[VAR_1] != '\0'; VAR_1++)
  if (VAR_0[VAR_1] == '\n')
   VAR_2++;
 return VAR_2;
}
