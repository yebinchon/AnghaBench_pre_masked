
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;


 scalar_t__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

bool FUNC_2(LIST *VAR_0, UINT VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  UINT *VAR_3 = FUNC_0(VAR_0, VAR_2);

  if (*VAR_3 == VAR_1)
  {
   return 1;
  }
 }

 return 0;
}
