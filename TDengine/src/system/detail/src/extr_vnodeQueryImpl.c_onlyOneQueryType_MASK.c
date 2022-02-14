
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
 size_t VAR_3 ;

__attribute__((used)) static bool FUNC_0(SQuery *VAR_4, int32_t VAR_5, int32_t VAR_6) {
  for (int32_t VAR_7 = 0; VAR_7 < VAR_4->numOfOutputCols; ++VAR_7) {
    int32_t VAR_8 = VAR_4->pSelectExpr[VAR_7].pBase.functionId;

    if (VAR_8 == VAR_2 || VAR_8 == VAR_3 ||
      VAR_8 == VAR_0 || VAR_8 == VAR_1) {
      continue;
    }

    if (VAR_8 != VAR_5 && VAR_8 != VAR_6) {
      return 0;
    }
  }

  return 1;
}
