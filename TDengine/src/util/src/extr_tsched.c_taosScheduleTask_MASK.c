
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t emptySlot; int queueSize; int label; int fullSem; int queueMutex; int * queue; int emptySem; } ;
typedef TYPE_1__ SSchedQueue ;
typedef int SSchedMsg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(void *VAR_2, SSchedMsg *VAR_3) {
  SSchedQueue *VAR_4 = (SSchedQueue *)VAR_2;
  if (VAR_4 == ((void*)0)) {
    FUNC_0("sched is not ready, msg:%p is dropped", *VAR_3);
    return 0;
  }

  while (FUNC_6(&VAR_4->emptySem) != 0) {
    if (VAR_1 != VAR_0) {
      FUNC_0("wait %s emptySem failed, reason:%s", VAR_4->label, FUNC_4(VAR_1));
      break;
    }
    FUNC_1("wait %s emptySem was interrupted", VAR_4->label);
  }

  if (FUNC_2(&VAR_4->queueMutex) != 0)
    FUNC_0("lock %s queueMutex failed, reason:%s", VAR_4->label, FUNC_4(VAR_1));

  VAR_4->queue[VAR_4->emptySlot] = *VAR_3;
  VAR_4->emptySlot = (VAR_4->emptySlot + 1) % VAR_4->queueSize;

  if (FUNC_3(&VAR_4->queueMutex) != 0)
    FUNC_0("unlock %s queueMutex failed, reason:%s", VAR_4->label, FUNC_4(VAR_1));

  if (FUNC_5(&VAR_4->fullSem) != 0) FUNC_0("post %s fullSem failed, reason:%s", VAR_4->label, FUNC_4(VAR_1));

  return 0;
}
