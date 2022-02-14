
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* freeList; struct TYPE_4__* pool; int mutex; } ;
typedef TYPE_1__ pool_t ;
typedef scalar_t__ mpool_h ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(mpool_h VAR_0) {
  pool_t *VAR_1 = (pool_t *)VAR_0;

  FUNC_2(&VAR_1->mutex);
  if (VAR_1->pool) FUNC_0(VAR_1->pool);
  if (VAR_1->freeList) FUNC_0(VAR_1->freeList);
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  FUNC_0(VAR_1);
}
