
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int thandle; int ahandle; int (* tfp ) (int ,int ) ;int (* fp ) (TYPE_2__*) ;} ;
struct TYPE_5__ {size_t fullSlot; int queueSize; int label; int emptySem; int queueMutex; TYPE_2__* queue; int fullSem; } ;
typedef TYPE_1__ SSchedQueue ;
typedef TYPE_2__ SSchedMsg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (char*,int ,scalar_t__,...) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

void *FUNC_10(void *VAR_2) {
  SSchedMsg VAR_3;
  SSchedQueue *VAR_4 = (SSchedQueue *)VAR_2;

  while (1) {
    if (FUNC_9(&VAR_4->fullSem) != 0) {
      if (VAR_1 == VAR_0) {

        FUNC_2("wait %s fullSem was interrupted", VAR_4->label);
        continue;
      }
      FUNC_1("wait %s fullSem failed, errno:%d, reason:%s", VAR_4->label, VAR_1, FUNC_5(VAR_1));
    }

    if (FUNC_3(&VAR_4->queueMutex) != 0)
      FUNC_1("lock %s queueMutex failed, reason:%s", VAR_4->label, FUNC_5(VAR_1));

    VAR_3 = VAR_4->queue[VAR_4->fullSlot];
    FUNC_0(VAR_4->queue + VAR_4->fullSlot, 0, sizeof(SSchedMsg));
    VAR_4->fullSlot = (VAR_4->fullSlot + 1) % VAR_4->queueSize;

    if (FUNC_4(&VAR_4->queueMutex) != 0)
      FUNC_1("unlock %s queueMutex failed, reason:%s\n", VAR_4->label, FUNC_5(VAR_1));

    if (FUNC_8(&VAR_4->emptySem) != 0)
      FUNC_1("post %s emptySem failed, reason:%s\n", VAR_4->label, FUNC_5(VAR_1));

    if (VAR_3.fp)
      (*(VAR_3.fp))(&VAR_3);
    else if (VAR_3.tfp)
      (*(VAR_3.tfp))(VAR_3.ahandle, VAR_3.thandle);
  }
}
