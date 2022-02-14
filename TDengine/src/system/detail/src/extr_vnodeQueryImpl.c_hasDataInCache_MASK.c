
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * cacheBlocks; } ;
struct TYPE_14__ {int vnode; scalar_t__ pCache; } ;
struct TYPE_13__ {scalar_t__ numOfBlocks; } ;
struct TYPE_12__ {TYPE_2__* pQuery; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SMeterObj ;
typedef TYPE_4__ SCacheInfo ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

bool FUNC_3(SQueryRuntimeEnv *VAR_0, SMeterObj *VAR_1) {
  SQuery * VAR_2 = VAR_0->pQuery;
  SCacheInfo *VAR_3 = (SCacheInfo *)VAR_1->pCache;


  if ((VAR_3 == ((void*)0)) || (VAR_3->cacheBlocks == ((void*)0))) {
    return 0;
  }


  FUNC_2(VAR_0);
  FUNC_1(VAR_2, VAR_3, VAR_1->vnode);
  if (VAR_2->numOfBlocks <= 0) {
    return 0;
  }

  return FUNC_0(VAR_2, VAR_1);
}
