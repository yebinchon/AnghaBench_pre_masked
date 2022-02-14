
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_18__ ;


typedef int int8_t ;
typedef size_t int32_t ;
typedef int (* __block_search_fn_t ) (scalar_t__,int,scalar_t__,int ) ;
struct TYPE_32__ {int numOfPoints; scalar_t__ keyFirst; scalar_t__ keyLast; } ;
struct TYPE_31__ {int meterId; int sid; int vnode; } ;
struct TYPE_28__ {int order; } ;
struct TYPE_30__ {size_t slot; int pos; scalar_t__ lastKey; scalar_t__ ekey; scalar_t__ numOfFilterCols; size_t numOfOutputCols; TYPE_5__ order; int fileId; TYPE_3__* pSelectExpr; } ;
struct TYPE_29__ {scalar_t__ pTSBuf; TYPE_4__* primaryColBuffer; int * pCtx; int * pHeaderFiles; TYPE_8__* pMeterObj; TYPE_7__* pQuery; } ;
struct TYPE_27__ {scalar_t__ data; } ;
struct TYPE_24__ {int colId; } ;
struct TYPE_25__ {size_t functionId; TYPE_1__ colInfo; } ;
struct TYPE_26__ {TYPE_2__ pBase; } ;
struct TYPE_23__ {size_t (* dataReqFunc ) (int *,scalar_t__,scalar_t__,int ,int ) ;} ;
typedef scalar_t__ TSKEY ;
typedef TYPE_6__ SQueryRuntimeEnv ;
typedef int SQueryFileInfo ;
typedef TYPE_7__ SQuery ;
typedef TYPE_8__ SMeterObj ;
typedef int SField ;
typedef TYPE_9__ SCompBlock ;
typedef int SBlockInfo ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_18__* VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ,int ,size_t) ;
 int FUNC_7 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int *,TYPE_9__*,int **) ;
 size_t FUNC_9 (TYPE_9__*,int **,TYPE_6__*,size_t,int,int) ;
 int FUNC_10 (TYPE_7__*,int *) ;
 int FUNC_11 (TYPE_7__*,int *,int *) ;
 int FUNC_12 (char*,int ,int ,size_t,scalar_t__,scalar_t__,int,...) ;
 int FUNC_13 (TYPE_6__*,scalar_t__,scalar_t__) ;
 size_t FUNC_14 (int *,scalar_t__,scalar_t__,int ,int ) ;

int32_t FUNC_15(SCompBlock *VAR_8, SField **VAR_9, int8_t *VAR_10, SQueryRuntimeEnv *VAR_11,
                              int32_t VAR_12, int32_t VAR_13, __block_search_fn_t VAR_14, bool VAR_15) {
  SQuery * VAR_16 = VAR_11->pQuery;
  SMeterObj * VAR_17 = VAR_11->pMeterObj;
  SQueryFileInfo *VAR_18 = &VAR_11->pHeaderFiles[VAR_12];

  TSKEY *VAR_19 = (TSKEY *)VAR_11->primaryColBuffer->data;

  VAR_16->slot = VAR_13;
  VAR_16->pos = FUNC_1(VAR_16) ? 0 : VAR_8->numOfPoints - 1;

  FUNC_4(*VAR_10);
  FUNC_3(*VAR_10);

  if (((VAR_16->lastKey <= VAR_8->keyFirst && VAR_16->ekey >= VAR_8->keyLast && FUNC_1(VAR_16)) ||
       (VAR_16->ekey <= VAR_8->keyFirst && VAR_16->lastKey >= VAR_8->keyLast && !FUNC_1(VAR_16))) &&
      VAR_15) {
    int32_t VAR_20 = 0;
    if (VAR_16->numOfFilterCols > 0) {
      VAR_20 = VAR_0;
    } else {
      for (int32_t VAR_21 = 0; VAR_21 < VAR_16->numOfOutputCols; ++VAR_21) {
        int32_t VAR_22 = VAR_16->pSelectExpr[VAR_21].pBase.functionId;
        VAR_20 |= VAR_7[VAR_22].dataReqFunc(&VAR_11->pCtx[VAR_21], VAR_8->keyFirst, VAR_8->keyLast,
                                          VAR_16->pSelectExpr[VAR_21].pBase.colInfo.colId, *VAR_10);
      }

      if (VAR_11->pTSBuf > 0) {
        VAR_20 |= VAR_0;
      }
    }

    if (VAR_20 == VAR_2) {
      FUNC_12("QInfo:%p vid:%d sid:%d id:%s, slot:%d, data block ignored, brange:%lld-%lld, rows:%d",
             FUNC_0(VAR_16), VAR_17->vnode, VAR_17->sid, VAR_17->meterId, VAR_16->slot,
             VAR_8->keyFirst, VAR_8->keyLast, VAR_8->numOfPoints);

      FUNC_13(VAR_11, VAR_8->keyFirst, VAR_8->keyLast);
    } else if (VAR_20 == VAR_1) {
      if (FUNC_8(VAR_11, VAR_18, VAR_8, VAR_9) < 0) {
        return VAR_6;
      }
    } else {
      FUNC_5(VAR_20 == VAR_0);
      goto _load_all;
    }
  } else {
  _load_all:
    if (FUNC_8(VAR_11, VAR_18, VAR_8, VAR_9) < 0) {
      return VAR_6;
    }

    if ((VAR_16->lastKey <= VAR_8->keyFirst && VAR_16->ekey >= VAR_8->keyLast && FUNC_1(VAR_16)) ||
        (VAR_16->lastKey >= VAR_8->keyLast && VAR_16->ekey <= VAR_8->keyFirst && !FUNC_1(VAR_16))) {





      if (!FUNC_11(VAR_16, *VAR_9, VAR_11->pCtx)) {




        FUNC_12("QInfo:%p id:%s slot:%d, data block ignored by pre-filter, fields loaded, brange:%lld-%lld, rows:%d",
               FUNC_0(VAR_16), VAR_17->meterId, VAR_16->slot, VAR_8->keyFirst, VAR_8->keyLast,
               VAR_8->numOfPoints);
        return VAR_4;
      }
    }

    SBlockInfo VAR_23 = FUNC_7(VAR_8, VAR_3);
    bool VAR_24 = FUNC_10(VAR_16, &VAR_23);






    int32_t VAR_25 = FUNC_9(VAR_8, VAR_9, VAR_11, VAR_12, VAR_24, 0);
    FUNC_2(*VAR_10);

    if (VAR_25 < 0) {
      return VAR_6;
    }


    if (VAR_24) {

      VAR_16->pos =
          VAR_14(VAR_11->primaryColBuffer->data, VAR_8->numOfPoints, VAR_16->lastKey, VAR_16->order.order);

      FUNC_5(VAR_8->keyFirst == VAR_19[0] && VAR_8->keyLast == VAR_19[VAR_8->numOfPoints - 1]);
    }
    FUNC_5(((VAR_16->ekey >= VAR_16->lastKey || VAR_16->ekey == VAR_16->lastKey - 1) && FUNC_1(VAR_16)) ||
           ((VAR_16->ekey <= VAR_16->lastKey || VAR_16->ekey == VAR_16->lastKey + 1) && !FUNC_1(VAR_16)));
  }

  return VAR_5;
}
