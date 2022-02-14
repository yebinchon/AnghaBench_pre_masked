
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int commitTime; } ;
struct TYPE_7__ {int commitTimer; TYPE_1__ cfg; scalar_t__ pCachePool; } ;
typedef TYPE_2__ SVnodeObj ;
typedef int SCachePool ;


 int FUNC_0 (int ,int,TYPE_2__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(SVnodeObj *VAR_2) {
  SCachePool *VAR_3 = (SCachePool *)(VAR_2->pCachePool);
  if (VAR_3 == ((void*)0)) return;

  FUNC_1(VAR_2);
  FUNC_0(VAR_0, VAR_2->cfg.commitTime * 1000, VAR_2, VAR_1, &VAR_2->commitTimer);
}
