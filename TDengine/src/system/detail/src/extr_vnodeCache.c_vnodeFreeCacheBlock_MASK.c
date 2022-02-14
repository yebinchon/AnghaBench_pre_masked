
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ pCachePool; } ;
struct TYPE_11__ {scalar_t__ blockId; int index; int slot; scalar_t__ notFree; TYPE_1__* pMeterObj; } ;
struct TYPE_10__ {scalar_t__ numOfBlocks; } ;
struct TYPE_9__ {int notFreeSlots; } ;
struct TYPE_8__ {size_t vnode; int meterId; int sid; scalar_t__ pCache; } ;
typedef TYPE_1__ SMeterObj ;
typedef TYPE_2__ SCachePool ;
typedef TYPE_3__ SCacheInfo ;
typedef TYPE_4__ SCacheBlock ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,size_t,int ,int ,scalar_t__,int ,int ,...) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 TYPE_5__* VAR_0 ;

int FUNC_3(SCacheBlock *VAR_1) {
  SMeterObj * VAR_2;
  SCacheInfo *VAR_3;

  if (VAR_1 == ((void*)0)) return -1;

  VAR_2 = VAR_1->pMeterObj;
  VAR_3 = (SCacheInfo *)VAR_2->pCache;

  if (VAR_2) {
    VAR_3->numOfBlocks--;

    if (VAR_3->numOfBlocks < 0) {
      FUNC_0("vid:%d sid:%d id:%s, numOfBlocks:%d shall never be negative", VAR_2->vnode, VAR_2->sid, VAR_2->meterId,
           VAR_3->numOfBlocks);
    }

    if (VAR_1->blockId == 0) {
      FUNC_0("vid:%d sid:%d id:%s, double free", VAR_2->vnode, VAR_2->sid, VAR_2->meterId);
    }

    SCachePool *VAR_4 = (SCachePool *)VAR_0[VAR_2->vnode].pCachePool;
    if (VAR_1->notFree) {
      VAR_4->notFreeSlots--;
      FUNC_1("vid:%d sid:%d id:%s, cache block is not free, slot:%d, index:%d notFreeSlots:%d",
             VAR_2->vnode, VAR_2->sid, VAR_2->meterId, VAR_1->slot, VAR_1->index, VAR_4->notFreeSlots);
    }

    FUNC_1("vid:%d sid:%d id:%s, free a cache block, numOfBlocks:%d, slot:%d, index:%d notFreeSlots:%d",
           VAR_2->vnode, VAR_2->sid, VAR_2->meterId, VAR_3->numOfBlocks, VAR_1->slot, VAR_1->index,
           VAR_4->notFreeSlots);

    FUNC_2(VAR_1, 0, sizeof(SCacheBlock));

  } else {
    FUNC_0("BUG, pObj is null");
  }

  return 0;
}
