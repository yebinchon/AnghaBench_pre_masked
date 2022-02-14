
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_27__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef size_t int64_t ;
typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_42__ {scalar_t__ startOffset; } ;
struct TYPE_35__ {int order; } ;
struct TYPE_41__ {size_t numOfOutputCols; size_t numOfFilterCols; int checkBufferInLoop; size_t pointsOffset; size_t pos; scalar_t__ lastKey; TYPE_5__* pSelectExpr; TYPE_2__ order; TYPE_6__* pFilterInfo; int precision; int intervalTimeUnit; int nAggTimeInterval; scalar_t__ ekey; scalar_t__ skey; int pGroupbyExpr; } ;
struct TYPE_40__ {TYPE_12__* pTSBuf; int scanFlag; int blockStatus; TYPE_8__* pQuery; TYPE_9__* pCtx; } ;
struct TYPE_31__ {int bytes; int type; int colId; } ;
struct TYPE_33__ {size_t colIdxInBuf; size_t colIdx; TYPE_10__ data; } ;
struct TYPE_39__ {TYPE_1__ info; int pData; } ;
struct TYPE_37__ {size_t functionId; } ;
struct TYPE_38__ {TYPE_4__ pBase; } ;
struct TYPE_36__ {int order; } ;
struct TYPE_34__ {int (* xFunctionF ) (TYPE_9__*,size_t) ;} ;
struct TYPE_32__ {TYPE_3__ cur; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_6__ SSingleColumnFilterInfo ;
typedef TYPE_7__ SQueryRuntimeEnv ;
typedef TYPE_8__ SQuery ;
typedef TYPE_9__ SQLFunctionCtx ;
typedef int SQInfo ;
typedef int SField ;
typedef TYPE_10__ SColumnInfo ;
typedef int SBlockInfo ;
typedef int SArithmeticSupport ;


 size_t FUNC_0 (TYPE_8__*,size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_8__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_27__* VAR_5 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (size_t,int) ;
 int FUNC_6 (int,TYPE_7__*,char*,size_t,int ,int ,int ,size_t) ;
 size_t FUNC_7 (TYPE_7__*,size_t) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_7__*,TYPE_9__*,size_t) ;
 char* FUNC_10 (TYPE_7__*,char*,int *,size_t,size_t,int) ;
 char* FUNC_11 (TYPE_7__*,int *,int *,char*,int,size_t*,size_t*) ;
 size_t FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_8__*,size_t,int *,int *,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int *,size_t,int ,int ) ;
 int FUNC_16 (TYPE_8__*,TYPE_9__*,size_t,char*,char*,size_t,size_t,int *,int,int ,int *,int ) ;
 size_t FUNC_17 (TYPE_7__*,char*,size_t,char*) ;
 int FUNC_18 (TYPE_8__*,int ) ;
 int FUNC_19 (TYPE_9__*,size_t) ;
 size_t FUNC_20 (scalar_t__,int ,int ,int ) ;
 int FUNC_21 (TYPE_12__*) ;
 int FUNC_22 (TYPE_8__*,size_t) ;

__attribute__((used)) static int32_t FUNC_23(SQueryRuntimeEnv *VAR_6, int32_t *VAR_7, TSKEY *VAR_8,
                                        char *VAR_9, SField *VAR_10, SBlockInfo *VAR_11, bool VAR_12) {
  SQLFunctionCtx *VAR_13 = VAR_6->pCtx;
  SQuery * VAR_14 = VAR_6->pQuery;

  int64_t VAR_15 = 0;
  bool VAR_16 = FUNC_14(VAR_14->pGroupbyExpr);

  if (!VAR_16) {
    VAR_15 = FUNC_12(VAR_6);
  }

  SArithmeticSupport *VAR_17 = FUNC_5((size_t)VAR_14->numOfOutputCols, sizeof(SArithmeticSupport));

  int16_t VAR_18 = 0;
  int16_t VAR_19 = 0;

  char *VAR_20 = ((void*)0);
  if (VAR_16) {
    VAR_20 = FUNC_11(VAR_6, VAR_10, VAR_11, VAR_9, VAR_12, &VAR_18, &VAR_19);
  }

  for (int32_t VAR_21 = 0; VAR_21 < VAR_14->numOfOutputCols; ++VAR_21) {
    int32_t VAR_22 = VAR_14->pSelectExpr[VAR_21].pBase.functionId;

    bool VAR_23 = FUNC_13(VAR_14, VAR_21, VAR_11, VAR_10, VAR_12);
    char *VAR_24 = FUNC_10(VAR_6, VAR_9, &VAR_17[VAR_21], VAR_21, *VAR_7, VAR_12);

    TSKEY VAR_25 = FUNC_3(VAR_14) ? VAR_14->skey : VAR_14->ekey;
    int64_t VAR_26 = FUNC_20(VAR_25, VAR_14->nAggTimeInterval, VAR_14->intervalTimeUnit,
                                                             VAR_14->precision);

    FUNC_16(VAR_14, &VAR_13[VAR_21], VAR_26, VAR_24, (char *)VAR_8, (*VAR_7), VAR_22,
                  VAR_10, VAR_23, VAR_6->blockStatus, &VAR_17[VAR_21], VAR_6->scanFlag);
  }


  for (int32_t VAR_27 = 0; VAR_27 < VAR_14->numOfFilterCols; ++VAR_27) {
    SSingleColumnFilterInfo *VAR_28 = &VAR_14->pFilterInfo[VAR_27];
    int32_t VAR_29 = VAR_12 ? VAR_28->info.colIdxInBuf : VAR_28->info.colIdx;
    SColumnInfo * VAR_30 = &VAR_28->info.data;





    VAR_28->pData = FUNC_6(VAR_12, VAR_6, VAR_9, VAR_29, VAR_30->colId,
                                         VAR_30->type, VAR_30->bytes, VAR_28->info.colIdxInBuf);
  }

  int32_t VAR_31 = 0;
  int32_t VAR_32 = FUNC_1(VAR_14->order.order);



  if (VAR_6->pTSBuf != ((void*)0)) {
    SQInfo *VAR_33 = (SQInfo *)FUNC_2(VAR_14);
    FUNC_15("QInfo:%p process data rows, numOfRows:%d, query order:%d, ts comp order:%d", VAR_33, *VAR_7,
           VAR_14->order.order, VAR_6->pTSBuf->cur.order);
  }

  for (int32_t VAR_34 = 0; VAR_34 < (*VAR_7); ++VAR_34) {
    int32_t VAR_35 = FUNC_0(VAR_14, VAR_34, VAR_32);

    if (VAR_6->pTSBuf != ((void*)0)) {
      int32_t VAR_36 = FUNC_7(VAR_6, VAR_35);

      if (VAR_36 == VAR_2) {
        break;
      } else if (VAR_36 == VAR_4) {
        continue;
      } else {
        FUNC_4(VAR_36 == VAR_3);
      }
    }

    if (VAR_14->numOfFilterCols > 0 && (!FUNC_22(VAR_14, VAR_35))) {
      continue;
    }


    if (VAR_16) {
      char *VAR_37 = VAR_20 + VAR_19 * VAR_35;

      int32_t VAR_38 = FUNC_17(VAR_6, VAR_37, VAR_18, VAR_20);
      if (VAR_38 != VAR_1) {
        continue;
      }
    }


    VAR_35 -= VAR_13[0].startOffset;

    for (int32_t VAR_39 = 0; VAR_39 < VAR_14->numOfOutputCols; ++VAR_39) {
      int32_t VAR_40 = VAR_14->pSelectExpr[VAR_39].pBase.functionId;
      if (FUNC_9(VAR_6, &VAR_13[VAR_39], VAR_40)) {
        VAR_5[VAR_40].xFunctionF(&VAR_13[VAR_39], VAR_35);
      }
    }

    if (VAR_6->pTSBuf != ((void*)0)) {

      if (!FUNC_21(VAR_6->pTSBuf)) {
        FUNC_18(VAR_14, VAR_0);
        break;
      }
    }





    if ((VAR_14->checkBufferInLoop == 1) && (++VAR_31) >= VAR_14->pointsOffset) {
      VAR_14->lastKey = VAR_8[VAR_14->pos + VAR_34 * VAR_32] + VAR_32;
      *VAR_7 = VAR_34 + 1;
      break;
    }
  }

  FUNC_8(VAR_17);





  int32_t VAR_41 = 0;
  if (!VAR_16) {
    VAR_41 = FUNC_12(VAR_6) - VAR_15;
  }

  return VAR_41;
}
