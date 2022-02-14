
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_14__ {int nStatus; } ;
struct TYPE_11__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_13__ {TYPE_2__ fieldsInfo; } ;
struct TYPE_10__ {scalar_t__ colId; } ;
struct TYPE_12__ {scalar_t__ functionId; TYPE_1__ colInfo; } ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_9__* VAR_7 ;
 int FUNC_0 (TYPE_4__*,char const*) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,scalar_t__) ;

int32_t FUNC_2(SSqlCmd* VAR_8) {
  bool VAR_9 = 0;
  const char* VAR_10 = "column projection is not compatible with interval";
  const char* VAR_11 = "interval not allowed for tag queries";


  for (int32_t VAR_12 = 0; VAR_12 < VAR_8->fieldsInfo.numOfOutputCols; ++VAR_12) {
    SSqlExpr* VAR_13 = FUNC_1(VAR_8, VAR_12);


    if (VAR_13->functionId == VAR_6 && VAR_13->colInfo.colId == VAR_0) {
      bool VAR_14 = 0;
      for(int32_t VAR_15 = 0; VAR_15 < VAR_8->fieldsInfo.numOfOutputCols; ++VAR_15) {
        SSqlExpr* VAR_16 = FUNC_1(VAR_8, VAR_15);
        if ((VAR_7[VAR_16->functionId].nStatus & VAR_3) == VAR_3) {
          VAR_14 = 1;
          break;
        }
      }

      if (VAR_14) {
        continue;
      }
    }

    if (VAR_13->functionId == VAR_6 || VAR_13->functionId == VAR_5 ||
       VAR_13->functionId == VAR_4) {
      VAR_9 = 1;
    }
  }

  if (VAR_9) {
    FUNC_0(VAR_8, VAR_10);
  }

  return VAR_9 == 1 ? VAR_1 : VAR_2;
}
