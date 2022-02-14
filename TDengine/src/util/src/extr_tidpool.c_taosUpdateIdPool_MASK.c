
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxId; int* freeList; int mutex; int numOfFree; } ;
typedef TYPE_1__ id_pool_t ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(id_pool_t *VAR_0, int VAR_1) {
  id_pool_t *VAR_2 = (id_pool_t*)VAR_0;
  if (VAR_1 <= VAR_2->maxId) {
    return -1;
  }

  int *VAR_3, VAR_4;
  VAR_3 = (int *)FUNC_1(sizeof(int) * (size_t)VAR_1);
  if (VAR_3 == ((void*)0)) {
    return -1;
  }
  for (VAR_4 = 1; VAR_4 < VAR_1; ++VAR_4) {
    VAR_3[VAR_4 - 1] = VAR_4;
  }

  if (FUNC_4(&VAR_2->mutex) != 0) FUNC_3("lock pIdPool Mutex");

  FUNC_2(VAR_3, VAR_2->freeList, sizeof(int) * (size_t)VAR_2->maxId);
  VAR_2->numOfFree += (VAR_1 - VAR_2->maxId);
  VAR_2->maxId = VAR_1;

  int *VAR_5 = VAR_2->freeList;
  VAR_2->freeList = VAR_3;
  FUNC_0(VAR_5);

  if (FUNC_5(&VAR_2->mutex) != 0) FUNC_3("unlock pIdPool Mutex");

  return 0;
}
