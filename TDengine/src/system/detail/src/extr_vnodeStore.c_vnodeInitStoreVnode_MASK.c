
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ maxSessions; int precision; } ;
struct TYPE_5__ {int vnode; int numOfFiles; int fileId; int version; int vmutex; int * pCachePool; TYPE_1__ cfg; int firstKey; } ;
typedef TYPE_2__ SVnodeObj ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_2__* VAR_0 ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_1) {
  SVnodeObj *VAR_2 = VAR_0 + VAR_1;

  VAR_2->vnode = VAR_1;
  FUNC_7(VAR_1);
  if (VAR_2->cfg.maxSessions == 0) return 0;

  VAR_2->firstKey = FUNC_3(VAR_2->cfg.precision);

  VAR_2->pCachePool = FUNC_6(VAR_1);
  if (VAR_2->pCachePool == ((void*)0)) {
    FUNC_0("vid:%d, cache pool init failed.", VAR_2->vnode);
    return -1;
  }

  if (FUNC_5(VAR_1) < 0) return -1;



  if (FUNC_4(VAR_1) < 0) {
    FUNC_0("vid:%d, commit init failed.", VAR_2->vnode);
    return -1;
  }

  FUNC_2(&(VAR_2->vmutex), ((void*)0));
  FUNC_1("vid:%d, storage initialized, version:%ld fileId:%d numOfFiles:%d", VAR_1, VAR_2->version, VAR_2->fileId,
         VAR_2->numOfFiles);

  return 0;
}
