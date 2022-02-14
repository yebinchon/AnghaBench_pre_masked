
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numOfFree; char* pool; int blockSize; int* freeList; size_t first; int numOfBlock; int mutex; } ;
typedef TYPE_1__ pool_t ;
typedef scalar_t__ mpool_h ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

char *FUNC_3(mpool_h VAR_0) {
  char * VAR_1 = ((void*)0);
  pool_t *VAR_2 = (pool_t *)VAR_0;

  FUNC_1(&(VAR_2->mutex));

  if (VAR_2->numOfFree > 0) {
    VAR_1 = VAR_2->pool + VAR_2->blockSize * (VAR_2->freeList[VAR_2->first]);
    VAR_2->first++;
    VAR_2->first = VAR_2->first % VAR_2->numOfBlock;
    VAR_2->numOfFree--;
  }

  FUNC_2(&(VAR_2->mutex));

  if (VAR_1 == ((void*)0)) FUNC_0("mempool: out of memory");
  return VAR_1;
}
