
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
struct TYPE_9__ {int commitInProcess; } ;
struct TYPE_7__ {int commitTime; } ;
struct TYPE_8__ {scalar_t__ status; int commitThread; int vnode; int commitTimer; TYPE_1__ cfg; scalar_t__ pCachePool; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SCachePool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,TYPE_2__*,int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

pthread_t FUNC_9(SVnodeObj *VAR_6) {


  pthread_attr_t VAR_7;
  SCachePool * VAR_8 = (SCachePool *)VAR_6->pCachePool;

  if (VAR_8->commitInProcess) {
    FUNC_1("vid:%d, commit is already in process", VAR_6->vnode);
    return VAR_6->commitThread;
  }

  FUNC_8(&VAR_6->commitTimer);

  if (VAR_6->status == VAR_1) {
    FUNC_7(VAR_4, VAR_6->cfg.commitTime * 1000, VAR_6, VAR_5, &VAR_6->commitTimer);
    FUNC_1("vid:%d, it is in unsyc state, commit later", VAR_6->vnode);
    return VAR_6->commitThread;
  }

  FUNC_3(&VAR_7);
  FUNC_4(&VAR_7, VAR_0);
  if (FUNC_5(&(VAR_6->commitThread), &VAR_7, VAR_3, VAR_6) != 0) {
    FUNC_0("vid:%d, failed to create thread to commit file, reason:%s", VAR_6->vnode, FUNC_6(VAR_2));
  } else {
    VAR_8->commitInProcess = 1;
    FUNC_1("vid:%d, commit thread: 0x%lx is created", VAR_6->vnode, VAR_6->commitThread);
  }

  FUNC_2(&VAR_7);

  return VAR_6->commitThread;
}
