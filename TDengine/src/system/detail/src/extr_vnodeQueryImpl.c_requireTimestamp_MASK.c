
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_9__ {int nStatus; } ;
struct TYPE_8__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_6__ {size_t functionId; } ;
struct TYPE_7__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SQuery ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;

bool FUNC_0(SQuery *VAR_2) {
  for (int32_t VAR_3 = 0; VAR_3 < VAR_2->numOfOutputCols; VAR_3++) {
    int32_t VAR_4 = VAR_2->pSelectExpr[VAR_3].pBase.functionId;
    if ((VAR_1[VAR_4].nStatus & VAR_0) != 0) {
      return 1;
    }
  }
  return 0;
}
