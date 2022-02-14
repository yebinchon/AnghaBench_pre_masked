
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int hpath ;
typedef int drive ;
typedef int UINT ;


 int FUNC_0 (char*,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,char*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(wchar_t *VAR_1, UINT VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (FUNC_0(L"HOME", VAR_1, VAR_2) == 0)
 {
  wchar_t VAR_3[VAR_0];
  wchar_t VAR_4[VAR_0];
  if (FUNC_0(L"HOMEDRIVE", VAR_3, sizeof(VAR_3)) &&
   FUNC_0(L"HOMEPATH", VAR_4, sizeof(VAR_4)))
  {
   FUNC_1(VAR_1, VAR_2, L"%s%s", VAR_3, VAR_4);
  }
  else
  {



   FUNC_2(VAR_1, VAR_2);

  }
 }
}
