
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp1 ;


 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;

void FUNC_3(char *VAR_0, wchar_t **VAR_1, wchar_t **VAR_2, wchar_t **VAR_3)
{
 char VAR_4[128], VAR_5[128], VAR_6[128];

 FUNC_0(VAR_4, sizeof(VAR_4), "CMD_%s", VAR_0);
 FUNC_0(VAR_5, sizeof(VAR_5), "CMD_%s_ARGS", VAR_0);
 FUNC_0(VAR_6, sizeof(VAR_6), "CMD_%s_HELP", VAR_0);

 if (VAR_1 != ((void*)0))
 {
  *VAR_1 = FUNC_2(VAR_4);
  if (FUNC_1(*VAR_1))
  {
   *VAR_1 = FUNC_2("CMD_UNKNOWM");
  }
 }

 if (VAR_2 != ((void*)0))
 {
  *VAR_2 = FUNC_2(VAR_5);
  if (FUNC_1(*VAR_2))
  {
   *VAR_2 = FUNC_2("CMD_UNKNOWN_ARGS");
  }
 }

 if (VAR_3 != ((void*)0))
 {
  *VAR_3 = FUNC_2(VAR_6);
  if (FUNC_1(*VAR_3))
  {
   *VAR_3 = FUNC_2("CMD_UNKNOWN_HELP");
  }
 }
}
