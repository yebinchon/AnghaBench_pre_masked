
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*,int *) ;
 int FUNC_1 (int **,int *,char*) ;

__attribute__((used)) static void FUNC_2(wchar_t **VAR_1, wchar_t *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 if(VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_3, sizeof(VAR_3), L"!--%s", VAR_2);
 FUNC_1(VAR_1, VAR_3, L"");

 FUNC_0(VAR_3, sizeof(VAR_3), L"%s--", VAR_2);
 FUNC_1(VAR_1, VAR_3, L"");
 return;
}
