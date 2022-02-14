
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int*) ;
 int FUNC_3 (int*) ;

void FUNC_4(wchar_t *VAR_0)
{
 wchar_t *VAR_1;
 UINT VAR_2, VAR_3, VAR_4;
 bool VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 == 0)
 {
  return;
 }
 if (VAR_0[0] != L' ' && VAR_0[0] != L'\t')
 {
  return;
 }

 VAR_1 = FUNC_1((VAR_2 + 1) * sizeof(wchar_t));
 VAR_5 = 0;
 VAR_4 = 0;
 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  if (VAR_0[VAR_3] != L' ' && VAR_0[VAR_3] != L'\t')
  {
   VAR_5 = 1;
  }
  if (VAR_5)
  {
   VAR_1[VAR_4++] = VAR_0[VAR_3];
  }
 }
 VAR_1[VAR_4] = 0;
 FUNC_2(VAR_0, 0, VAR_1);
 FUNC_0(VAR_1);
}
