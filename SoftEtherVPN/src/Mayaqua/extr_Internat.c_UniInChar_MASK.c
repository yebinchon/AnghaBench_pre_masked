
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t UINT ;


 size_t FUNC_0 (scalar_t__*) ;

bool FUNC_1(wchar_t *VAR_0, wchar_t VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_0);

 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  if (VAR_0[VAR_2] == VAR_1)
  {
   return 1;
  }
 }

 return 0;
}
