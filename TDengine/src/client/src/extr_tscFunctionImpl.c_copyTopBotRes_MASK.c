
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int i64Key; double dKey; } ;
struct TYPE_14__ {int pTags; int timestamp; TYPE_1__ v; } ;
typedef TYPE_4__ tValuePair ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_13__ {int numOfTagCols; TYPE_2__** pTagCtxList; } ;
struct TYPE_17__ {scalar_t__ currentStage; TYPE_3__ tagInfo; int * ptsOutputBuf; int inputType; scalar_t__ aOutputBuf; int order; } ;
struct TYPE_16__ {int numOfRes; TYPE_5__* interResultBuf; } ;
struct TYPE_15__ {TYPE_4__** res; } ;
struct TYPE_12__ {char* aOutputBuf; int outputBytes; } ;
typedef int TSKEY ;
typedef TYPE_5__ STopBotInfo ;
typedef TYPE_6__ SResultInfo ;
typedef TYPE_7__ SQLFunctionCtx ;


 int FUNC_0 (int ) ;
 TYPE_6__* FUNC_1 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;






 char** FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,size_t) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char**) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_3, int32_t VAR_4) {
  SResultInfo *VAR_5 = FUNC_1(VAR_3);
  STopBotInfo *VAR_6 = VAR_5->interResultBuf;

  tValuePair **VAR_7 = VAR_6->res;
  int32_t VAR_8 = 0;


  if (VAR_3->currentStage == VAR_2) {
    VAR_8 = VAR_1;
  } else {
    VAR_8 = FUNC_0(VAR_3->order);
  }

  int32_t VAR_9 = FUNC_1(VAR_3)->numOfRes;

  switch (VAR_4) {
    case 130: {
      int32_t *VAR_10 = (int32_t *)VAR_3->aOutputBuf;
      for (int32_t VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11, VAR_10 += VAR_8) {
        *VAR_10 = VAR_7[VAR_11]->v.i64Key;
      }
      break;
    }
    case 133: {
      int64_t *VAR_12 = (int64_t *)VAR_3->aOutputBuf;
      for (int32_t VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13, VAR_12 += VAR_8) {
        *VAR_12 = VAR_7[VAR_13]->v.i64Key;
      }
      break;
    }
    case 132: {
      double *VAR_14 = (double *)VAR_3->aOutputBuf;
      for (int32_t VAR_15 = 0; VAR_15 < VAR_9; ++VAR_15, VAR_14 += VAR_8) {
        *VAR_14 = VAR_7[VAR_15]->v.dKey;
      }
      break;
    }
    case 131: {
      float *VAR_16 = (float *)VAR_3->aOutputBuf;
      for (int32_t VAR_17 = 0; VAR_17 < VAR_9; ++VAR_17, VAR_16 += VAR_8) {
        *VAR_16 = VAR_7[VAR_17]->v.dKey;
      }
      break;
    }
    case 129: {
      int16_t *VAR_18 = (int16_t *)VAR_3->aOutputBuf;
      for (int32_t VAR_19 = 0; VAR_19 < VAR_9; ++VAR_19, VAR_18 += VAR_8) {
        *VAR_18 = VAR_7[VAR_19]->v.i64Key;
      }
      break;
    }
    case 128: {
      int8_t *VAR_20 = (int8_t *)VAR_3->aOutputBuf;
      for (int32_t VAR_21 = 0; VAR_21 < VAR_9; ++VAR_21, VAR_20 += VAR_8) {
        *VAR_20 = VAR_7[VAR_21]->v.i64Key;
      }
      break;
    }
    default: {
      FUNC_4("top/bottom function not support data type:%d", VAR_3->inputType);
      return;
    }
  }


  TSKEY *VAR_22 = VAR_3->ptsOutputBuf;
  for (int32_t VAR_23 = 0; VAR_23 < VAR_9; ++VAR_23, VAR_22 += VAR_8) {
    *VAR_22 = VAR_7[VAR_23]->timestamp;
  }



  char **VAR_24 = FUNC_2(VAR_3->tagInfo.numOfTagCols, VAR_0);
  for (int32_t VAR_25 = 0; VAR_25 < VAR_3->tagInfo.numOfTagCols; ++VAR_25) {
    VAR_24[VAR_25] = VAR_3->tagInfo.pTagCtxList[VAR_25]->aOutputBuf;
  }

  for (int32_t VAR_26 = 0; VAR_26 < VAR_9; ++VAR_26, VAR_22 += VAR_8) {
    int16_t VAR_27 = 0;
    for (int32_t VAR_28 = 0; VAR_28 < VAR_3->tagInfo.numOfTagCols; ++VAR_28) {
      FUNC_3(VAR_24[VAR_28], VAR_7[VAR_26]->pTags + VAR_27, (size_t)VAR_3->tagInfo.pTagCtxList[VAR_28]->outputBytes);
      VAR_27 += VAR_3->tagInfo.pTagCtxList[VAR_28]->outputBytes;
      VAR_24[VAR_28] += VAR_3->tagInfo.pTagCtxList[VAR_28]->outputBytes;
    }
  }

  FUNC_5(VAR_24);
}
