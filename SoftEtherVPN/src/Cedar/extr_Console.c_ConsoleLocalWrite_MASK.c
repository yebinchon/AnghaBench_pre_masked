
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int CONSOLE ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int *,char*) ;

bool FUNC_3(CONSOLE *VAR_0, wchar_t *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(L"%s%s", VAR_1, (FUNC_1(VAR_1, L"\n") ? L"" : L"\n"));

 FUNC_0(VAR_0, VAR_1, 1);

 return 1;
}
