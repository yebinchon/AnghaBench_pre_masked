
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_20__ {TYPE_3__* pTSBuf; } ;
struct TYPE_23__ {int rawEKey; int rawSKey; TYPE_4__ runtimeEnv; } ;
struct TYPE_17__ {int order; } ;
struct TYPE_21__ {TYPE_1__ order; } ;
struct TYPE_22__ {TYPE_5__ query; TYPE_7__* pMeterQuerySupporter; } ;
struct TYPE_18__ {int order; } ;
struct TYPE_19__ {TYPE_2__ cur; } ;
typedef TYPE_4__ SQueryRuntimeEnv ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SQInfo ;
typedef TYPE_7__ SMeterQuerySupportObj ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,TYPE_6__*,...) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static void FUNC_10(SQInfo *VAR_1) {
  SMeterQuerySupportObj *VAR_2 = VAR_1->pMeterQuerySupporter;

  SQueryRuntimeEnv *VAR_3 = &VAR_2->runtimeEnv;
  SQuery * VAR_4 = &VAR_1->query;

  if (!FUNC_7(VAR_4)) {
    FUNC_3("QInfo:%p no need to do supplementary scan, query completed", VAR_1);
    return;
  }

  FUNC_1(VAR_3);
  FUNC_4(VAR_3, VAR_4->order.order);

  if (VAR_3->pTSBuf != ((void*)0)) {
    VAR_3->pTSBuf->cur.order = VAR_3->pTSBuf->cur.order ^ 1;
  }

  FUNC_2(VAR_2->rawSKey, VAR_2->rawEKey, VAR_0);
  FUNC_8(VAR_2);

  int64_t VAR_5 = FUNC_9();
  FUNC_5(VAR_1);
  int64_t VAR_6 = FUNC_9();
  FUNC_3("QInfo:%p supplementary scan completed, elapsed time: %lldms", VAR_1, VAR_6 - VAR_5);





  FUNC_2(VAR_2->rawSKey, VAR_2->rawEKey, VAR_0);
  FUNC_6(VAR_3, VAR_4->order.order);

  if (VAR_3->pTSBuf != ((void*)0)) {
    VAR_3->pTSBuf->cur.order = VAR_3->pTSBuf->cur.order ^ 1;
  }

  FUNC_0(VAR_3);
}
