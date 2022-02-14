
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t int64_t ;
struct TYPE_21__ {scalar_t__ blockId; int notFree; int index; char** offset; int slot; TYPE_5__* pMeterObj; } ;
struct TYPE_20__ {int unCommittedBlocks; int maxBlocks; int currentSlot; int numOfBlocks; scalar_t__ blocks; TYPE_8__** cacheBlocks; } ;
struct TYPE_19__ {int count; int freeSlot; int threshold; int notFreeSlots; int vmutex; scalar_t__* pMem; } ;
struct TYPE_18__ {int vnode; int numOfColumns; int pointsPerBlock; int meterId; int sid; TYPE_1__* schema; scalar_t__ pCache; } ;
struct TYPE_15__ {int totalBlocks; } ;
struct TYPE_17__ {int commitTime; TYPE_2__ cacheNumOfBlocks; } ;
struct TYPE_16__ {int * commitTimer; TYPE_4__ cfg; scalar_t__ pCachePool; } ;
struct TYPE_14__ {int bytes; } ;
typedef TYPE_3__ SVnodeObj ;
typedef TYPE_4__ SVnodeCfg ;
typedef TYPE_5__ SMeterObj ;
typedef TYPE_6__ SCachePool ;
typedef TYPE_7__ SCacheInfo ;
typedef TYPE_8__ SCacheBlock ;


 int FUNC_0 (char*,size_t,int ,int ,...) ;
 int FUNC_1 (char*,size_t,int ,int ,int,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_8__*) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_7(SMeterObj *VAR_3) {
  int VAR_4;
  SCachePool * VAR_5;
  SCacheBlock *VAR_6;
  SCacheInfo * VAR_7;
  SVnodeObj * VAR_8;
  int VAR_9 = 0, VAR_10 = 0;

  VAR_8 = VAR_0 + VAR_3->vnode;
  VAR_5 = (SCachePool *)VAR_8->pCachePool;
  VAR_7 = (SCacheInfo *)VAR_3->pCache;
  SVnodeCfg *VAR_11 = &(VAR_0[VAR_3->vnode].cfg);

  if (VAR_5 == ((void*)0)) return -1;
  FUNC_2(&VAR_5->vmutex);

  if (VAR_7 == ((void*)0) || VAR_7->cacheBlocks == ((void*)0)) {
    FUNC_3(&VAR_5->vmutex);
    FUNC_0("vid:%d sid:%d id:%s, meter is not there", VAR_3->vnode, VAR_3->sid, VAR_3->meterId);
    return -1;
  }

  if (VAR_5->count <= 1) {
    if (VAR_8->commitTimer == ((void*)0))
      VAR_8->commitTimer = FUNC_4(VAR_1, VAR_11->commitTime * 1000, VAR_8, VAR_2);
  }

  if (VAR_7->unCommittedBlocks >= VAR_7->maxBlocks-1) {
    FUNC_5(VAR_8);
    FUNC_3(&VAR_5->vmutex);
    FUNC_0("vid:%d sid:%d id:%s, all blocks are not committed yet....", VAR_3->vnode, VAR_3->sid, VAR_3->meterId);
    return -1;
  }

  while (1) {
    VAR_6 = (SCacheBlock *)(VAR_5->pMem[((int64_t)VAR_5->freeSlot)]);
    if (VAR_6->blockId == 0) break;

    if (VAR_6->notFree) {
      VAR_5->freeSlot++;
      VAR_5->freeSlot = VAR_5->freeSlot % VAR_11->cacheNumOfBlocks.totalBlocks;
      VAR_9++;
      if (VAR_9 > VAR_5->threshold) {
        FUNC_5(VAR_8);
        FUNC_3(&VAR_5->vmutex);
        FUNC_0("vid:%d sid:%d id:%s, committing process is too slow, notFreeSlots:%d....",
               VAR_3->vnode, VAR_3->sid, VAR_3->meterId, VAR_5->notFreeSlots);
        return -1;
      }
    } else {
      SMeterObj *VAR_12 = VAR_6->pMeterObj;
      SCacheInfo *VAR_13 = (SCacheInfo *)VAR_12->pCache;
      int VAR_14 = (VAR_13->currentSlot - VAR_13->numOfBlocks + 1 + VAR_13->maxBlocks) % VAR_13->maxBlocks;
      VAR_6 = VAR_13->cacheBlocks[VAR_14];
      if (VAR_6) {
        VAR_5->freeSlot = VAR_6->index;
        FUNC_6(VAR_6);
        break;
      } else {
        VAR_5->freeSlot = (VAR_5->freeSlot + 1) % VAR_11->cacheNumOfBlocks.totalBlocks;
        VAR_9++;
      }
    }
  }

  VAR_4 = VAR_5->freeSlot;
  VAR_5->freeSlot++;
  VAR_5->freeSlot = VAR_5->freeSlot % VAR_11->cacheNumOfBlocks.totalBlocks;
  VAR_5->notFreeSlots++;

  VAR_6->pMeterObj = VAR_3;
  VAR_6->notFree = 1;
  VAR_6->index = VAR_4;

  VAR_6->offset[0] = ((char *)(VAR_6)) + sizeof(SCacheBlock) + VAR_3->numOfColumns * sizeof(char *);
  for (int VAR_15 = 1; VAR_15 < VAR_3->numOfColumns; ++VAR_15)
    VAR_6->offset[VAR_15] = VAR_6->offset[VAR_15 - 1] + VAR_3->schema[VAR_15 - 1].bytes * VAR_3->pointsPerBlock;

  VAR_7->numOfBlocks++;
  VAR_7->blocks++;
  VAR_7->unCommittedBlocks++;
  VAR_7->currentSlot = (VAR_7->currentSlot + 1) % VAR_7->maxBlocks;
  VAR_6->blockId = VAR_7->blocks;
  VAR_6->slot = VAR_7->currentSlot;
  if (VAR_7->numOfBlocks > VAR_7->maxBlocks) {
    VAR_6 = VAR_7->cacheBlocks[VAR_7->currentSlot];
    FUNC_6(VAR_6);
  }

  VAR_7->cacheBlocks[VAR_7->currentSlot] = (SCacheBlock *)(VAR_5->pMem[(int64_t)VAR_4]);
  FUNC_1("vid:%d sid:%d id:%s, allocate a cache block, numOfBlocks:%d, slot:%d, index:%d notFreeSlots:%d blocks:%d",
         VAR_3->vnode, VAR_3->sid, VAR_3->meterId, VAR_7->numOfBlocks, VAR_7->currentSlot, VAR_4, VAR_5->notFreeSlots,
         VAR_7->blocks);

  if (((VAR_5->notFreeSlots > VAR_5->threshold) || (VAR_7->unCommittedBlocks >= VAR_7->maxBlocks / 2))) {
    FUNC_1("vid:%d sid:%d id:%s, too many unCommitted slots, unCommitted:%d notFreeSlots:%d",
           VAR_3->vnode, VAR_3->sid, VAR_3->meterId, VAR_7->unCommittedBlocks, VAR_5->notFreeSlots);
    FUNC_5(VAR_8);
    VAR_10 = 1;
  }

  FUNC_3(&VAR_5->vmutex);

  return VAR_10;
}
