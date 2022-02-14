
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numOfThreads; struct TYPE_5__* qthread; struct TYPE_5__* queue; int queueMutex; int fullSem; int emptySem; } ;
typedef TYPE_1__ SSchedQueue ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void *VAR_0) {
  SSchedQueue *VAR_1 = (SSchedQueue *)VAR_0;
  if (VAR_1 == ((void*)0)) return;

  for (int VAR_2 = 0; VAR_2 < VAR_1->numOfThreads; ++VAR_2) {
    FUNC_1(VAR_1->qthread[VAR_2]);
  }
  for (int VAR_3 = 0; VAR_3 < VAR_1->numOfThreads; ++VAR_3) {
    FUNC_2(VAR_1->qthread[VAR_3], ((void*)0));
  }

  FUNC_4(&VAR_1->emptySem);
  FUNC_4(&VAR_1->fullSem);
  FUNC_3(&VAR_1->queueMutex);

  FUNC_0(VAR_1->queue);
  FUNC_0(VAR_1->qthread);
  FUNC_0(VAR_1);
}
