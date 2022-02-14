
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int TaskPostEvent; int TaskQueue; scalar_t__ Halting; } ;
struct TYPE_8__ {int CompleteEvent; int * Request; } ;
typedef int PACK ;
typedef TYPE_1__ FARM_TASK ;
typedef TYPE_2__ FARM_MEMBER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;

FARM_TASK *FUNC_8(FARM_MEMBER *VAR_0, PACK *VAR_1)
{
 FARM_TASK *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_7(sizeof(FARM_TASK));
 VAR_2->CompleteEvent = FUNC_3();
 VAR_2->Request = VAR_1;

 FUNC_2(VAR_0->TaskQueue);
 {
  if (VAR_0->Halting)
  {

   FUNC_6(VAR_0->TaskQueue);
   FUNC_4(VAR_2->CompleteEvent);
   FUNC_0(VAR_2);
   return ((void*)0);
  }

  FUNC_1(VAR_0->TaskQueue, VAR_2);
 }
 FUNC_6(VAR_0->TaskQueue);

 FUNC_5(VAR_0->TaskPostEvent);

 return VAR_2;
}
