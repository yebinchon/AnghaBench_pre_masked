
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int ETH ;


 int FUNC_0 (int *,void*,scalar_t__) ;

void FUNC_1(ETH *VAR_0, UINT VAR_1, void **VAR_2, UINT *VAR_3)
{
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 for (VAR_4 = 0;VAR_4 < VAR_1;VAR_4++)
 {
  FUNC_0(VAR_0, VAR_2[VAR_4], VAR_3[VAR_4]);
 }
}
