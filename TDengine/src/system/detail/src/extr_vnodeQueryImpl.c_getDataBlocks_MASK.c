
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_22__ {int* elemSize; char** data; size_t numOfCols; scalar_t__ offset; TYPE_3__* pExpr; } ;
struct TYPE_21__ {size_t colIdxInBuf; size_t colIdx; int colId; int flag; } ;
struct TYPE_20__ {int bytes; int type; int colId; } ;
struct TYPE_19__ {size_t startOffset; int inputBytes; int inputType; } ;
struct TYPE_18__ {size_t pos; size_t numOfCols; TYPE_3__* pSelectExpr; TYPE_1__* colList; } ;
struct TYPE_17__ {TYPE_6__* pCtx; TYPE_5__* pQuery; } ;
struct TYPE_15__ {size_t functionId; TYPE_8__ colInfo; } ;
struct TYPE_16__ {TYPE_2__ pBase; } ;
struct TYPE_14__ {size_t colIdxInBuf; size_t colIdx; TYPE_7__ data; } ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SQLFunctionCtx ;
typedef TYPE_7__ SColumnInfo ;
typedef TYPE_8__ SColIndexEx ;
typedef TYPE_9__ SArithmeticSupport ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 char* FUNC_2 (int,TYPE_4__*,char*,size_t,int ,int ,int,size_t) ;

__attribute__((used)) static char *FUNC_3(SQueryRuntimeEnv *VAR_1, char *VAR_2, SArithmeticSupport *VAR_3, int32_t VAR_4,
                           int32_t VAR_5, bool VAR_6) {
  SQuery * VAR_7 = VAR_1->pQuery;
  SQLFunctionCtx *VAR_8 = VAR_1->pCtx;

  char *VAR_9 = ((void*)0);

  int32_t VAR_10 = VAR_7->pSelectExpr[VAR_4].pBase.functionId;

  if (VAR_10 == VAR_0) {
    VAR_3->pExpr = &VAR_7->pSelectExpr[VAR_4];


    if (FUNC_0(VAR_7)) {
      VAR_8->startOffset = VAR_7->pos;
    } else {
      VAR_8->startOffset = VAR_7->pos - (VAR_5 - 1);
    }

    for (int32_t VAR_11 = 0; VAR_11 < VAR_7->numOfCols; ++VAR_11) {
      int32_t VAR_12 = VAR_6 ? VAR_7->colList[VAR_11].colIdxInBuf : VAR_7->colList[VAR_11].colIdx;

      SColumnInfo *VAR_13 = &VAR_7->colList[VAR_11].data;
      char * VAR_14 = FUNC_2(VAR_6, VAR_1, VAR_2, VAR_12, VAR_13->colId, VAR_13->type,
                                    VAR_13->bytes, VAR_7->colList[VAR_11].colIdxInBuf);

      VAR_3->elemSize[VAR_11] = VAR_13->bytes;
      VAR_3->data[VAR_11] = VAR_14 + VAR_8->startOffset * VAR_3->elemSize[VAR_11];
    }
    VAR_3->numOfCols = VAR_7->numOfCols;
    VAR_3->offset = 0;
  } else {
    SColIndexEx *VAR_15 = &VAR_7->pSelectExpr[VAR_4].pBase.colInfo;
    int32_t VAR_16 = VAR_6 ? VAR_15->colIdxInBuf : VAR_15->colIdx;

    if (FUNC_1(VAR_15->flag)) {
      VAR_9 = ((void*)0);
    } else {





      VAR_9 = FUNC_2(VAR_6, VAR_1, VAR_2, VAR_16, VAR_15->colId, VAR_8[VAR_4].inputType,
                                  VAR_8[VAR_4].inputBytes, VAR_15->colIdxInBuf);
    }
  }

  return VAR_9;
}
