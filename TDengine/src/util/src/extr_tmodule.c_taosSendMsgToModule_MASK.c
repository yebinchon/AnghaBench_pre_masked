
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* name; size_t emptySlot; int queueSize; int fullSem; int queueMutex; TYPE_1__* queue; int emptySem; } ;
typedef TYPE_2__ module_t ;
struct TYPE_4__ {int cid; int mid; int tid; char* msg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(module_t *VAR_1, int VAR_2, int VAR_3, int VAR_4, char *VAR_5) {
  if (FUNC_5(&VAR_1->emptySem) != 0)
    FUNC_0("ERROR: wait %s emptySem failed, reason:%s\n", VAR_1->name, FUNC_3(VAR_0));

  if (FUNC_1(&VAR_1->queueMutex) != 0)
    FUNC_0("ERROR: lock %s queueMutex failed, reason:%s\n", VAR_1->name, FUNC_3(VAR_0));

  VAR_1->queue[VAR_1->emptySlot].cid = VAR_2;
  VAR_1->queue[VAR_1->emptySlot].mid = VAR_3;
  VAR_1->queue[VAR_1->emptySlot].tid = VAR_4;
  VAR_1->queue[VAR_1->emptySlot].msg = VAR_5;
  VAR_1->emptySlot = (VAR_1->emptySlot + 1) % VAR_1->queueSize;

  if (FUNC_2(&VAR_1->queueMutex) != 0)
    FUNC_0("ERROR: unlock %s queueMutex failed, reason:%s\n", VAR_1->name, FUNC_3(VAR_0));

  if (FUNC_4(&VAR_1->fullSem) != 0) FUNC_0("ERROR: post %s fullSem failed, reason:%s\n", VAR_1->name, FUNC_3(VAR_0));

  return 0;
}
