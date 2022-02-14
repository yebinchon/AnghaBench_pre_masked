
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int*) ;

void FUNC_1(wchar_t *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == 0)
 {
  return;
 }

 if (VAR_0[VAR_1 - 1] == L'\n')
 {
  if (VAR_1 >= 2 && VAR_0[VAR_1 - 2] == L'\r')
  {
   VAR_0[VAR_1 - 2] = 0;
  }
  VAR_0[VAR_1 - 1] = 0;
 }
 else if(VAR_0[VAR_1 - 1] == L'\r')
 {
  VAR_0[VAR_1 - 1] = 0;
 }
}
