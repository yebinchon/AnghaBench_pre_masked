
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_15__ {scalar_t__ numOfNullPoints; } ;
struct TYPE_14__ {TYPE_3__* pSelectExpr; } ;
struct TYPE_11__ {int flag; } ;
struct TYPE_12__ {TYPE_1__ colInfo; } ;
struct TYPE_13__ {TYPE_2__ pBase; } ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SField ;
typedef int SBlockInfo ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int *,TYPE_5__*,size_t) ;

__attribute__((used)) static bool FUNC_2(SQuery *VAR_0, int32_t VAR_1, SBlockInfo *VAR_2, SField *VAR_3, bool VAR_4) {
  bool VAR_5 = 1;

  if (FUNC_0(VAR_0->pSelectExpr[VAR_1].pBase.colInfo.flag)) {
    VAR_5 = 0;
  } else if (VAR_4) {
    if (VAR_3 == ((void*)0)) {
      VAR_5 = 0;
    } else {
      SField *VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_1);
      if (VAR_6 != ((void*)0) && VAR_6->numOfNullPoints == 0) {
        VAR_5 = 0;
      }
    }
  }

  return VAR_5;
}
