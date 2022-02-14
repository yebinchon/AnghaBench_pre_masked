
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(char *VAR_0)
{
   char *VAR_1 = ((void*)0);

   if (FUNC_3(VAR_0) < 2)
      return;

   VAR_1 = FUNC_0(VAR_0);

   if (VAR_1)
      VAR_1[1] = '\0';
   else
      FUNC_2(VAR_0, 3, ".%s", FUNC_1());
}
