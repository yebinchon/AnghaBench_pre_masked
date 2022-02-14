
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int maxId; int numOfFree; int* freeList; int mutex; scalar_t__ freeSlot; } ;
typedef TYPE_1__ id_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,TYPE_1__*,int) ;
 int FUNC_4 (int *,int *) ;

void *FUNC_5(int VAR_0) {
  id_pool_t *VAR_1;
  int * VAR_2, VAR_3;

  if (VAR_0 < 3) VAR_0 = 3;

  VAR_1 = (id_pool_t *)FUNC_1(sizeof(id_pool_t));
  if (VAR_1 == ((void*)0)) return ((void*)0);

  VAR_2 = (int *)FUNC_1(sizeof(int) * (size_t)VAR_0);
  if (VAR_2 == ((void*)0)) {
    FUNC_0(VAR_1);
    return ((void*)0);
  }

  FUNC_2(VAR_1, 0, sizeof(id_pool_t));
  VAR_1->maxId = VAR_0;
  VAR_1->numOfFree = VAR_0 - 1;
  VAR_1->freeSlot = 0;
  VAR_1->freeList = VAR_2;

  FUNC_4(&VAR_1->mutex, ((void*)0));

  for (VAR_3 = 1; VAR_3 < VAR_0; ++VAR_3) VAR_2[VAR_3 - 1] = VAR_3;

  FUNC_3("pool:%p is setup, maxId:%d", VAR_1, VAR_1->maxId);

  return (void *)VAR_1;
}
