
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_21__ {int numOfNullPoints; int min; int max; int sum; int maxIndex; int minIndex; } ;
struct TYPE_16__ {int isSet; int numOfNull; int min; int max; int sum; int maxIndex; int minIndex; } ;
struct TYPE_20__ {int scanFlag; int hasNull; int blockStatus; int startOffset; int size; TYPE_2__* param; int * ptsList; TYPE_1__ preAggVals; void* aInputElemBuf; int nStartQueryTimestamp; } ;
struct TYPE_19__ {int pos; int ekey; int skey; } ;
struct TYPE_18__ {int EKey; int SKey; } ;
struct TYPE_17__ {void* pz; } ;
struct TYPE_15__ {TYPE_3__* interResultBuf; } ;
struct TYPE_14__ {int nStatus; } ;
typedef TYPE_3__ STwaInfo ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SQLFunctionCtx ;
typedef TYPE_6__ SField ;


 TYPE_12__* FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_10__* VAR_9 ;

void FUNC_2(SQuery *VAR_10, SQLFunctionCtx *VAR_11, int64_t VAR_12, void *VAR_13,
                   char *VAR_14, int32_t VAR_15, int32_t VAR_16, SField *VAR_17, bool VAR_18,
                   int32_t VAR_19, void *VAR_20, int32_t VAR_21) {
  int32_t VAR_22 = (FUNC_1(VAR_10)) ? VAR_10->pos : VAR_10->pos - (VAR_15 - 1);

  VAR_11->nStartQueryTimestamp = VAR_12;
  VAR_11->scanFlag = VAR_21;

  VAR_11->aInputElemBuf = VAR_13;
  VAR_11->hasNull = VAR_18;
  VAR_11->blockStatus = VAR_19;

  if (VAR_17 != ((void*)0)) {
    VAR_11->preAggVals.isSet = 1;
    VAR_11->preAggVals.minIndex = VAR_17->minIndex;
    VAR_11->preAggVals.maxIndex = VAR_17->maxIndex;
    VAR_11->preAggVals.sum = VAR_17->sum;
    VAR_11->preAggVals.max = VAR_17->max;
    VAR_11->preAggVals.min = VAR_17->min;
    VAR_11->preAggVals.numOfNull = VAR_17->numOfNullPoints;
  } else {
    VAR_11->preAggVals.isSet = 0;
  }

  if ((VAR_9[VAR_16].nStatus & VAR_0) != 0 && (VAR_14 != ((void*)0))) {
    VAR_11->ptsList = (int64_t *)(VAR_14 + VAR_22 * VAR_8);
  }

  if (VAR_16 >= VAR_4 && VAR_16 <= VAR_5) {



    VAR_11->ptsList = (int64_t *)(VAR_14 + VAR_22 * VAR_8);
  } else if (VAR_16 == VAR_6 || VAR_16 == VAR_2 || VAR_16 == VAR_7 ||
             VAR_16 == VAR_3) {







    if (VAR_16 == VAR_7) {
      STwaInfo *VAR_23 = FUNC_0(VAR_11)->interResultBuf;
      VAR_23->SKey = VAR_10->skey;
      VAR_23->EKey = VAR_10->ekey;
    }

    VAR_11->ptsList = (int64_t *)(VAR_14 + VAR_22 * VAR_8);

  } else if (VAR_16 == VAR_1) {
    VAR_11->param[0].pz = VAR_20;
  }

  VAR_11->startOffset = VAR_22;
  VAR_11->size = VAR_15;
}
