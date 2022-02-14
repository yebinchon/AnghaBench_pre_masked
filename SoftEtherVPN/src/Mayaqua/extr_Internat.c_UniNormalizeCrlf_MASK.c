
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int*) ;

wchar_t *FUNC_2(wchar_t *VAR_0)
{
 wchar_t *VAR_1;
 UINT VAR_2, VAR_3, VAR_4, VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_0);
 VAR_2 = sizeof(wchar_t) * (VAR_4 + 32) * 2;
 VAR_1 = FUNC_0(VAR_2);

 VAR_5 = 0;

 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  wchar_t VAR_6 = VAR_0[VAR_3];

  switch (VAR_6)
  {
  case L'\r':
   if (VAR_0[VAR_3 + 1] == L'\n')
   {
    VAR_3++;
   }
   VAR_1[VAR_5++] = L'\r';
   VAR_1[VAR_5++] = L'\n';
   break;

  case L'\n':
   VAR_1[VAR_5++] = L'\r';
   VAR_1[VAR_5++] = L'\n';
   break;

  default:
   VAR_1[VAR_5++] = VAR_6;
   break;
  }
 }

 VAR_1[VAR_5++] = 0;

 return VAR_1;
}
