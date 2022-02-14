
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_21__ {TYPE_7__* pResult; TYPE_1__* pSidSet; } ;
struct TYPE_20__ {int nAlloc; } ;
struct TYPE_19__ {TYPE_5__* pSelectExpr; int pGroupbyExpr; } ;
struct TYPE_17__ {scalar_t__ functionId; TYPE_3__* arg; } ;
struct TYPE_18__ {scalar_t__ resType; TYPE_4__ pBase; } ;
struct TYPE_15__ {int i64; } ;
struct TYPE_16__ {TYPE_2__ argValue; } ;
struct TYPE_14__ {int numOfSubSet; } ;
typedef TYPE_5__ SSqlFunctionExpr ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SOutputRes ;
typedef TYPE_8__ SMeterQuerySupportObj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_7__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_7__*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int32_t FUNC_3(SMeterQuerySupportObj *VAR_5, SQuery *VAR_6, bool VAR_7) {
  int32_t VAR_8 = 0;

  if (FUNC_2(VAR_6->pGroupbyExpr)) {
    VAR_8 = 10000;
  } else {
    VAR_8 = VAR_5->pSidSet->numOfSubSet;
  }

  VAR_5->pResult = FUNC_0(1, sizeof(SOutputRes) * VAR_8);
  if (VAR_5->pResult == ((void*)0)) {
    return VAR_0;
  }


  for (int32_t VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
    SOutputRes *VAR_10 = &VAR_5->pResult[VAR_9];





    SSqlFunctionExpr *VAR_11 = &VAR_6->pSelectExpr[1];
    if ((VAR_11->pBase.functionId == VAR_4 || VAR_11->pBase.functionId == VAR_3) &&
        VAR_11->resType != VAR_2) {
      VAR_10->nAlloc = VAR_11->pBase.arg[0].argValue.i64;
    } else {
      VAR_10->nAlloc = 1;
    }

    FUNC_1(VAR_6, VAR_10, VAR_7);
  }

  return VAR_1;
}
