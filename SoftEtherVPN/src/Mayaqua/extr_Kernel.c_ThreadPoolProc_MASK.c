
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {char* Name; int Stopped; int PoolHalting; int release_event; TYPE_1__* ref; int PoolWaitList; int ThreadId; int param; } ;
struct TYPE_10__ {TYPE_3__* Thread; int (* ThreadProc ) (TYPE_3__*,int ) ;int * InitFinishEvent; int Event; } ;
struct TYPE_9__ {int c; } ;
typedef TYPE_2__ THREAD_POOL_DATA ;
typedef TYPE_3__ THREAD ;
typedef int EVENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **) ;
 int VAR_0 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 () ;
 int ** FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_20(THREAD *VAR_3, void *VAR_4)
{
 THREAD_POOL_DATA *VAR_5;

 if (VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_5 = (THREAD_POOL_DATA *)VAR_4;

 FUNC_8(VAR_3);

 while (1)
 {
  THREAD *VAR_6;
  UINT VAR_7, VAR_8;
  EVENT **VAR_9;


  FUNC_18(VAR_5->Event, VAR_0);

  if (VAR_5->ThreadProc == ((void*)0))
  {

   break;
  }

  VAR_6 = VAR_5->Thread;
  VAR_6->ThreadId = FUNC_14();


  FUNC_12(VAR_5->InitFinishEvent);


  if (VAR_6->Name != ((void*)0))
  {
   FUNC_13(VAR_6->ThreadId, VAR_6->Name, VAR_6->param);
  }
  else
  {
   FUNC_13(VAR_6->ThreadId, "Unknown", 0);
  }


  VAR_5->ThreadProc(VAR_5->Thread, VAR_6->param);


  FUNC_13(VAR_6->ThreadId, ((void*)0), 0);

  VAR_5->Thread->Stopped = 1;

  VAR_6->PoolHalting = 1;


  FUNC_5(VAR_6->PoolWaitList);
  {
   VAR_8 = FUNC_4(VAR_6->PoolWaitList);
   VAR_9 = FUNC_15(VAR_6->PoolWaitList);

   FUNC_2(VAR_6->PoolWaitList);
  }
  FUNC_16(VAR_6->PoolWaitList);

  for (VAR_7 = 0;VAR_7 < VAR_8;VAR_7++)
  {
   EVENT *VAR_10 = VAR_9[VAR_7];

   FUNC_12(VAR_10);
   FUNC_10(VAR_10);
  }

  FUNC_3(VAR_9);

  while (1)
  {
   if (FUNC_0(VAR_6->ref->c) <= 1)
   {
    break;
   }

   FUNC_18(VAR_6->release_event, 256);
  }

  FUNC_11(VAR_6);







  FUNC_6(VAR_2);
  {
   FUNC_9(VAR_2, VAR_3);
  }
  FUNC_17(VAR_2);

  FUNC_1(VAR_1);
 }
}
