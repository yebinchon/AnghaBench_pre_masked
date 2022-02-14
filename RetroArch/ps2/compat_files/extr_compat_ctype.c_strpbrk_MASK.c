
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char * FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 int VAR_3, VAR_4;

 while ((VAR_3 = *VAR_0++) != 0) {
  for (VAR_2 = VAR_1; (VAR_4 = *VAR_2++) != 0;)
   if (VAR_4 == VAR_3)
    return ((char *)(VAR_0 - 1));
 }
 return (((void*)0));
}
