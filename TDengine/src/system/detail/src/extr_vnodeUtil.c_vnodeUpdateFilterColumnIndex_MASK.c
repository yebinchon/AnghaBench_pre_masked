
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef size_t int16_t ;
struct TYPE_19__ {scalar_t__ numOfFilterCols; size_t numOfCols; scalar_t__ numOfOutputCols; TYPE_7__* colList; TYPE_4__* pSelectExpr; TYPE_3__* pFilterInfo; } ;
struct TYPE_18__ {size_t numOfCols; TYPE_6__* pReqColumns; int * pBinExpr; } ;
struct TYPE_15__ {scalar_t__ colId; } ;
struct TYPE_17__ {scalar_t__ colIdxInBuf; int* req; TYPE_5__ data; int colIdx; } ;
struct TYPE_16__ {scalar_t__ colId; scalar_t__ colIdxInBuf; } ;
struct TYPE_14__ {TYPE_8__ pBinExprInfo; } ;
struct TYPE_11__ {scalar_t__ colId; } ;
struct TYPE_12__ {scalar_t__ colIdxInBuf; int colIdx; TYPE_1__ data; } ;
struct TYPE_13__ {TYPE_2__ info; } ;
typedef TYPE_8__ SSqlBinaryExprInfo ;
typedef TYPE_9__ SQuery ;


 int FUNC_0 (int) ;

void FUNC_1(SQuery* VAR_0) {
  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->numOfFilterCols; ++VAR_1) {
    for (int16_t VAR_2 = 0; VAR_2 < VAR_0->numOfCols; ++VAR_2) {
      if (VAR_0->pFilterInfo[VAR_1].info.data.colId == VAR_0->colList[VAR_2].data.colId) {
        VAR_0->pFilterInfo[VAR_1].info.colIdx = VAR_0->colList[VAR_2].colIdx;
        VAR_0->pFilterInfo[VAR_1].info.colIdxInBuf = VAR_0->colList[VAR_2].colIdxInBuf;


        VAR_0->colList[VAR_2].req[1] = 1;
        break;
      }
    }
  }


  if (VAR_0->pSelectExpr != ((void*)0)) {
    for (int32_t VAR_3 = 0; VAR_3 < VAR_0->numOfOutputCols; ++VAR_3) {
      SSqlBinaryExprInfo* VAR_4 = &VAR_0->pSelectExpr[VAR_3].pBinExprInfo;
      if (VAR_4->pBinExpr != ((void*)0)) {
        for (int16_t VAR_5 = 0; VAR_5 < VAR_4->numOfCols; ++VAR_5) {
          for (int32_t VAR_6 = 0; VAR_6 < VAR_0->numOfCols; ++VAR_6) {
            if (VAR_4->pReqColumns[VAR_5].colId == VAR_0->colList[VAR_6].data.colId) {
              VAR_4->pReqColumns[VAR_5].colIdxInBuf = VAR_0->colList[VAR_6].colIdxInBuf;
              FUNC_0(VAR_0->colList[VAR_6].colIdxInBuf == VAR_6);
              break;
            }
          }
        }
      }
    }
  }
}
