
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*,int ,int*) ;
 int FUNC_4 (int*) ;

void FUNC_5(wchar_t *VAR_0)
{
 wchar_t *VAR_1, *VAR_2;
 UINT VAR_3, VAR_4, VAR_5, VAR_6;
 bool VAR_7;

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 == 0)
 {
  return;
 }
 if (VAR_0[VAR_3 - 1] != L' ' && VAR_0[VAR_3 - 1] != L'\t')
 {
  return;
 }

 VAR_1 = FUNC_2((VAR_3 + 1) * sizeof(wchar_t));
 VAR_2 = FUNC_2((VAR_3 + 1) * sizeof(wchar_t));
 VAR_7 = 0;
 VAR_5 = VAR_6 = 0;
 for (VAR_4 = 0;VAR_4 < VAR_3;VAR_4++)
 {
  if (VAR_0[VAR_4] != L' ' && VAR_0[VAR_4] != L'\t')
  {
   FUNC_0(&VAR_1[VAR_5], VAR_2, VAR_6 * sizeof(wchar_t));
   VAR_5 += VAR_6;
   VAR_6 = 0;
   VAR_1[VAR_5++] = VAR_0[VAR_4];
  }
  else
  {
   VAR_2[VAR_6++] = VAR_0[VAR_4];
  }
 }
 VAR_1[VAR_5] = 0;
 FUNC_3(VAR_0, 0, VAR_1);
 FUNC_1(VAR_1);
 FUNC_1(VAR_2);
}
