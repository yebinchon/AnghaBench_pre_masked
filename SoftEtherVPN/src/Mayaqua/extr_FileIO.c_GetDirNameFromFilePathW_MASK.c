
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;
typedef size_t UINT ;


 int VAR_0 ;
 int FUNC_0 (int*,size_t,int*) ;
 scalar_t__ FUNC_1 (int*,char*) ;
 int FUNC_2 (int*,size_t,int*) ;
 int FUNC_3 (int*,size_t,...) ;
 int FUNC_4 (int*) ;

void FUNC_5(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3)
{
 wchar_t VAR_4[VAR_0];
 UINT VAR_5;
 UINT VAR_6;
 UINT VAR_7;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_4, sizeof(VAR_4), VAR_3);
 if (FUNC_1(VAR_4, L"\\") || FUNC_1(VAR_4, L"/"))
 {
  VAR_4[FUNC_4(VAR_4) - 1] = 0;
 }

 VAR_7 = FUNC_4(VAR_4);

 FUNC_3(VAR_1, VAR_2, L"");

 VAR_5 = 0;

 for (VAR_6 = 0;VAR_6 < VAR_7;VAR_6++)
 {
  wchar_t VAR_8 = VAR_4[VAR_6];
  if (VAR_8 == L'/' || VAR_8 == L'\\')
  {
   VAR_4[VAR_5++] = 0;
   VAR_5 = 0;
   FUNC_2(VAR_1, VAR_2, VAR_4);
   VAR_4[VAR_5++] = VAR_8;
  }
  else
  {
   VAR_4[VAR_5++] = VAR_8;
  }
 }

 if (FUNC_4(VAR_1) == 0)
 {
  FUNC_3(VAR_1, VAR_2, L"/");
 }

 FUNC_0(VAR_1, VAR_2, VAR_1);
}
