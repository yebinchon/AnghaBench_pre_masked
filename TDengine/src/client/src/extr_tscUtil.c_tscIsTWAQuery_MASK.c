
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ numOfExprs; } ;
struct TYPE_9__ {TYPE_1__ exprsInfo; } ;
struct TYPE_8__ {scalar_t__ functionId; } ;
typedef TYPE_2__ SSqlExpr ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,scalar_t__) ;

bool FUNC_1(SSqlCmd* VAR_1) {
  for (int32_t VAR_2 = 0; VAR_2 < VAR_1->exprsInfo.numOfExprs; ++VAR_2) {
    SSqlExpr* VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (VAR_3 == ((void*)0)) {
      continue;
    }

    int32_t VAR_4 = VAR_3->functionId;
    if (VAR_4 == VAR_0) {
      return 1;
    }
  }

  return 0;
}
