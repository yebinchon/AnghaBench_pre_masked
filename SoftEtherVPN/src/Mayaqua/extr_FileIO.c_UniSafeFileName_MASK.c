
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef size_t UINT ;


 size_t FUNC_0 (char*) ;

void FUNC_1(wchar_t *VAR_0)
{
 UINT VAR_1, VAR_2, VAR_3;
 static wchar_t *VAR_4 = L"\\/:*?\"<>|";

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(VAR_4);
 VAR_2 = FUNC_0(VAR_0);

 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  wchar_t VAR_5 = VAR_0[VAR_1];
  UINT VAR_6;
  for (VAR_6 = 0;VAR_6 < VAR_3;VAR_6++)
  {
   if (VAR_5 == VAR_4[VAR_6])
   {
    VAR_5 = L'_';
   }
  }
  VAR_0[VAR_1] = VAR_5;
 }
}
