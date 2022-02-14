
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pool; int blockSize; int numOfBlock; int* freeList; size_t first; size_t numOfFree; int mutex; } ;
typedef TYPE_1__ pool_t ;
typedef scalar_t__ mpool_h ;


 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(mpool_h VAR_0, char *VAR_1) {
  int VAR_2;
  pool_t *VAR_3 = (pool_t *)VAR_0;

  if (VAR_1 == ((void*)0)) return;

  VAR_2 = (int)(VAR_1 - VAR_3->pool) % VAR_3->blockSize;
  if (VAR_2 != 0) {
    FUNC_1("invalid free address:%p\n", VAR_1);
    return;
  }

  VAR_2 = (int)((VAR_1 - VAR_3->pool) / VAR_3->blockSize);
  if (VAR_2 < 0 || VAR_2 >= VAR_3->numOfBlock) {
    FUNC_1("mempool: error, invalid address:%p\n", VAR_1);
    return;
  }

  FUNC_0(VAR_1, 0, (size_t)VAR_3->blockSize);

  FUNC_2(&VAR_3->mutex);

  VAR_3->freeList[(VAR_3->first + VAR_3->numOfFree) % VAR_3->numOfBlock] = VAR_2;
  VAR_3->numOfFree++;

  FUNC_3(&VAR_3->mutex);
}
