
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;
typedef int filename_ident ;
typedef int UINT ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int*) ;
 int FUNC_1 (int*,char*) ;
 scalar_t__ FUNC_2 (int*,char*) ;
 int FUNC_3 (int*,int,...) ;
 int FUNC_4 (int*,int,int*) ;
 int FUNC_5 (int*) ;

void FUNC_6(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3, wchar_t *VAR_4)
{
 bool VAR_5;
 wchar_t VAR_6[VAR_0];
 wchar_t VAR_7[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_7, sizeof(VAR_7), VAR_4);

 VAR_5 = 0;

 if (FUNC_2(VAR_7, L"\\") || FUNC_2(VAR_7, L"/"))
 {
  VAR_5 = 1;
 }

 VAR_4 = &VAR_7[0];
 if (VAR_5 == 0)
 {
  FUNC_4(VAR_6, sizeof(VAR_6), VAR_3);
  if (FUNC_1(VAR_6, L"/") == 0 && FUNC_1(VAR_6, L"\\") == 0)
  {
   FUNC_3(VAR_6, sizeof(VAR_6), L"/");
  }
  FUNC_3(VAR_6, sizeof(VAR_6), VAR_4);
 }
 else
 {
  FUNC_4(VAR_6, sizeof(VAR_6), VAR_4);
 }

 FUNC_0(VAR_1, VAR_2, VAR_6);
}
