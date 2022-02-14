
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_7__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_5__ {size_t functionId; } ;
struct TYPE_6__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SQuery ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

bool FUNC_0(SQuery *VAR_3) {
  for (int32_t VAR_4 = 0; VAR_4 < VAR_3->numOfOutputCols; ++VAR_4) {
    int32_t VAR_5 = VAR_3->pSelectExpr[VAR_4].pBase.functionId;
    if (VAR_5 == VAR_2) {
      continue;
    }

    if (VAR_5 == VAR_1 || VAR_5 == VAR_0) {
      return 1;
    }
  }

  return 0;
}
