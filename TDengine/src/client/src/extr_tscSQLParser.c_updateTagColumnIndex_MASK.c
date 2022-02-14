
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_19__ {size_t numOfTags; size_t* tagColumnIndex; } ;
struct TYPE_15__ {size_t numOfExprs; } ;
struct TYPE_14__ {size_t numOfGroupCols; TYPE_1__* columnInfo; } ;
struct TYPE_18__ {TYPE_3__ exprsInfo; TYPE_2__ groupbyExpr; } ;
struct TYPE_16__ {size_t colIdx; int flag; } ;
struct TYPE_17__ {TYPE_4__ colInfo; } ;
struct TYPE_13__ {size_t colIdx; } ;
typedef TYPE_5__ SSqlExpr ;
typedef TYPE_6__ SSqlCmd ;
typedef TYPE_7__ SMeterMetaInfo ;


 int FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (TYPE_6__*,size_t) ;
 TYPE_5__* FUNC_2 (TYPE_6__*,size_t) ;

void FUNC_3(SSqlCmd* VAR_0, int32_t VAR_1) {
  SMeterMetaInfo* VAR_2 = FUNC_1(VAR_0, VAR_1);


  for (int32_t VAR_3 = 0; VAR_3 < VAR_0->groupbyExpr.numOfGroupCols; ++VAR_3) {
    int32_t VAR_4 = VAR_0->groupbyExpr.columnInfo[VAR_3].colIdx;

    for (int32_t VAR_5 = 0; VAR_5 < VAR_2->numOfTags; ++VAR_5) {
      int32_t VAR_6 = VAR_2->tagColumnIndex[VAR_5];
      if (VAR_6 == VAR_4) {
        VAR_0->groupbyExpr.columnInfo[VAR_3].colIdx = VAR_5;
        break;
      }
    }
  }


  for (int32_t VAR_7 = 0; VAR_7 < VAR_0->exprsInfo.numOfExprs; ++VAR_7) {
    SSqlExpr* VAR_8 = FUNC_2(VAR_0, VAR_7);
    if (!FUNC_0(VAR_8->colInfo.flag)) {
      continue;
    }

    for (int32_t VAR_9 = 0; VAR_9 < VAR_2->numOfTags; ++VAR_9) {
      if (VAR_8->colInfo.colIdx == VAR_2->tagColumnIndex[VAR_9]) {
        VAR_8->colInfo.colIdx = VAR_9;
        break;
      }
    }
  }
}
