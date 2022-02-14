
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef int SYSTEMTIME ;
typedef scalar_t__ INT64 ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;

void FUNC_3(SYSTEMTIME *VAR_0, SYSTEMTIME *VAR_1)
{
 UINT64 VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = (UINT64)((INT64)FUNC_1(VAR_1) - FUNC_0(VAR_1, 1));
 FUNC_2(VAR_0, VAR_2);
}
