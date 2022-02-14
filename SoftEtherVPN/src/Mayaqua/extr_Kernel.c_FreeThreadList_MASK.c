
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int THREAD ;
typedef int LIST ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(LIST *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1);
 {
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_1);VAR_2++)
  {
   THREAD *VAR_3 = FUNC_1(VAR_1, VAR_2);

   FUNC_7(VAR_3, VAR_0);

   FUNC_5(VAR_3);
  }

  FUNC_0(VAR_1);
 }
 FUNC_6(VAR_1);

 FUNC_4(VAR_1);
}
