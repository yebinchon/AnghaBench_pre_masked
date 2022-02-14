
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int commitInProcess; int vmutex; } ;
struct TYPE_9__ {int vnode; int sid; int meterId; } ;
struct TYPE_8__ {scalar_t__ pCachePool; int * meterList; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;
typedef TYPE_3__ SCachePool ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (void (*) (void*,void*),int,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_6(void *VAR_3, void *VAR_4) {
  SMeterObj * VAR_5 = (SMeterObj *)VAR_3;
  SVnodeObj * VAR_6 = VAR_1 + VAR_5->vnode;






  if (VAR_6->meterList == ((void*)0)) {
    FUNC_0("vnode is deleted, abort update schema");
    return;
  }

  SCachePool *VAR_7 = (SCachePool *)VAR_6->pCachePool;

  FUNC_1(&VAR_7->vmutex);
  if (VAR_7->commitInProcess) {
    FUNC_0("vid:%d sid:%d mid:%s, committing in process, commit later", VAR_5->vnode, VAR_5->sid, VAR_5->meterId);
    if (FUNC_3(FUNC_6, 10, VAR_5, VAR_2) == ((void*)0)) {
      FUNC_4(VAR_5, VAR_0);
    }

    FUNC_2(&VAR_7->vmutex);
    return;
  }

  VAR_7->commitInProcess = 1;
  FUNC_2(&VAR_7->vmutex);

  FUNC_5(VAR_6, VAR_5->sid, VAR_5->sid);
}
