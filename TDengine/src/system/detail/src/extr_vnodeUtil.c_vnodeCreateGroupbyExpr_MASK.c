
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int numOfGroupCols; int orderByIdx; int orderType; scalar_t__ groupbyTagIds; } ;
struct TYPE_5__ {int numOfGroupCols; int columnInfo; int orderIndex; int orderType; } ;
typedef TYPE_1__ SSqlGroupbyExpr ;
typedef TYPE_2__ SQueryMeterMsg ;
typedef int SColIndexEx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

SSqlGroupbyExpr* FUNC_2(SQueryMeterMsg* VAR_1, int32_t* VAR_2) {
  if (VAR_1->numOfGroupCols == 0) {
    return ((void*)0);
  }


  SSqlGroupbyExpr* VAR_3 =
      (SSqlGroupbyExpr*)FUNC_0(sizeof(SSqlGroupbyExpr) + VAR_1->numOfGroupCols * sizeof(SColIndexEx));
  if (VAR_3 == ((void*)0)) {
    *VAR_2 = VAR_0;
    return ((void*)0);
  }

  SColIndexEx* VAR_4 = (SColIndexEx*)VAR_1->groupbyTagIds;

  VAR_3->numOfGroupCols = VAR_1->numOfGroupCols;
  VAR_3->orderType = VAR_1->orderType;
  VAR_3->orderIndex = VAR_1->orderByIdx;

  FUNC_1(VAR_3->columnInfo, VAR_4, sizeof(SColIndexEx) * VAR_3->numOfGroupCols);



  return VAR_3;
}
