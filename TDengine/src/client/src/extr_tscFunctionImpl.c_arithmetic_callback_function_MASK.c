
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {char** data; int offset; int* elemSize; TYPE_3__* pExpr; } ;
struct TYPE_6__ {size_t numOfCols; TYPE_1__* pReqColumns; } ;
struct TYPE_7__ {TYPE_2__ pBinExprInfo; } ;
struct TYPE_5__ {size_t colId; size_t colIdxInBuf; } ;
typedef TYPE_3__ SSqlFunctionExpr ;
typedef TYPE_4__ SArithmeticSupport ;


 int FUNC_0 (int) ;

char *FUNC_1(void *VAR_0, char *VAR_1, int32_t VAR_2) {
  SArithmeticSupport *VAR_3 = (SArithmeticSupport *)VAR_0;

  SSqlFunctionExpr *VAR_4 = VAR_3->pExpr;
  int32_t VAR_5 = -1;

  for (int32_t VAR_6 = 0; VAR_6 < VAR_4->pBinExprInfo.numOfCols; ++VAR_6) {
    if (VAR_2 == VAR_4->pBinExprInfo.pReqColumns[VAR_6].colId) {
      VAR_5 = VAR_4->pBinExprInfo.pReqColumns[VAR_6].colIdxInBuf;
      break;
    }
  }

  FUNC_0(VAR_5 >= 0 && VAR_2 >= 0);
  return VAR_3->data[VAR_5] + VAR_3->offset * VAR_3->elemSize[VAR_5];
}
