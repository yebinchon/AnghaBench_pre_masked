
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxId; int* freeList; scalar_t__ numOfFree; scalar_t__ freeSlot; } ;
typedef TYPE_1__ id_pool_t ;



void FUNC_0(void *VAR_0) {
  id_pool_t *VAR_1;
  int VAR_2 = 0;

  VAR_1 = (id_pool_t *)VAR_0;
  VAR_1->numOfFree = 0;
  VAR_1->freeSlot = 0;

  for (int VAR_3 = 1; VAR_3 < VAR_1->maxId; ++VAR_3) {
    if (VAR_1->freeList[VAR_3] == 0) {
      VAR_1->freeList[VAR_2] = VAR_3;
      VAR_1->numOfFree++;
      VAR_2++;
    }
  }
}
