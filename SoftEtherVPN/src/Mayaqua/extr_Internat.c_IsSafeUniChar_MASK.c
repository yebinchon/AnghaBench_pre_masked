
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef size_t UINT ;


 size_t FUNC_0 (scalar_t__*) ;

bool FUNC_1(wchar_t VAR_0)
{
 UINT VAR_1, VAR_2;
 wchar_t *VAR_3 =
  L"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  L"abcdefghijklmnopqrstuvwxyz"
  L"0123456789"
  L" ()-_#%&.";

 VAR_2 = FUNC_0(VAR_3);
 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  if (VAR_0 == VAR_3[VAR_1])
  {
   return 1;
  }
 }
 return 0;
}
