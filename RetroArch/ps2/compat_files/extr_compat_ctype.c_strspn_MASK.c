
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_0, *VAR_3;
 char VAR_4, VAR_5;




cont:
 VAR_4 = *VAR_2++;
 for (VAR_3 = VAR_1; (VAR_5 = *VAR_3++) != 0;)
  if (VAR_5 == VAR_4)
   goto cont;
 return (VAR_2 - 1 - VAR_0);
}
