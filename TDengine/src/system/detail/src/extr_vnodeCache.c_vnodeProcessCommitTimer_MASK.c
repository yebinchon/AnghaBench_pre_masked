
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vmutex; } ;
struct TYPE_4__ {scalar_t__ pCachePool; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SCachePool ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(void *VAR_0, void *VAR_1) {
  SVnodeObj * VAR_2 = (SVnodeObj *)VAR_0;
  SCachePool *VAR_3 = (SCachePool *)VAR_2->pCachePool;

  FUNC_0(&VAR_3->vmutex);

  FUNC_2(VAR_2);

  FUNC_1(&VAR_3->vmutex);
}
