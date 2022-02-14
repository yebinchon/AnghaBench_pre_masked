
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tmp ;
typedef int CONSOLE ;


 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;

char *FUNC_5(CONSOLE *VAR_0, wchar_t *VAR_1)
{
 char VAR_2[64];

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = L"Password>";
 }

 FUNC_3(L"%s", VAR_1);
 FUNC_0(VAR_0, VAR_1, 0);

 if (FUNC_2(VAR_2, sizeof(VAR_2)))
 {
  FUNC_0(VAR_0, L"********", 1);
  return FUNC_1(VAR_2);
 }
 else
 {
  FUNC_0(VAR_0, FUNC_4("CON_USER_CANCEL"), 1);
  return ((void*)0);
 }
}
