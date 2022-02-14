
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * pMeterObj; TYPE_2__* pQuery; } ;
struct TYPE_10__ {TYPE_1__ runtimeEnv; } ;
struct TYPE_9__ {int ekey; int skey; } ;
typedef int TSKEY ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef int SPointInterpoSupporter ;
typedef TYPE_3__ SMeterQuerySupportObj ;
typedef int SMeterObj ;


 int FUNC_0 (TYPE_2__*,int,int ,int) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_3(TSKEY VAR_0, SMeterQuerySupportObj *VAR_1, SPointInterpoSupporter *VAR_2) {
  SQueryRuntimeEnv *VAR_3 = &VAR_1->runtimeEnv;
  SQuery * VAR_4 = VAR_3->pQuery;
  SMeterObj * VAR_5 = VAR_3->pMeterObj;


  if (VAR_0 != -1 && VAR_0 <= VAR_4->ekey) {
    if (FUNC_2(VAR_4)) {
      return FUNC_1(VAR_1, VAR_5, VAR_2);
    } else {
      FUNC_0(VAR_4, VAR_0, VAR_4->skey, VAR_4->ekey);
      return 1;
    }
  } else {
    if (FUNC_2(VAR_4)) {
      return FUNC_1(VAR_1, VAR_5, VAR_2);
    } else {
      return 0;
    }
  }
}
