
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int AC ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(LIST *VAR_0, LIST *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0);

 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_1);VAR_2++)
 {
  AC *VAR_3 = FUNC_2(VAR_1, VAR_2);

  FUNC_0(VAR_0, VAR_3);
 }
}
