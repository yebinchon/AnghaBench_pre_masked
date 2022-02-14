
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ numOfSids; scalar_t__ numOfSubSet; } ;
typedef TYPE_1__ tSidSet ;
typedef size_t int32_t ;
struct TYPE_8__ {scalar_t__ flag; } ;
struct TYPE_7__ {scalar_t__ numOfGroupCols; TYPE_3__* columnInfo; } ;
typedef TYPE_2__ SSqlGroupbyExpr ;
typedef TYPE_3__ SColIndexEx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(SSqlGroupbyExpr *VAR_1, tSidSet *VAR_2) {
  if (VAR_1 == ((void*)0) || VAR_1->numOfGroupCols == 0) {
    return 0;
  }

  for (int32_t VAR_3 = 0; VAR_3 < VAR_1->numOfGroupCols; ++VAR_3) {
    SColIndexEx *VAR_4 = &VAR_1->columnInfo[VAR_3];
    if (VAR_4->flag == VAR_0) {
      FUNC_0(VAR_2->numOfSids == VAR_2->numOfSubSet);
      return 1;
    }
  }

  return 0;
}
