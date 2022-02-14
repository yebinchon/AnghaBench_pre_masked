
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; struct TYPE_5__* freeList; } ;
typedef TYPE_1__ id_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(void *VAR_0) {
  id_pool_t *VAR_1;

  if (VAR_0 == ((void*)0)) return;
  VAR_1 = (id_pool_t *)VAR_0;

  FUNC_2("pool:%p is cleaned", VAR_1);

  if (VAR_1->freeList) FUNC_0(VAR_1->freeList);

  FUNC_3(&VAR_1->mutex);

  FUNC_1(VAR_1, 0, sizeof(id_pool_t));

  FUNC_0(VAR_1);
}
