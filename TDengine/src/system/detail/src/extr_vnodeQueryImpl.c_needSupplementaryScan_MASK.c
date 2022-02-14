
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_8__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_6__ {size_t functionId; } ;
struct TYPE_7__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SQuery ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

bool FUNC_1(SQuery *VAR_7) {
  for (int32_t VAR_8 = 0; VAR_8 < VAR_7->numOfOutputCols; ++VAR_8) {
    int32_t VAR_9 = VAR_7->pSelectExpr[VAR_8].pBase.functionId;
    if (VAR_9 == VAR_5 || VAR_9 == VAR_6 || VAR_9 == VAR_4) {
      continue;
    }

    if (((VAR_9 == VAR_2 || VAR_9 == VAR_3) && FUNC_0(VAR_7)) ||
        ((VAR_9 == VAR_0 || VAR_9 == VAR_1) && !FUNC_0(VAR_7))) {
      return 1;
    }
  }

  return 0;
}
