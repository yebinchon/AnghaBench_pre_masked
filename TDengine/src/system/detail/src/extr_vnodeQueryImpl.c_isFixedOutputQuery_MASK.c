
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {int nStatus; } ;
struct TYPE_11__ {scalar_t__ nAggTimeInterval; size_t numOfOutputCols; TYPE_1__* pSelectExpr; int pGroupbyExpr; } ;
struct TYPE_9__ {scalar_t__ colIdx; } ;
struct TYPE_10__ {size_t functionId; int numOfParams; TYPE_2__ colInfo; } ;
struct TYPE_8__ {TYPE_3__ pBase; } ;
typedef TYPE_3__ SSqlFuncExprMsg ;
typedef TYPE_4__ SQuery ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_7__* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

bool FUNC_3(SQuery *VAR_5) {
  if (VAR_5->nAggTimeInterval != 0) {
    return 0;
  }


  if (FUNC_2(VAR_5) || FUNC_1(VAR_5->pGroupbyExpr)) {
    return 1;
  }

  for (int32_t VAR_6 = 0; VAR_6 < VAR_5->numOfOutputCols; ++VAR_6) {
    SSqlFuncExprMsg *VAR_7 = &VAR_5->pSelectExpr[VAR_6].pBase;


    if (VAR_6 == 0 && VAR_7->functionId == VAR_1 && VAR_7->numOfParams == 1 &&
        VAR_7->colInfo.colIdx == VAR_0) {
      continue;
    }

    if (VAR_7->functionId == VAR_2 || VAR_7->functionId == VAR_3) {
      continue;
    }






    if (!FUNC_0(VAR_4[VAR_7->functionId].nStatus)) {
      return 1;
    }
  }

  return 0;
}
