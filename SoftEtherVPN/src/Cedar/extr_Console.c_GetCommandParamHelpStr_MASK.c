
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;


 int FUNC_0 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;

void FUNC_3(char *VAR_0, char *VAR_1, wchar_t **VAR_2)
{
 char VAR_3[160];
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_3, sizeof(VAR_3), "CMD_%s_%s", VAR_0, VAR_1);

 *VAR_2 = FUNC_2(VAR_3);

 if (FUNC_1(*VAR_2))
 {
  *VAR_2 = FUNC_2("CMD_UNKNOWN_PARAM");
 }
}
