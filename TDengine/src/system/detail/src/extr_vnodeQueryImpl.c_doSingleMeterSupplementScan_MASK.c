
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int order; } ;
struct TYPE_21__ {scalar_t__ ekey; scalar_t__ skey; TYPE_1__ order; } ;
struct TYPE_20__ {int startPos; int endPos; TYPE_4__* pQuery; } ;
struct TYPE_19__ {int member_0; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_2__ SQueryStatus ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(SQueryRuntimeEnv *VAR_0) {
  SQuery * VAR_1 = VAR_0->pQuery;
  SQueryStatus VAR_2 = {0};

  if (!FUNC_8(VAR_1)) {
    return;
  }

  FUNC_2(VAR_0);


  TSKEY VAR_3 = FUNC_7(VAR_0, &VAR_0->endPos);
  FUNC_3((FUNC_0(VAR_1) && VAR_3 <= VAR_1->ekey) ||
         (!FUNC_0(VAR_1) && VAR_3 >= VAR_1->ekey));


  FUNC_4(VAR_0, VAR_1->order.order);
  FUNC_10(VAR_0, &VAR_2);

  FUNC_5(VAR_0);


  TSKEY VAR_4 = FUNC_7(VAR_0, &VAR_0->startPos);
  FUNC_3((FUNC_0(VAR_1) && VAR_4 >= VAR_1->skey) ||
         (!FUNC_0(VAR_1) && VAR_4 <= VAR_1->skey));

  FUNC_9(VAR_0, &VAR_2);
  FUNC_6(VAR_0, VAR_1->order.order);
  FUNC_1(VAR_0);
}
