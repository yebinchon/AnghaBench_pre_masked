
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_19__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_35__ {size_t columnIndex; int tableIndex; } ;
struct TYPE_34__ {int member_0; } ;
struct TYPE_33__ {TYPE_19__* pMeterMeta; } ;
struct TYPE_32__ {size_t type; size_t bytes; char* name; } ;
struct TYPE_28__ {size_t numOfOutputCols; } ;
struct TYPE_27__ {size_t numOfGroupCols; int tableIndex; TYPE_10__* columnInfo; } ;
struct TYPE_31__ {scalar_t__ nAggTimeInterval; TYPE_2__ fieldsInfo; TYPE_1__ groupbyExpr; } ;
struct TYPE_29__ {scalar_t__ colId; int flag; } ;
struct TYPE_30__ {TYPE_3__ colInfo; } ;
struct TYPE_26__ {size_t numOfColumns; } ;
struct TYPE_25__ {size_t colIdx; scalar_t__ colId; int flag; } ;
typedef TYPE_4__ SSqlExpr ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SSchema ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SColumnList ;
typedef TYPE_9__ SColumnIndex ;
typedef TYPE_10__ SColIndexEx ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (TYPE_5__*,size_t) ;
 int FUNC_2 (TYPE_5__*,size_t,TYPE_8__*,size_t,size_t,char*) ;
 int FUNC_3 (TYPE_5__*,char const*) ;
 TYPE_6__* FUNC_4 (TYPE_19__*) ;
 TYPE_7__* FUNC_5 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,size_t) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,size_t,int ,TYPE_9__*,size_t,size_t,size_t) ;

__attribute__((used)) static int32_t FUNC_8(SSqlCmd* VAR_8) {
  const char* VAR_9 = "interval not allowed in group by normal column";

  SMeterMetaInfo* VAR_10 = FUNC_5(VAR_8, 0);

  SSchema* VAR_11 = FUNC_4(VAR_10->pMeterMeta);
  int16_t VAR_12 = 0;
  int16_t VAR_13 = 0;
  char* VAR_14 = ((void*)0);

  for (int32_t VAR_15 = 0; VAR_15 < VAR_8->groupbyExpr.numOfGroupCols; ++VAR_15) {
    SColIndexEx* VAR_16 = &VAR_8->groupbyExpr.columnInfo[VAR_15];

    int16_t VAR_17 = VAR_16->colIdx;
    if (VAR_16->colIdx == VAR_6) {
      VAR_13 = VAR_3;
      VAR_12 = VAR_5;
      VAR_14 = VAR_7;
    } else {
      VAR_17 = (FUNC_0(VAR_16->flag)) ? VAR_10->pMeterMeta->numOfColumns + VAR_16->colIdx
                                                    : VAR_16->colIdx;

      VAR_13 = VAR_11[VAR_17].type;
      VAR_12 = VAR_11[VAR_17].bytes;
      VAR_14 = VAR_11[VAR_17].name;
    }

    if (FUNC_0(VAR_16->flag)) {
      SColumnIndex VAR_18 = {.tableIndex = VAR_8->groupbyExpr.tableIndex, .columnIndex = VAR_17};

      SSqlExpr* VAR_19 =
          FUNC_7(VAR_8, VAR_8->fieldsInfo.numOfOutputCols, VAR_4, &VAR_18, VAR_13, VAR_12, VAR_12);

      VAR_19->colInfo.flag = VAR_2;


      SColumnList VAR_20 = {0};
      FUNC_2(VAR_8, VAR_8->fieldsInfo.numOfOutputCols, &VAR_20, VAR_12, VAR_13, VAR_14);
    } else {

      if (VAR_8->nAggTimeInterval > 0) {
        FUNC_3(VAR_8, VAR_9);
        return VAR_0;
      }

      bool VAR_21 = 0;
      for (int32_t VAR_22 = 0; VAR_22 < VAR_8->fieldsInfo.numOfOutputCols; ++VAR_22) {
        SSqlExpr* VAR_23 = FUNC_6(VAR_8, VAR_22);
        if (VAR_23->colInfo.colId == VAR_16->colId) {
          break;
        }
      }





      if (!VAR_21) {
        FUNC_1(VAR_8, VAR_15);
      }
    }
  }

  return VAR_1;
}
