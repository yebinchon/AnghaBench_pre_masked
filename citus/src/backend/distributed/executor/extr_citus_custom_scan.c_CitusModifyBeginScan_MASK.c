
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* state; } ;
struct TYPE_12__ {TYPE_3__ ps; } ;
struct TYPE_13__ {TYPE_1__ ss; } ;
struct TYPE_18__ {TYPE_2__ customScanState; TYPE_6__* distributedPlan; } ;
struct TYPE_17__ {int relationIdList; TYPE_4__* workerJob; } ;
struct TYPE_16__ {int * es_param_list_info; } ;
struct TYPE_15__ {int * taskList; int partitionKeyValue; scalar_t__ deferredPruning; scalar_t__ requiresMasterEvaluation; int * jobQuery; } ;
typedef int Query ;
typedef TYPE_3__ PlanState ;
typedef int List ;
typedef TYPE_4__ Job ;
typedef TYPE_5__ EState ;
typedef TYPE_6__ DistributedPlan ;
typedef int DeferredErrorMessage ;
typedef int CustomScanState ;
typedef TYPE_7__ CitusScanState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int **) ;
 TYPE_6__* FUNC_8 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_9(CustomScanState *VAR_3, EState *VAR_4, int VAR_5)
{
 CitusScanState *VAR_6 = (CitusScanState *) VAR_3;
 DistributedPlan *VAR_7 = ((void*)0);
 Job *VAR_8 = ((void*)0);
 Query *VAR_9 = ((void*)0);
 List *VAR_10 = VAR_2;






 VAR_7 = VAR_6->distributedPlan = FUNC_8(VAR_6->distributedPlan);

 VAR_8 = VAR_7->workerJob;
 VAR_9 = VAR_8->jobQuery;
 VAR_10 = VAR_8->taskList;

 if (VAR_8->requiresMasterEvaluation)
 {
  PlanState *VAR_11 = &(VAR_6->customScanState.ss.ps);
  EState *VAR_12 = VAR_11->state;

  FUNC_1(VAR_9, VAR_11);







  VAR_12->es_param_list_info = ((void*)0);

  if (VAR_8->deferredPruning)
  {
   DeferredErrorMessage *VAR_13 = ((void*)0);


   VAR_10 = FUNC_7(VAR_9, &VAR_13);

   if (VAR_13 != ((void*)0))
   {
    FUNC_5(VAR_13, VAR_1);
   }

   VAR_8->taskList = VAR_10;
   VAR_8->partitionKeyValue = FUNC_2(VAR_9);
  }

  FUNC_6(VAR_9, VAR_10);
 }


 FUNC_0(VAR_10);





 FUNC_4(VAR_7->relationIdList, VAR_0);


 VAR_8->taskList = FUNC_3(VAR_10);
}
