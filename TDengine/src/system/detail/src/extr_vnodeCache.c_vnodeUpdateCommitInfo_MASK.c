
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {scalar_t__ pCachePool; } ;
struct TYPE_10__ {int index; int slot; scalar_t__ notFree; } ;
struct TYPE_9__ {int commitPoint; int commitSlot; int maxBlocks; int unCommittedBlocks; TYPE_4__** cacheBlocks; } ;
struct TYPE_8__ {int notFreeSlots; int vmutex; } ;
struct TYPE_7__ {size_t vnode; int pointsPerBlock; int commitCount; int freePoints; int meterId; int sid; scalar_t__ pCache; } ;
typedef TYPE_1__ SMeterObj ;
typedef TYPE_2__ SCachePool ;
typedef TYPE_3__ SCacheInfo ;
typedef TYPE_4__ SCacheBlock ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,size_t,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_6__* VAR_0 ;

void FUNC_5(SMeterObj *VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4) {
  SCacheInfo * VAR_5;
  SCacheBlock *VAR_6;
  SCachePool * VAR_7;

  VAR_5 = (SCacheInfo *)VAR_1->pCache;
  VAR_7 = (SCachePool *)VAR_0[VAR_1->vnode].pCachePool;

  int VAR_8 =
      (VAR_5->commitPoint == VAR_1->pointsPerBlock) ? (VAR_5->commitSlot + 1) % VAR_5->maxBlocks : VAR_5->commitSlot;
  int VAR_9 = 0;

  while (VAR_8 != VAR_2 || ((VAR_8 == VAR_2) && (VAR_3 == VAR_1->pointsPerBlock))) {
    VAR_9++;
    FUNC_3(&VAR_7->vmutex);
    VAR_6 = VAR_5->cacheBlocks[VAR_8];
    FUNC_0(VAR_6->notFree);
    VAR_6->notFree = 0;
    VAR_5->unCommittedBlocks--;
    VAR_7->notFreeSlots--;
    FUNC_4(&VAR_7->vmutex);

    FUNC_2("vid:%d sid:%d id:%s, cache block is committed, slot:%d, index:%d notFreeSlots:%d, unCommittedBlocks:%d",
           VAR_1->vnode, VAR_1->sid, VAR_1->meterId, VAR_6->slot, VAR_6->index, VAR_7->notFreeSlots,
           VAR_5->unCommittedBlocks);
    if (VAR_8 == VAR_2) break;
    VAR_8 = (VAR_8 + 1) % VAR_5->maxBlocks;
  }

  FUNC_1(&VAR_1->freePoints, VAR_1->pointsPerBlock * VAR_9);
  VAR_5->commitSlot = VAR_2;
  VAR_5->commitPoint = VAR_3;
  VAR_1->commitCount = VAR_4;
}
