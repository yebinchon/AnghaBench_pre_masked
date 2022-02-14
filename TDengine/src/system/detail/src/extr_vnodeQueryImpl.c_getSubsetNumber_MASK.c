
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int usedIndex; TYPE_3__* pQuery; } ;
struct TYPE_9__ {TYPE_2__* pSidSet; TYPE_1__ runtimeEnv; } ;
struct TYPE_8__ {int pGroupbyExpr; } ;
struct TYPE_7__ {int numOfSubSet; } ;
typedef TYPE_3__ SQuery ;
typedef TYPE_4__ SMeterQuerySupportObj ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int32_t FUNC_1(SMeterQuerySupportObj *VAR_0) {
  SQuery *VAR_1 = VAR_0->runtimeEnv.pQuery;

  int32_t VAR_2 = 0;
  if (FUNC_0(VAR_1->pGroupbyExpr)) {
    VAR_2 = VAR_0->runtimeEnv.usedIndex;
  } else {
    VAR_2 = VAR_0->pSidSet->numOfSubSet;
  }

  return VAR_2;
}
