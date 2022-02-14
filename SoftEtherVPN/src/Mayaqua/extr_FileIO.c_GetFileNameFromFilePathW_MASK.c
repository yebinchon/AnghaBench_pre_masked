
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t UINT ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int) ;
 int FUNC_1 (int*,size_t,int*) ;
 int FUNC_2 (int*) ;

void FUNC_3(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3)
{
 wchar_t VAR_4[VAR_0];
 UINT VAR_5, VAR_6, VAR_7;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_6 = FUNC_0(FUNC_2(VAR_3), (VAR_0 - 2));
 VAR_7 = 0;

 for (VAR_5 = 0;VAR_5 < (VAR_6 + 1);VAR_5++)
 {
  wchar_t VAR_8 = VAR_3[VAR_5];

  switch (VAR_8)
  {
  case L'\\':
  case L'/':
  case 0:
   VAR_4[VAR_7] = 0;
   VAR_7 = 0;
   break;

  default:
   VAR_4[VAR_7] = VAR_8;
   VAR_7++;
   break;
  }
 }

 FUNC_1(VAR_1, VAR_2, VAR_4);
}
