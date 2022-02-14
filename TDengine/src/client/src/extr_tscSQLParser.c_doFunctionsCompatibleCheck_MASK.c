
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_30__ {scalar_t__ colId; } ;
struct TYPE_29__ {int pMeterMeta; } ;
struct TYPE_24__ {scalar_t__ numOfGroupCols; TYPE_8__* columnInfo; } ;
struct TYPE_22__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_28__ {scalar_t__ command; scalar_t__ nAggTimeInterval; TYPE_2__ groupbyExpr; TYPE_1__ fieldsInfo; } ;
struct TYPE_25__ {scalar_t__ colId; scalar_t__ colIdx; } ;
struct TYPE_27__ {scalar_t__ functionId; TYPE_3__ colInfo; } ;
struct TYPE_26__ {TYPE_6__ cmd; } ;
struct TYPE_23__ {int nStatus; } ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlExpr ;
typedef TYPE_6__ SSqlCmd ;
typedef int SSchema ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SColIndexEx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_21__* VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,char const*) ;
 int * FUNC_6 (int ) ;
 TYPE_7__* FUNC_7 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 TYPE_5__* FUNC_9 (TYPE_6__*,scalar_t__) ;
 int FUNC_10 (TYPE_6__*) ;

int32_t FUNC_11(SSqlObj* VAR_11) {
  const char* VAR_12 = "functions/columns not allowed in group by query";
  const char* VAR_13 = "interval not allowed in group by normal column";
  const char* VAR_14 = "group by not allowed on projection query";
  const char* VAR_15 = "tags retrieve not compatible with group by";
  const char* VAR_16 = "retrieve tags not compatible with group by or interval query";

  SSqlCmd* VAR_17 = &VAR_11->cmd;
  SMeterMetaInfo* VAR_18 = FUNC_7(VAR_17, 0);


  if (VAR_17->command == VAR_8) {
    if (VAR_17->groupbyExpr.numOfGroupCols > 0 || VAR_17->nAggTimeInterval > 0) {
      FUNC_5(VAR_17, VAR_16);
      return VAR_1;
    } else {
      return VAR_2;
    }
  }

  if (VAR_17->groupbyExpr.numOfGroupCols > 0) {
    SSchema* VAR_19 = FUNC_6(VAR_18->pMeterMeta);
    int16_t VAR_20 = 0;
    int16_t VAR_21 = 0;
    char* VAR_22 = ((void*)0);


    if (FUNC_4(VAR_17) && FUNC_1(VAR_17)) {
      FUNC_10(VAR_17);
      return FUNC_3(VAR_17);
    }


    for (int32_t VAR_23 = 0; VAR_23 < VAR_17->fieldsInfo.numOfOutputCols; ++VAR_23) {
      SSqlExpr* VAR_24 = FUNC_9(VAR_17, VAR_23);
      int32_t VAR_25 = VAR_24->functionId;





      if (VAR_25 == VAR_5 && VAR_24->colInfo.colId != VAR_0) {
        bool VAR_26 = 0;
        for (int32_t VAR_27 = 0; VAR_27 < VAR_17->groupbyExpr.numOfGroupCols; ++VAR_27) {
          SColIndexEx* VAR_28 = &VAR_17->groupbyExpr.columnInfo[VAR_27];
          if (VAR_28->colId == VAR_24->colInfo.colId) {
            VAR_26 = 1;
            break;
          }
        }

        if (!VAR_26) {
          return VAR_1;
        }
      }

      if (FUNC_0(VAR_10[VAR_25].nStatus) && VAR_25 != VAR_7 && VAR_25 != VAR_3 &&
          VAR_25 != VAR_6 &&
          (VAR_25 == VAR_5 && VAR_24->colInfo.colId != VAR_0)) {
        FUNC_5(VAR_17, VAR_12);
        return VAR_1;
      }

      if (VAR_25 == VAR_4 && VAR_24->colInfo.colIdx == VAR_9) {
        FUNC_5(VAR_17, VAR_12);
        return VAR_1;
      }
    }

    if (FUNC_2(VAR_17) != VAR_2) {
      return VAR_1;
    }





    if (FUNC_3(VAR_17) != VAR_2) {
      return VAR_1;
    }


    if (FUNC_8(VAR_17)) {
      FUNC_5(VAR_17, VAR_14);
      return VAR_1;
    }
  } else {
    return FUNC_2(VAR_17);
  }
}
