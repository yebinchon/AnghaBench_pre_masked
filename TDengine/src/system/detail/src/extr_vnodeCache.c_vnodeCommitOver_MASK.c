
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int vmutex; int notFreeSlots; int vnode; scalar_t__ commitInProcess; } ;
struct TYPE_6__ {int commitTime; } ;
struct TYPE_7__ {int commitTimer; TYPE_1__ cfg; scalar_t__ pCachePool; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SCachePool ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,TYPE_2__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(SVnodeObj *VAR_2) {
  SCachePool *VAR_3 = (SCachePool *)(VAR_2->pCachePool);

  FUNC_3(VAR_0, VAR_2->cfg.commitTime * 1000, VAR_2, VAR_1, &VAR_2->commitTimer);

  FUNC_1(&VAR_3->vmutex);

  VAR_3->commitInProcess = 0;
  FUNC_0("vid:%d, commit is over, notFreeSlots:%d", VAR_3->vnode, VAR_3->notFreeSlots);

  FUNC_2(&VAR_3->vmutex);
}
