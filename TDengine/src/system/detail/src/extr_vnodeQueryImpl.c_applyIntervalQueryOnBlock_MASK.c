
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
typedef int __block_search_fn_t ;
struct TYPE_27__ {scalar_t__ keyLast; scalar_t__ keyFirst; } ;
struct TYPE_26__ {TYPE_4__* pMeterQInfo; } ;
struct TYPE_25__ {int lastResRows; } ;
struct TYPE_22__ {TYPE_2__* pQuery; } ;
struct TYPE_24__ {TYPE_1__ runtimeEnv; } ;
struct TYPE_23__ {scalar_t__ skey; scalar_t__ ekey; } ;
typedef int TSKEY ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SMeterQuerySupportObj ;
typedef TYPE_4__ SMeterQueryInfo ;
typedef TYPE_5__ SMeterDataInfo ;
typedef int SField ;
typedef TYPE_6__ SBlockInfo ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_6__*,int *,char*,int *,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,TYPE_6__*,int *,char*,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_6__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_7(SMeterQuerySupportObj *VAR_0, SMeterDataInfo *VAR_1, char *VAR_2,
                                      int64_t *VAR_3, SBlockInfo *VAR_4, int32_t VAR_5,
                                      SField *VAR_6, __block_search_fn_t VAR_7) {
  SQueryRuntimeEnv *VAR_8 = &VAR_0->runtimeEnv;
  SQuery * VAR_9 = VAR_8->pQuery;
  SMeterQueryInfo * VAR_10 = VAR_1->pMeterQInfo;





  TSKEY VAR_11 = FUNC_4(VAR_9, VAR_3, VAR_4, VAR_5);
  FUNC_6(VAR_1->pMeterQInfo, VAR_0, VAR_11);

  if (((VAR_9->skey > VAR_9->ekey) && FUNC_0(VAR_9)) ||
      ((VAR_9->skey < VAR_9->ekey) && !FUNC_0(VAR_9))) {
    return;
  }

  if (((VAR_4->keyLast < VAR_9->ekey) && FUNC_0(VAR_9)) ||
      ((VAR_4->keyFirst > VAR_9->ekey) && !FUNC_0(VAR_9))) {
    int32_t VAR_12 = 0;

    int32_t VAR_13 = FUNC_1(VAR_8, VAR_4, VAR_3, VAR_2, VAR_6, VAR_7, &VAR_12);
    FUNC_2(VAR_12 <= 1 && VAR_12 >= 0 && VAR_13 > 0);

    if (VAR_10->lastResRows == 0) {
      VAR_10->lastResRows = VAR_12;
    } else {
      FUNC_2(VAR_10->lastResRows == 1);
    }

    FUNC_5(VAR_8, VAR_10);
  } else {
    FUNC_3(VAR_0, VAR_10, VAR_4, VAR_3, VAR_2, VAR_6, VAR_7);
  }
}
