
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_16__ {size_t numOfCols; } ;
struct TYPE_15__ {scalar_t__ colId; int flag; } ;
struct TYPE_14__ {scalar_t__ colId; } ;
struct TYPE_13__ {size_t numOfOutputCols; TYPE_2__* pSelectExpr; } ;
struct TYPE_11__ {TYPE_5__ colInfo; } ;
struct TYPE_12__ {TYPE_1__ pBase; } ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SField ;
typedef TYPE_5__ SColIndexEx ;
typedef TYPE_6__ SBlockInfo ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static SField *FUNC_1(SQuery *VAR_0, SBlockInfo *VAR_1, SField *VAR_2, int32_t VAR_3) {

  if (VAR_2 == ((void*)0) || VAR_3 >= VAR_0->numOfOutputCols) {
    return ((void*)0);
  }

  SColIndexEx *VAR_4 = &VAR_0->pSelectExpr[VAR_3].pBase.colInfo;


  if (FUNC_0(VAR_4->flag)) {
    return ((void*)0);
  }





  for (int32_t VAR_5 = 0; VAR_5 < VAR_1->numOfCols; ++VAR_5) {
    if (VAR_4->colId == VAR_2[VAR_5].colId) {
      return &VAR_2[VAR_5];
    }
  }

  return ((void*)0);
}
