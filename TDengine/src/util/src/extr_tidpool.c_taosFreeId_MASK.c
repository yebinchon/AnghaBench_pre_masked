
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* freeList; int maxId; int freeSlot; int numOfFree; int mutex; } ;
typedef TYPE_1__ id_pool_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(void *VAR_0, int VAR_1) {
  id_pool_t *VAR_2;
  int VAR_3;

  VAR_2 = (id_pool_t *)VAR_0;
  if (VAR_2->freeList == ((void*)0) || VAR_2->maxId == 0) return;
  if (VAR_1 <= 0 || VAR_1 >= VAR_2->maxId) return;
  if (FUNC_1(&VAR_2->mutex) != 0) FUNC_0("lock pIdPool Mutex");

  VAR_3 = (VAR_2->freeSlot + VAR_2->numOfFree) % VAR_2->maxId;
  VAR_2->freeList[VAR_3] = VAR_1;
  VAR_2->numOfFree++;

  if (FUNC_2(&VAR_2->mutex) != 0) FUNC_0("unlock pIdPool Mutex");
}
