
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

void FUNC_2 (char *VAR_1, char *VAR_2)
{
 char *VAR_3;




 VAR_3 = VAR_1 + FUNC_1(VAR_1) - 1;

 while (*VAR_3 != VAR_0 && VAR_3 != VAR_1)
 {
  if (*VAR_3 == '.')
   return;
  VAR_3--;
 }

 FUNC_0 (VAR_1, VAR_2);
}
