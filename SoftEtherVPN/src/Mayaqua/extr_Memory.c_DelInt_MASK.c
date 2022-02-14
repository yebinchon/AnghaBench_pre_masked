
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;


 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(LIST *VAR_0, UINT VAR_1)
{
 LIST *VAR_2 = ((void*)0);
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_0);VAR_3++)
 {
  UINT *VAR_4 = FUNC_3(VAR_0, VAR_3);

  if (*VAR_4 == VAR_1)
  {
   if (VAR_2 == ((void*)0))
   {
    VAR_2 = FUNC_5(((void*)0));
   }
   FUNC_0(VAR_2, VAR_4);
  }
 }

 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_2);VAR_3++)
 {
  UINT *VAR_5 = FUNC_3(VAR_2, VAR_3);

  FUNC_1(VAR_0, VAR_5);

  FUNC_2(VAR_5);
 }

 if (VAR_2 != ((void*)0))
 {
  FUNC_6(VAR_2);
 }
}
