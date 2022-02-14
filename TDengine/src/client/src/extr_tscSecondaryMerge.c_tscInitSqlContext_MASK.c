
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_30__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_19__ ;
typedef struct TYPE_39__ TYPE_18__ ;
typedef struct TYPE_38__ TYPE_17__ ;
typedef struct TYPE_37__ TYPE_16__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


struct TYPE_33__ {TYPE_7__* pSchema; } ;
typedef TYPE_12__ tOrderDescriptor ;
typedef size_t int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_50__ {int orderColId; int order; } ;
struct TYPE_49__ {int i64Key; int nType; } ;
struct TYPE_48__ {TYPE_6__* pFields; scalar_t__* colOffset; } ;
struct TYPE_47__ {int bytes; int type; } ;
struct TYPE_46__ {scalar_t__ data; } ;
struct TYPE_45__ {TYPE_3__* pExprs; } ;
struct TYPE_44__ {int functionId; } ;
struct TYPE_43__ {int nStatus; } ;
struct TYPE_42__ {int maxCapacity; } ;
struct TYPE_41__ {scalar_t__ data; } ;
struct TYPE_40__ {TYPE_18__* pCtx; TYPE_17__* pResInfo; TYPE_5__* pTempBuffer; TYPE_2__* resColModel; TYPE_1__* pResultBuf; } ;
struct TYPE_32__ {scalar_t__ tagsLen; scalar_t__ numOfTagCols; TYPE_18__** pTagCtxList; } ;
struct TYPE_39__ {int size; int hasNull; TYPE_11__ tagInfo; TYPE_17__* resultInfo; TYPE_8__* param; scalar_t__ aOutputBuf; scalar_t__ ptsOutputBuf; int currentStage; scalar_t__ startOffset; int outputType; int outputBytes; int inputBytes; int inputType; scalar_t__ aInputElemBuf; int functionId; int order; } ;
struct TYPE_38__ {int superTableQ; scalar_t__ bufLen; void* interResultBuf; } ;
struct TYPE_31__ {size_t numOfOutputCols; } ;
struct TYPE_37__ {TYPE_10__ fieldsInfo; TYPE_9__ order; TYPE_4__ exprsInfo; } ;
struct TYPE_36__ {size_t functionId; scalar_t__ resBytes; scalar_t__ interResBytes; } ;
struct TYPE_35__ {int * bytes; } ;
struct TYPE_34__ {int bytes; int type; } ;
typedef TYPE_13__ TAOS_FIELD ;
typedef TYPE_14__ SSqlRes ;
typedef TYPE_15__ SSqlExpr ;
typedef TYPE_16__ SSqlCmd ;
typedef TYPE_17__ SResultInfo ;
typedef TYPE_18__ SQLFunctionCtx ;
typedef TYPE_19__ SLocalReducer ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_30__* VAR_8 ;
 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_18__**) ;
 TYPE_13__* FUNC_2 (TYPE_16__*,size_t) ;
 int FUNC_3 (TYPE_16__*,size_t) ;
 TYPE_15__* FUNC_4 (TYPE_16__*,size_t) ;

__attribute__((used)) static void FUNC_5(SSqlCmd *VAR_9, SSqlRes *VAR_10, SLocalReducer *VAR_11, tOrderDescriptor *VAR_12) {




  for (int32_t VAR_13 = 0; VAR_13 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_13) {
    SQLFunctionCtx *VAR_14 = &VAR_11->pCtx[VAR_13];

    VAR_14->aOutputBuf = VAR_11->pResultBuf->data + FUNC_3(VAR_9, VAR_13) * VAR_11->resColModel->maxCapacity;
    VAR_14->order = VAR_9->order.order;
    VAR_14->functionId = VAR_9->exprsInfo.pExprs[VAR_13].functionId;


    VAR_14->aInputElemBuf = VAR_11->pTempBuffer->data + VAR_12->pSchema->colOffset[VAR_13];


    VAR_14->inputType = VAR_12->pSchema->pFields[VAR_13].type;
    VAR_14->inputBytes = VAR_12->pSchema->pFields[VAR_13].bytes;

    TAOS_FIELD *VAR_15 = FUNC_2(VAR_9, VAR_13);

    VAR_14->outputBytes = VAR_15->bytes;
    VAR_14->outputType = VAR_15->type;

    VAR_14->startOffset = 0;
    VAR_14->size = 1;
    VAR_14->hasNull = 1;
    VAR_14->currentStage = VAR_1;

    VAR_10->bytes[VAR_13] = VAR_15->bytes;

    SSqlExpr *VAR_16 = FUNC_4(VAR_9, VAR_13);


    int32_t VAR_17 = VAR_16->functionId;
    if (VAR_17 == VAR_6 || VAR_17 == VAR_4) {
      VAR_14->ptsOutputBuf = VAR_11->pCtx[0].aOutputBuf;
      VAR_14->param[2].i64Key = VAR_9->order.order;
      VAR_14->param[2].nType = VAR_2;
      VAR_14->param[1].i64Key = VAR_9->order.orderColId;
    }

    SResultInfo *VAR_18 = &VAR_11->pResInfo[VAR_13];
    VAR_18->bufLen = VAR_16->interResBytes;
    VAR_18->interResultBuf = FUNC_0(1, (size_t)VAR_18->bufLen);

    VAR_14->resultInfo = &VAR_11->pResInfo[VAR_13];
    VAR_14->resultInfo->superTableQ = 1;
  }

  int16_t VAR_19 = 0;
  int16_t VAR_20 = 0;
  SQLFunctionCtx** VAR_21 = FUNC_0(VAR_9->fieldsInfo.numOfOutputCols, VAR_0);

  SQLFunctionCtx* VAR_22 = ((void*)0);
  for(int32_t VAR_23 = 0; VAR_23 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_23) {
    SSqlExpr *VAR_24 = FUNC_4(VAR_9, VAR_23);
    if (VAR_24->functionId == VAR_5 || VAR_24->functionId == VAR_7) {
      VAR_20 += VAR_24->resBytes;
      VAR_21[VAR_19++] = &VAR_11->pCtx[VAR_23];
    } else if ((VAR_8[VAR_24->functionId].nStatus & VAR_3) != 0) {
      VAR_22 = &VAR_11->pCtx[VAR_23];
    }
  }

  if (VAR_19 == 0) {
    FUNC_1(VAR_21);
  } else {
    VAR_22->tagInfo.pTagCtxList = VAR_21;
    VAR_22->tagInfo.numOfTagCols = VAR_19;
    VAR_22->tagInfo.tagsLen = VAR_20;
  }
}
