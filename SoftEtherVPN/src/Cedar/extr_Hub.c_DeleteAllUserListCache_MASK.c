
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USERLIST ;
typedef scalar_t__ UINT ;
typedef int LIST ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(LIST *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0);
 {
  for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_0);VAR_1++)
  {
   USERLIST *VAR_2 = FUNC_2(VAR_0, VAR_1);

   FUNC_1(VAR_2);
  }

  FUNC_0(VAR_0);
 }
 FUNC_5(VAR_0);
}
