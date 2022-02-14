
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (char*) ;

wchar_t *FUNC_1(UINT VAR_2)
{
 if (VAR_2 == VAR_1)
 {
  return FUNC_0("SM_HUB_STATIC");
 }
 else if (VAR_2 == VAR_0)
 {
  return FUNC_0("SM_HUB_DYNAMIC");
 }
 return FUNC_0("SM_HUB_STANDALONE");
}
