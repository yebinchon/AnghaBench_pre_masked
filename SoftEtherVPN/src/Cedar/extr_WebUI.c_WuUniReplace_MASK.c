
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int,int *,int *,int *) ;

__attribute__((used)) static void FUNC_4(wchar_t **VAR_0, wchar_t *VAR_1, wchar_t *VAR_2)
{
 UINT VAR_3;
 wchar_t *VAR_4;

 if(VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = *VAR_0;

 VAR_3 = (FUNC_2(*VAR_0, VAR_1, VAR_2, 1) + 1) * sizeof(wchar_t);
 *VAR_0 = (wchar_t*)FUNC_1(VAR_3);
 FUNC_3(*VAR_0, VAR_3, VAR_4, VAR_1, VAR_2);
 FUNC_0(VAR_4);
}
