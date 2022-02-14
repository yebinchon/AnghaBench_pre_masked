
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_13__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_15__ {TYPE_2__ fieldsInfo; } ;
struct TYPE_12__ {scalar_t__ colId; } ;
struct TYPE_14__ {scalar_t__ functionId; TYPE_1__ colInfo; } ;
struct TYPE_11__ {int nStatus; } ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_10__* VAR_8 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,char const*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_3(SSqlCmd* VAR_9) {
  const char* VAR_10 = "only one selectivity function allowed in presence of tags function";
  const char* VAR_11 = "functions not allowed";

  bool VAR_12 = 0;
  int16_t VAR_13 = 0;
  int16_t VAR_14 = 0;
  int16_t VAR_15 = 0;

  for (int32_t VAR_16 = 0; VAR_16 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_16) {
    SSqlExpr* VAR_17 = FUNC_2(VAR_9, VAR_16);
    if (VAR_17->functionId == VAR_6 ||
        (VAR_17->functionId == VAR_5 && VAR_17->colInfo.colId == VAR_0)) {
      VAR_12 = 1;
      break;
    }
  }

  if (VAR_12) {
    for (int32_t VAR_18 = 0; VAR_18 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_18) {
      int16_t VAR_19 = FUNC_2(VAR_9, VAR_18)->functionId;
      if (VAR_19 == VAR_6 || VAR_19 == VAR_5 || VAR_19 == VAR_7) {
        continue;
      }

      if ((VAR_8[VAR_19].nStatus & VAR_3) != 0) {
        VAR_14++;
      } else {
        VAR_15++;
      }
    }



    if (VAR_15 > 0) {
      FUNC_1(VAR_9, VAR_10);
      return VAR_1;
    }




    if (VAR_14 == 1) {
      FUNC_0(VAR_9);
    } else if (VAR_14 > 1) {




      for (int32_t VAR_20 = 0; VAR_20 < VAR_9->fieldsInfo.numOfOutputCols; ++VAR_20) {
        int16_t VAR_21 = FUNC_2(VAR_9, VAR_20)->functionId;
        if (VAR_21 == VAR_6) {
          continue;
        }

        if (((VAR_8[VAR_21].nStatus & VAR_3) != 0) && (VAR_21 != VAR_4)) {
          FUNC_1(VAR_9, VAR_10);
          return VAR_1;
        }
      }

      FUNC_0(VAR_9);
    }
  }

  return VAR_2;
}
