
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_17__ {scalar_t__ numOfGroupCols; TYPE_3__* columnInfo; } ;
struct TYPE_14__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_20__ {int type; TYPE_4__ groupbyExpr; TYPE_1__ fieldsInfo; } ;
struct TYPE_15__ {scalar_t__ colId; } ;
struct TYPE_19__ {scalar_t__ functionId; int numOfParams; TYPE_5__* param; TYPE_2__ colInfo; } ;
struct TYPE_18__ {int i64Key; } ;
struct TYPE_16__ {scalar_t__ colId; } ;
struct TYPE_13__ {int nStatus; } ;
typedef TYPE_6__ SSqlExpr ;
typedef TYPE_7__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_12__* VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_0 (TYPE_7__*,char const*) ;
 TYPE_6__* FUNC_1 (TYPE_7__*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(SSqlCmd* VAR_11) {
  const char* VAR_12 = "column on select clause not allowed";

  int32_t VAR_13 = 0;
  int32_t VAR_14 = FUNC_1(VAR_11, VAR_13)->functionId;


  if (VAR_14 == VAR_6 || VAR_14 == VAR_7) {
    VAR_13++;
  }

  int32_t VAR_15 = VAR_10[FUNC_1(VAR_11, VAR_13)->functionId];



  for (int32_t VAR_16 = VAR_13 + 1; VAR_16 < VAR_11->fieldsInfo.numOfOutputCols; ++VAR_16) {
    SSqlExpr* VAR_17 = FUNC_1(VAR_11, VAR_16);

    int16_t VAR_18 = VAR_17->functionId;
    if (VAR_18 == VAR_5 || VAR_18 == VAR_4 || VAR_18 == VAR_6) {
      continue;
    }

    if (VAR_18 == VAR_3 && VAR_17->colInfo.colId == VAR_0) {
      continue;
    }

    if (VAR_10[VAR_18] != VAR_15) {
      return 0;
    }
  }


  if ((VAR_11->type & VAR_8) == VAR_8) {
    bool VAR_19 = 0;
    for (int32_t VAR_20 = 0; VAR_20 < VAR_11->fieldsInfo.numOfOutputCols; ++VAR_20) {
      int16_t VAR_21 = FUNC_1(VAR_11, VAR_20)->functionId;

      if (VAR_21 == VAR_3 || VAR_21 == VAR_5 || VAR_21 == VAR_6 ||
          VAR_21 == VAR_2) {
        continue;
      }

      if ((VAR_9[VAR_21].nStatus & VAR_1) == 0) {
        VAR_19 = 1;
        break;
      }
    }


    if (VAR_19) {
      VAR_11->type &= (~VAR_8);


      if (VAR_11->groupbyExpr.numOfGroupCols == 0) {
        return 0;
      }


      int32_t VAR_22 = 0;
      for (int32_t VAR_23 = 0; VAR_23 < VAR_11->fieldsInfo.numOfOutputCols; ++VAR_23) {
        SSqlExpr* VAR_24 = FUNC_1(VAR_11, VAR_23);
        if (VAR_24->functionId == VAR_3) {
          VAR_22 += 1;

          bool VAR_25 = 0;
          for (int32_t VAR_26 = 0; VAR_26 < VAR_11->groupbyExpr.numOfGroupCols; ++VAR_26) {
            if (VAR_24->colInfo.colId == VAR_11->groupbyExpr.columnInfo[VAR_26].colId) {
              VAR_25 = 1;

              VAR_24->param[0].i64Key = 1;
              VAR_24->numOfParams = 1;
              break;
            }
          }

          if (!VAR_25) {
            FUNC_0(VAR_11, VAR_12);
            return 0;
          }
        }
      }
    }
  }

  return 1;
}
