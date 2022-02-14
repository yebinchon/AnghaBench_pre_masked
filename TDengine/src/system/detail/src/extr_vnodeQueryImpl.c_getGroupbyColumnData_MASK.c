
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_24__ {size_t colId; size_t type; size_t bytes; } ;
struct TYPE_23__ {size_t colId; size_t type; size_t bytes; } ;
struct TYPE_22__ {size_t numOfCols; TYPE_3__* colList; TYPE_5__* pGroupbyExpr; } ;
struct TYPE_21__ {TYPE_4__* pMeterObj; TYPE_7__* pQuery; } ;
struct TYPE_20__ {size_t numOfGroupCols; TYPE_1__* columnInfo; } ;
struct TYPE_19__ {size_t numOfColumns; TYPE_9__* schema; } ;
struct TYPE_17__ {size_t colId; } ;
struct TYPE_18__ {TYPE_2__ data; } ;
struct TYPE_16__ {scalar_t__ flag; size_t colId; } ;
struct TYPE_15__ {size_t numOfCols; } ;
typedef TYPE_5__ SSqlGroupbyExpr ;
typedef TYPE_6__ SQueryRuntimeEnv ;
typedef TYPE_7__ SQuery ;
typedef TYPE_8__ SField ;
typedef TYPE_9__ SColumn ;
typedef TYPE_10__ SBlockInfo ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int,TYPE_6__*,char*,size_t,size_t,size_t,size_t,size_t) ;

__attribute__((used)) static char *FUNC_1(SQueryRuntimeEnv *VAR_1, SField *VAR_2, SBlockInfo *VAR_3, char *VAR_4,
                                  bool VAR_5, int16_t *VAR_6, int16_t *VAR_7) {
  SQuery *VAR_8 = VAR_1->pQuery;
  char * VAR_9 = ((void*)0);

  int32_t VAR_10 = 0;
  int16_t VAR_11 = 0;

  SSqlGroupbyExpr *VAR_12 = VAR_8->pGroupbyExpr;

  for (int32_t VAR_13 = 0; VAR_13 < VAR_12->numOfGroupCols; ++VAR_13) {
    if (VAR_12->columnInfo[VAR_13].flag == VAR_0) {
      continue;
    }

    int32_t VAR_14 = VAR_12->columnInfo[VAR_13].colId;

    if (VAR_5) {
      for (int32_t VAR_15 = 0; VAR_15 < VAR_3->numOfCols; ++VAR_15) {
        if (VAR_14 == VAR_2[VAR_15].colId) {
          *VAR_6 = VAR_2[VAR_15].type;
          *VAR_7 = VAR_2[VAR_15].bytes;
          VAR_10 = VAR_15;
          break;
        }
      }


      for (int32_t VAR_16 = 0; VAR_16 < VAR_8->numOfCols; ++VAR_16) {
        if (VAR_14 == VAR_8->colList[VAR_16].data.colId) {
          VAR_11 = VAR_16;
          break;
        }
      }
    } else {
      SColumn *VAR_17 = VAR_1->pMeterObj->schema;

      for (int32_t VAR_18 = 0; VAR_18 < VAR_1->pMeterObj->numOfColumns; ++VAR_18) {
        if (VAR_14 == VAR_17[VAR_18].colId) {
          *VAR_6 = VAR_17[VAR_18].type;
          *VAR_7 = VAR_17[VAR_18].bytes;

          VAR_10 = VAR_18;
          VAR_11 = VAR_18;
          break;
        }
      }
    }

    int32_t VAR_19 = VAR_5 ? VAR_11 : VAR_10;
    VAR_9 =
        FUNC_0(VAR_5, VAR_1, VAR_4, VAR_19, VAR_14, *VAR_6, *VAR_7, VAR_11);

    break;
  }

  return VAR_9;
}
