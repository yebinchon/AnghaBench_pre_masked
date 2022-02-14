
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cid; int msg; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_6__ {char* name; size_t fullSlot; int queueSize; int (* processMsg ) (TYPE_1__*) ;int emptySem; int queueMutex; TYPE_1__* queue; int fullSem; } ;
typedef TYPE_2__ module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

void *FUNC_11(void *VAR_5) {
  msg_t VAR_6;
  module_t *VAR_7 = (module_t *)VAR_5;
  int VAR_8;

  FUNC_4(VAR_0, &VAR_8);

  FUNC_5(VAR_1, VAR_2);

  while (1) {
    if (FUNC_10(&VAR_7->fullSem) != 0)
      FUNC_1("ERROR: wait %s fullSem failed, reason:%s\n", VAR_7->name, FUNC_6(VAR_3));

    if (FUNC_2(&VAR_7->queueMutex) != 0)
      FUNC_1("ERROR: lock %s queueMutex failed, reason:%s\n", VAR_7->name, FUNC_6(VAR_3));

    VAR_6 = VAR_7->queue[VAR_7->fullSlot];
    FUNC_0(&(VAR_7->queue[VAR_7->fullSlot]), 0, sizeof(msg_t));
    VAR_7->fullSlot = (VAR_7->fullSlot + 1) % VAR_7->queueSize;

    if (FUNC_3(&VAR_7->queueMutex) != 0)
      FUNC_1("ERROR: unlock %s queueMutex failed, reason:%s\n", VAR_7->name, FUNC_6(VAR_3));

    if (FUNC_9(&VAR_7->emptySem) != 0)
      FUNC_1("ERROR: post %s emptySem failed, reason:%s\n", VAR_7->name, FUNC_6(VAR_3));


    if (VAR_6.cid < 0 || VAR_6.cid >= VAR_4) {

      continue;
    }






    (*(VAR_7->processMsg))(&VAR_6);

    FUNC_8(VAR_6.msg);





  }
}
