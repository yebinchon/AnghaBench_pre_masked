
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int numOfPoints; } ;
struct TYPE_8__ {int maxBlocks; TYPE_3__** cacheBlocks; } ;
struct TYPE_7__ {int slot; int currentSlot; int firstSlot; int over; int pos; } ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SCacheInfo ;
typedef TYPE_3__ SCacheBlock ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

void FUNC_1(SCacheInfo *VAR_0, SQuery *VAR_1) {
  SCacheBlock *VAR_2;

  int VAR_3 = FUNC_0(VAR_1) ? -1 : 1;

  if ((FUNC_0(VAR_1) && (VAR_1->slot == VAR_1->currentSlot)) ||
      (!FUNC_0(VAR_1) && (VAR_1->slot == VAR_1->firstSlot))) {
    VAR_1->over = 1;

  } else {
    VAR_1->slot = (VAR_1->slot - VAR_3 + VAR_0->maxBlocks) % VAR_0->maxBlocks;
    VAR_2 = VAR_0->cacheBlocks[VAR_1->slot];
    VAR_1->pos = FUNC_0(VAR_1) ? 0 : VAR_2->numOfPoints - 1;
  }
}
