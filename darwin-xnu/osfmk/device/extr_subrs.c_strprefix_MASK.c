
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;

 while ((VAR_2 = *VAR_1++) != '\0') {
  if (VAR_2 != *VAR_0++)
   return (0);
 }
 return (1);
}
