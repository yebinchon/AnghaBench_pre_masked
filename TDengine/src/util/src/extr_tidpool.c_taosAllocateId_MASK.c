
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxId; scalar_t__ numOfFree; int* freeList; size_t freeSlot; int mutex; } ;
typedef TYPE_1__ id_pool_t ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(void *VAR_0) {
  id_pool_t *VAR_1;
  int VAR_2 = -1;
  if (VAR_0 == ((void*)0)) return VAR_2;

  VAR_1 = (id_pool_t *)VAR_0;

  if (VAR_1->maxId < 3) FUNC_0("pool:%p is messed up, maxId:%d", VAR_1, VAR_1->maxId);

  if (FUNC_2(&VAR_1->mutex) != 0) FUNC_1("lock pIdPool Mutex");

  if (VAR_1->numOfFree > 0) {
    VAR_2 = VAR_1->freeList[VAR_1->freeSlot];
    VAR_1->freeSlot = (VAR_1->freeSlot + 1) % VAR_1->maxId;
    VAR_1->numOfFree--;
  }

  if (FUNC_3(&VAR_1->mutex) != 0) FUNC_1("unlock pIdPool Mutex");

  return VAR_2;
}
