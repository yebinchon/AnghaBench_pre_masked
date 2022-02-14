
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int * TickList; } ;
typedef int LIST ;
typedef TYPE_1__ INTERRUPT_MANAGER ;


 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;

UINT FUNC_10(INTERRUPT_MANAGER *VAR_1)
{
 UINT VAR_2 = VAR_0;
 UINT VAR_3;
 LIST *VAR_4 = ((void*)0);
 UINT64 VAR_5 = FUNC_8();

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_5(VAR_1->TickList);
 {

  for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_1->TickList);VAR_3++)
  {
   UINT64 *VAR_6 = FUNC_3(VAR_1->TickList, VAR_3);

   if (VAR_5 >= *VAR_6)
   {
    VAR_2 = 0;

    if (VAR_4 == ((void*)0))
    {
     VAR_4 = FUNC_6(((void*)0));
    }

    FUNC_0(VAR_4, VAR_6);
   }
   else
   {
    break;
   }
  }

  for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_4);VAR_3++)
  {
   UINT64 *VAR_7 = FUNC_3(VAR_4, VAR_3);

   FUNC_2(VAR_7);

   FUNC_1(VAR_1->TickList, VAR_7);
  }

  if (VAR_4 != ((void*)0))
  {
   FUNC_7(VAR_4);
  }

  if (VAR_2 == VAR_0)
  {
   if (FUNC_4(VAR_1->TickList) >= 1)
   {
    UINT64 *VAR_8 = FUNC_3(VAR_1->TickList, 0);

    VAR_2 = (UINT)(*VAR_8 - VAR_5);
   }
  }
 }
 FUNC_9(VAR_1->TickList);

 return VAR_2;
}
