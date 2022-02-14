
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t UINT ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int*) ;

bool FUNC_2(wchar_t *VAR_0)
{
 UINT VAR_1, VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_1(VAR_0);
 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  if (FUNC_0(VAR_0[VAR_1]) == 0)
  {
   return 0;
  }
 }
 if (VAR_0[0] == L' ')
 {
  return 0;
 }
 if (VAR_2 != 0)
 {
  if (VAR_0[VAR_2 - 1] == L' ')
  {
   return 0;
  }
 }
 return 1;
}
