
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_13__ {scalar_t__ pCachePool; } ;
struct TYPE_12__ {size_t numOfBlocks; size_t currentSlot; TYPE_1__** cacheBlocks; } ;
struct TYPE_11__ {int vmutex; } ;
struct TYPE_10__ {size_t currentSlot; size_t numOfBlocks; int blockId; int firstSlot; } ;
struct TYPE_9__ {int blockId; } ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SCachePool ;
typedef TYPE_4__ SCacheInfo ;


 int FUNC_0 (size_t,size_t,TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_5__* VAR_0 ;

void FUNC_3(SQuery *VAR_1, SCacheInfo *VAR_2, int32_t VAR_3) {

  int32_t VAR_4 = 0;
  int32_t VAR_5 = 0;

  SCachePool *VAR_6 = (SCachePool *)VAR_0[VAR_3].pCachePool;
  FUNC_1(&VAR_6->vmutex);
  VAR_4 = VAR_2->numOfBlocks;
  VAR_5 = VAR_2->currentSlot;
  FUNC_2(&VAR_6->vmutex);


  VAR_1->currentSlot = VAR_5;
  VAR_1->numOfBlocks = VAR_4;
  VAR_1->firstSlot = FUNC_0(VAR_4, VAR_5, VAR_2);
  ;
  if (VAR_1->numOfBlocks > 0) {
    VAR_1->blockId = VAR_2->cacheBlocks[VAR_1->currentSlot]->blockId;
  }
}
