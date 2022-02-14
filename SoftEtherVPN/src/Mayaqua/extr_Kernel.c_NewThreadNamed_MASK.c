
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int PoolThread; int ref; int Name; void* release_event; struct TYPE_9__* PoolHostThread; int PoolWaitList; void* init_finished_event; int * pData; void* param; int * thread_proc; } ;
struct TYPE_8__ {void* InitFinishEvent; void* Event; TYPE_2__* Thread; int * ThreadProc; } ;
typedef int THREAD_PROC ;
typedef TYPE_1__ THREAD_POOL_DATA ;
typedef TYPE_2__ THREAD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (int ,TYPE_1__*) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int VAR_1 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 void* FUNC_14 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

THREAD *FUNC_15(THREAD_PROC *VAR_5, void *VAR_6, char *VAR_7)
{
 THREAD *VAR_8 = ((void*)0);
 THREAD_POOL_DATA *VAR_9 = ((void*)0);
 THREAD *VAR_10;

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(VAR_3);

 FUNC_4(VAR_4);
 {

  VAR_8 = FUNC_9(VAR_4);
 }
 FUNC_11(VAR_4);

 if (VAR_8 == ((void*)0))
 {

  VAR_9 = FUNC_14(sizeof(THREAD_POOL_DATA));
  VAR_9->Event = FUNC_5();
  VAR_9->InitFinishEvent = FUNC_5();
  VAR_8 = FUNC_8(VAR_1, VAR_9);
  FUNC_13(VAR_8);
 }
 else
 {
  VAR_9 = (THREAD_POOL_DATA *)VAR_8->param;
 }


 VAR_10 = FUNC_14(sizeof(THREAD));
 VAR_10->ref = FUNC_7();
 VAR_10->thread_proc = VAR_5;
 VAR_10->param = VAR_6;
 VAR_10->pData = ((void*)0);
 VAR_10->init_finished_event = FUNC_5();
 VAR_10->PoolThread = 1;
 VAR_10->PoolWaitList = FUNC_6(((void*)0));
 VAR_10->PoolHostThread = VAR_8;
 VAR_10->release_event = FUNC_5();

 if (FUNC_3(VAR_7) == 0)
 {
  VAR_10->Name = FUNC_1(VAR_7);
 }


 VAR_9->ThreadProc = VAR_5;
 VAR_9->Thread = VAR_10;
 FUNC_0(VAR_10->ref);

 FUNC_10(VAR_9->Event);

 FUNC_12(VAR_9->InitFinishEvent, VAR_0);

 VAR_2++;



 return VAR_10;
}
