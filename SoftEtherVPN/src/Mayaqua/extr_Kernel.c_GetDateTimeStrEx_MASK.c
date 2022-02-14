
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int UINT ;
typedef int SYSTEMTIME ;
typedef int LOCALE ;


 int FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int *,int,int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,char*,int *,int *) ;

void FUNC_3(wchar_t *VAR_1, UINT VAR_2, SYSTEMTIME *VAR_3, LOCALE *VAR_4)
{
 wchar_t VAR_5[VAR_0];
 wchar_t VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_5, sizeof(VAR_5), VAR_3, VAR_4);
 FUNC_1(VAR_6, sizeof(VAR_6), VAR_3, VAR_4);
 FUNC_2(VAR_1, VAR_2, L"%s %s", VAR_5, VAR_6);
}
