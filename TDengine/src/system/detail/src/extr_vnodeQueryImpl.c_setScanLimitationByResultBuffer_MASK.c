
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_10__ {int nStatus; } ;
struct TYPE_9__ {int checkBufferInLoop; size_t numOfOutputCols; int pointsToRead; int pointsOffset; TYPE_1__* pSelectExpr; int pGroupbyExpr; } ;
struct TYPE_8__ {size_t functionId; } ;
struct TYPE_7__ {TYPE_2__ pBase; } ;
typedef TYPE_2__ SSqlFuncExprMsg ;
typedef TYPE_3__ SQuery ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(SQuery *VAR_3) {
  if (FUNC_2(VAR_3)) {
    VAR_3->checkBufferInLoop = 0;
  } else if (FUNC_1(VAR_3->pGroupbyExpr)) {
    VAR_3->checkBufferInLoop = 0;
  } else {
    bool VAR_4 = 0;
    for (int32_t VAR_5 = 0; VAR_5 < VAR_3->numOfOutputCols; ++VAR_5) {
      SSqlFuncExprMsg *VAR_6 = &VAR_3->pSelectExpr[VAR_5].pBase;
      if (VAR_6->functionId == VAR_0 || VAR_6->functionId == VAR_1) {
        continue;
      }

      VAR_4 = FUNC_0(VAR_2[VAR_6->functionId].nStatus);
      if (!VAR_4) {
        break;
      }
    }

    VAR_3->checkBufferInLoop = VAR_4 ? 1 : 0;
  }

  VAR_3->pointsOffset = VAR_3->pointsToRead;
}
