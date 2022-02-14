
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_18__ {scalar_t__ flag; scalar_t__ colId; int colIdx; } ;
struct TYPE_17__ {size_t numOfColumns; TYPE_1__* schema; } ;
struct TYPE_16__ {size_t numOfCols; size_t numOfOutputCols; TYPE_4__* colList; TYPE_2__* pSelectExpr; } ;
struct TYPE_15__ {scalar_t__ functionId; TYPE_8__ colInfo; } ;
struct TYPE_13__ {scalar_t__ colId; } ;
struct TYPE_14__ {int colIdx; TYPE_3__ data; } ;
struct TYPE_12__ {TYPE_5__ pBase; } ;
struct TYPE_11__ {scalar_t__ colId; } ;
typedef TYPE_5__ SSqlFuncExprMsg ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SMeterObj ;
typedef TYPE_8__ SColIndexEx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(SQuery* VAR_2, SMeterObj* VAR_3) {
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
    return;
  }

  int32_t VAR_4 = 0, VAR_5 = 0;
  while (VAR_4 < VAR_2->numOfCols && VAR_5 < VAR_3->numOfColumns) {
    if (VAR_2->colList[VAR_4].data.colId == VAR_3->schema[VAR_5].colId) {
      VAR_2->colList[VAR_4++].colIdx = (int16_t)VAR_5++;
    } else if (VAR_2->colList[VAR_4].data.colId < VAR_3->schema[VAR_5].colId) {
      VAR_2->colList[VAR_4++].colIdx = -1;
    } else if (VAR_2->colList[VAR_4].data.colId > VAR_3->schema[VAR_5].colId) {
      VAR_5++;
    }
  }

  while (VAR_4 < VAR_2->numOfCols) {
    VAR_2->colList[VAR_4++].colIdx = -1;
  }


  if (VAR_2->pSelectExpr == ((void*)0)) {
    return;
  }

  for(int32_t VAR_6 = 0; VAR_6 < VAR_2->numOfOutputCols; ++VAR_6) {
    SSqlFuncExprMsg* VAR_7 = &VAR_2->pSelectExpr[VAR_6].pBase;
    if (VAR_7->functionId == VAR_1 || VAR_7->colInfo.flag == VAR_0) {
      continue;
    }

    SColIndexEx* VAR_8 = &VAR_7->colInfo;
    for(int32_t VAR_9 = 0; VAR_9 < VAR_2->numOfCols; ++VAR_9) {
      if (VAR_8->colId == VAR_2->colList[VAR_9].data.colId) {
        VAR_8->colIdx = VAR_2->colList[VAR_9].colIdx;
        break;
      }
    }
  }
}
