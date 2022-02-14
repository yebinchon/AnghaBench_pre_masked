
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ int32_t ;
struct TYPE_16__ {scalar_t__ functionId; } ;
struct TYPE_14__ {int numOfGroupCols; TYPE_2__* columnInfo; } ;
struct TYPE_12__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_15__ {TYPE_3__ groupbyExpr; TYPE_1__ fieldsInfo; } ;
struct TYPE_13__ {scalar_t__ colIdx; } ;
struct TYPE_11__ {int nStatus; } ;
typedef TYPE_4__ SSqlCmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_10__* VAR_2 ;
 int FUNC_0 (TYPE_4__*,char const*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,scalar_t__) ;

bool FUNC_3(SSqlCmd* VAR_3) {
  const char* VAR_4 = "TWA not allowed to apply to super table directly";
  const char* VAR_5 = "functions not supported for super table";
  const char* VAR_6 = "TWA only support group by tbname for super table query";


  for (int32_t VAR_7 = 0; VAR_7 < VAR_3->fieldsInfo.numOfOutputCols; ++VAR_7) {
    int32_t VAR_8 = FUNC_2(VAR_3, VAR_7)->functionId;
    if ((VAR_2[VAR_8].nStatus & VAR_0) == 0) {
      return 1;
    }
  }

  if (FUNC_1(VAR_3)) {
    if (VAR_3->groupbyExpr.numOfGroupCols == 0) {
      FUNC_0(VAR_3, VAR_4);
      return 1;
    }

    if (VAR_3->groupbyExpr.numOfGroupCols != 1 || VAR_3->groupbyExpr.columnInfo[0].colIdx != VAR_1) {
      FUNC_0(VAR_3, VAR_6);
      return 1;
    }
  }

  return 0;
}
