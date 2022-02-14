
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(char *VAR_0)
{
 char *VAR_1;
 for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++)
  if (*VAR_1 >= 'a' && *VAR_1 <= 'z')
   *VAR_1 += 'A' - 'a';
 return VAR_0;
}
