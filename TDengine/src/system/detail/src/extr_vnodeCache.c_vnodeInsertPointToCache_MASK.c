
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ pCachePool; } ;
struct TYPE_13__ {scalar_t__ numOfPoints; scalar_t__* offset; } ;
struct TYPE_12__ {scalar_t__ numOfBlocks; size_t currentSlot; TYPE_5__** cacheBlocks; } ;
struct TYPE_11__ {int count; } ;
struct TYPE_10__ {size_t vnode; scalar_t__ pointsPerBlock; int numOfColumns; int freePoints; TYPE_1__* schema; scalar_t__ pCache; } ;
struct TYPE_9__ {int bytes; } ;
typedef TYPE_2__ SMeterObj ;
typedef TYPE_3__ SCachePool ;
typedef TYPE_4__ SCacheInfo ;
typedef TYPE_5__ SCacheBlock ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_6__* VAR_0 ;

int FUNC_3(SMeterObj *VAR_1, char *VAR_2) {
  SCacheBlock *VAR_3;
  SCacheInfo * VAR_4;
  SCachePool * VAR_5;

  VAR_4 = (SCacheInfo *)VAR_1->pCache;
  VAR_5 = (SCachePool *)VAR_0[VAR_1->vnode].pCachePool;

  if (VAR_4->numOfBlocks == 0) {
    if (FUNC_2(VAR_1) < 0) {
      return -1;
    }
  }

  if (VAR_4->currentSlot < 0) return -1;
  VAR_3 = VAR_4->cacheBlocks[VAR_4->currentSlot];
  if (VAR_3->numOfPoints >= VAR_1->pointsPerBlock) {
    if (FUNC_2(VAR_1) < 0) return -1;
    VAR_3 = VAR_4->cacheBlocks[VAR_4->currentSlot];
  }

  for (int VAR_6 = 0; VAR_6 < VAR_1->numOfColumns; ++VAR_6) {
    FUNC_1(VAR_3->offset[VAR_6] + VAR_3->numOfPoints * VAR_1->schema[VAR_6].bytes, VAR_2,
           VAR_1->schema[VAR_6].bytes);
    VAR_2 += VAR_1->schema[VAR_6].bytes;
  }

  FUNC_0(&VAR_1->freePoints, 1);
  VAR_3->numOfPoints++;
  VAR_5->count++;

  return 0;
}
