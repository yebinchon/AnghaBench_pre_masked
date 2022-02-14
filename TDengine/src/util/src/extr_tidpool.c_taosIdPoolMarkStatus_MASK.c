
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* freeList; } ;
typedef TYPE_1__ id_pool_t ;



void FUNC_0(void *VAR_0, int VAR_1, int VAR_2) {
  id_pool_t *VAR_3 = (id_pool_t *)VAR_0;

  VAR_3->freeList[VAR_1] = VAR_2;
}
