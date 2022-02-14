
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int PACK ;
typedef int LIST ;
typedef int ACCESS ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;

void FUNC_5(PACK *VAR_0, LIST *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_1);
 {
  UINT VAR_2;
  for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_1);VAR_2++)
  {
   ACCESS *VAR_3 = FUNC_0(VAR_1, VAR_2);
   FUNC_3(VAR_0, VAR_3, VAR_2, FUNC_1(VAR_1));
  }
 }
 FUNC_4(VAR_1);
}
