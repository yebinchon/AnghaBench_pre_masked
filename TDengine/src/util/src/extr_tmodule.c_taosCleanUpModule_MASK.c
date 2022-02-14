
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queueSize; TYPE_2__* queue; int stmMutex; int queueMutex; int fullSem; int emptySem; int thread; int (* cleanUp ) () ;} ;
typedef TYPE_1__ module_t ;
struct TYPE_6__ {struct TYPE_6__* msg; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;

void FUNC_9(module_t *VAR_0) {
  int VAR_1;

  if (VAR_0->cleanUp) VAR_0->cleanUp();

  if (FUNC_5(VAR_0->thread)) {
    FUNC_1(VAR_0->thread);
    FUNC_2(VAR_0->thread, ((void*)0));
  }

  FUNC_6(&VAR_0->thread);
  FUNC_8(&VAR_0->emptySem);
  FUNC_8(&VAR_0->fullSem);
  FUNC_3(&VAR_0->queueMutex);
  FUNC_3(&VAR_0->stmMutex);

  for (VAR_1 = 0; VAR_1 < VAR_0->queueSize; ++VAR_1) {
    FUNC_7(VAR_0->queue[VAR_1].msg);
  }

  FUNC_7(VAR_0->queue);

  FUNC_0(VAR_0, 0, sizeof(module_t));
}
