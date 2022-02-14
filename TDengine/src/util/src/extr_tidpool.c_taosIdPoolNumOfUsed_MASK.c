
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxId; int numOfFree; } ;
typedef TYPE_1__ id_pool_t ;



int FUNC_0(void *VAR_0) {
  id_pool_t *VAR_1 = (id_pool_t *)VAR_0;

  return VAR_1->maxId - VAR_1->numOfFree - 1;
}
