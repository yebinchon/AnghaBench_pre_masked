
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int numOfPoints; scalar_t__* offset; } ;
struct TYPE_8__ {int maxBlocks; TYPE_3__** cacheBlocks; } ;
struct TYPE_7__ {scalar_t__ skey; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQuery ;
typedef TYPE_2__ SCacheInfo ;
typedef TYPE_3__ SCacheBlock ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int32_t FUNC_1(SCacheInfo *VAR_0, SQuery *VAR_1, int32_t VAR_2, int32_t VAR_3,
                                      int32_t VAR_4) {
  int32_t VAR_5 = 0;

  while (1) {
    int32_t VAR_6 = (VAR_4 - VAR_3 + 1 + VAR_0->maxBlocks) % VAR_0->maxBlocks;
    if (VAR_6 == 0) {
      VAR_6 = VAR_0->maxBlocks;
    }

    VAR_5 = (VAR_3 + (VAR_6 >> 1)) % VAR_0->maxBlocks;
    SCacheBlock *VAR_7 = VAR_0->cacheBlocks[VAR_5];

    TSKEY VAR_8 = *((TSKEY *)VAR_7->offset[0]);
    TSKEY VAR_9 = *((TSKEY *)(VAR_7->offset[0] + (VAR_7->numOfPoints - 1) * VAR_2));

    if (VAR_6 == 1) {
      break;
    }

    if (VAR_1->skey > VAR_9) {
      if (VAR_6 == 2) break;
      if (!FUNC_0(VAR_1)) {
        int VAR_10 = (VAR_5 + 1 + VAR_0->maxBlocks) % VAR_0->maxBlocks;
        SCacheBlock *VAR_11 = VAR_0->cacheBlocks[VAR_10];
        TSKEY VAR_12 = *((TSKEY *)(VAR_11->offset[0]));
        if (VAR_1->skey < VAR_12) break;
      }
      VAR_3 = (VAR_5 + 1) % VAR_0->maxBlocks;
    } else if (VAR_1->skey < VAR_8) {
      if (FUNC_0(VAR_1)) {
        int VAR_13 = (VAR_5 - 1 + VAR_0->maxBlocks) % VAR_0->maxBlocks;
        SCacheBlock *VAR_14 = VAR_0->cacheBlocks[VAR_13];
        TSKEY VAR_15 = *((TSKEY *)(VAR_14->offset[0] + (VAR_14->numOfPoints - 1) * VAR_2));
        if (VAR_1->skey > VAR_15) {
          break;
        }
      }
      VAR_4 = (VAR_5 - 1 + VAR_0->maxBlocks) % VAR_0->maxBlocks;
    } else {
      break;
    }
  }

  return VAR_5;
}
