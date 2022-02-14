
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef size_t int32_t ;
typedef int count ;
struct TYPE_24__ {TYPE_6__* pCtx; } ;
struct TYPE_29__ {scalar_t__ rawSKey; TYPE_4__ runtimeEnv; } ;
struct TYPE_28__ {scalar_t__* pNextPoint; scalar_t__* pPrevPoint; } ;
struct TYPE_25__ {size_t numOfOutputCols; scalar_t__ interpoType; TYPE_3__* pSelectExpr; int * defaultVal; } ;
struct TYPE_27__ {TYPE_9__* pMeterQuerySupporter; TYPE_5__ query; } ;
struct TYPE_26__ {scalar_t__ functionId; int numOfParams; int inputBytes; TYPE_12__* param; scalar_t__ aOutputBuf; int inputType; } ;
struct TYPE_21__ {scalar_t__ colId; size_t colIdxInBuf; } ;
struct TYPE_22__ {scalar_t__ functionId; TYPE_1__ colInfo; } ;
struct TYPE_23__ {TYPE_2__ pBase; } ;
struct TYPE_20__ {int nType; scalar_t__ i64Key; } ;
struct TYPE_19__ {TYPE_10__* pInterpDetail; } ;
struct TYPE_18__ {int primaryCol; scalar_t__ ts; scalar_t__ type; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SQLFunctionCtx ;
typedef TYPE_7__ SQInfo ;
typedef TYPE_8__ SPointInterpoSupporter ;
typedef TYPE_9__ SMeterQuerySupportObj ;
typedef TYPE_10__ SInterpInfoDetail ;
typedef TYPE_11__ SInterpInfo ;


 size_t FUNC_0 (TYPE_5__*,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_6__*,scalar_t__,size_t,int,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_12__*,char*,int,int ) ;

void FUNC_6(SQInfo *VAR_7, SPointInterpoSupporter *VAR_8) {

  if (!FUNC_4(&VAR_7->query)) {
    return;
  }

  SQuery * VAR_9 = &VAR_7->query;
  SMeterQuerySupportObj *VAR_10 = VAR_7->pMeterQuerySupporter;
  SQueryRuntimeEnv * VAR_11 = &VAR_10->runtimeEnv;

  int32_t VAR_12 = 1;
  TSKEY VAR_13 = *(TSKEY *)VAR_8->pNextPoint[0];

  if (VAR_13 == VAR_10->rawSKey) {

    for (int32_t VAR_14 = 0; VAR_14 < VAR_9->numOfOutputCols; ++VAR_14) {
      FUNC_5(&VAR_11->pCtx[VAR_14].param[3], (char *)&VAR_12, sizeof(VAR_12), VAR_2);

      VAR_11->pCtx[VAR_14].param[0].i64Key = VAR_13;
      VAR_11->pCtx[VAR_14].param[0].nType = VAR_1;
    }
  } else {

    VAR_12 = 2;

    if (VAR_9->interpoType == VAR_6) {
      for (int32_t VAR_15 = 0; VAR_15 < VAR_9->numOfOutputCols; ++VAR_15) {
        SQLFunctionCtx *VAR_16 = &VAR_11->pCtx[VAR_15];


        if (VAR_16->functionId != VAR_4) {
            continue;
        }

        VAR_16->numOfParams = 4;

        SInterpInfo * VAR_17 = (SInterpInfo *)VAR_11->pCtx[VAR_15].aOutputBuf;

        VAR_17->pInterpDetail = FUNC_1(1, sizeof(SInterpInfoDetail));

        SInterpInfoDetail *VAR_18 = VAR_17->pInterpDetail;


        if (VAR_9->pSelectExpr[VAR_15].pBase.colInfo.colId == VAR_0) {
          VAR_18->primaryCol = 1;
        }

        FUNC_5(&VAR_16->param[3], (char *)&VAR_12, sizeof(VAR_12), VAR_2);

        if (FUNC_3((char *)&VAR_9->defaultVal[VAR_15], VAR_16->inputType)) {
          VAR_16->param[1].nType = VAR_3;
        } else {
          FUNC_5(&VAR_16->param[1], (char *)&VAR_9->defaultVal[VAR_15], VAR_16->inputBytes, VAR_16->inputType);
        }

        VAR_18->ts = VAR_10->rawSKey;
        VAR_18->type = VAR_9->interpoType;
      }
    } else {
      TSKEY VAR_19 = *(TSKEY *)VAR_8->pPrevPoint[0];
      TSKEY VAR_20 = *(TSKEY *)VAR_8->pNextPoint[0];

      for (int32_t VAR_21 = 0; VAR_21 < VAR_9->numOfOutputCols; ++VAR_21) {
        SQLFunctionCtx *VAR_22 = &VAR_11->pCtx[VAR_21];


        if (VAR_9->pSelectExpr[VAR_21].pBase.functionId == VAR_5) {
          continue;
        }

        int32_t VAR_23 = VAR_9->pSelectExpr[VAR_21].pBase.colInfo.colIdxInBuf;

        SInterpInfo *VAR_24 = (SInterpInfo *)VAR_11->pCtx[VAR_21].aOutputBuf;

        VAR_24->pInterpDetail = FUNC_1(1, sizeof(SInterpInfoDetail));
        SInterpInfoDetail *VAR_25 = VAR_24->pInterpDetail;

        int32_t VAR_26 = FUNC_0(VAR_9, VAR_21);


        if (VAR_9->pSelectExpr[VAR_21].pBase.colInfo.colId == VAR_0) {
          VAR_25->primaryCol = 1;
        } else {
          FUNC_2(VAR_22, VAR_19, VAR_26, 1, VAR_8->pPrevPoint[VAR_23]);
          FUNC_2(VAR_22, VAR_20, VAR_26, 2, VAR_8->pNextPoint[VAR_23]);
        }

        FUNC_5(&VAR_11->pCtx[VAR_21].param[3], (char *)&VAR_12, sizeof(VAR_12), VAR_2);

        VAR_25->ts = VAR_10->rawSKey;
        VAR_25->type = VAR_9->interpoType;
      }
    }
  }
}
