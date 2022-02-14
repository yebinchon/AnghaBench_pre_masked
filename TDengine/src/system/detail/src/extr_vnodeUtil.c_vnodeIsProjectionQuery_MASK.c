
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {scalar_t__ functionId; } ;
struct TYPE_5__ {TYPE_1__ pBase; } ;
typedef TYPE_2__ SSqlFunctionExpr ;


 scalar_t__ VAR_0 ;

bool FUNC_0(SSqlFunctionExpr* VAR_1, int32_t VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
    if (VAR_1[VAR_3].pBase.functionId != VAR_0) {
      return 0;
    }
  }

  return 1;
}
