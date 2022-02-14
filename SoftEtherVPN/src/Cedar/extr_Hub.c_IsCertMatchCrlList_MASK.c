
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X ;
typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int CRL ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(X *VAR_0, LIST *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_1);VAR_2++)
 {
  CRL *VAR_3 = FUNC_1(VAR_1, VAR_2);

  if (FUNC_0(VAR_0, VAR_3))
  {
   return 1;
  }
 }

 return 0;
}
