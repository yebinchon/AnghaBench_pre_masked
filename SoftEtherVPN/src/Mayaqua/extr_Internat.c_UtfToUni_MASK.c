
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int UINT ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*) ;

UINT FUNC_4(wchar_t *VAR_0, UINT VAR_1, char *VAR_2)
{
 wchar_t *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  FUNC_2(VAR_0, VAR_1, L"");
  return 0;
 }

 VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_0, VAR_1, VAR_3);

 FUNC_1(VAR_3);

 return FUNC_3(VAR_0);
}
