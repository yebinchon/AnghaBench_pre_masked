
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TupleDesc ;
struct TYPE_25__ {int tuplestorestate; int finishedRemoteScan; TYPE_3__* distributedPlan; } ;
struct TYPE_24__ {scalar_t__ rowsProcessed; int localTaskList; int tasksToExecute; } ;
struct TYPE_23__ {scalar_t__ modLevel; scalar_t__ targetRelationId; scalar_t__ hasReturning; TYPE_1__* workerJob; } ;
struct TYPE_22__ {scalar_t__ es_processed; int es_param_list_info; } ;
struct TYPE_21__ {int * taskList; } ;
typedef int ParamListInfo ;
typedef int List ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ EState ;
typedef TYPE_3__ DistributedPlan ;
typedef TYPE_4__ DistributedExecution ;
typedef TYPE_5__ CitusScanState ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (scalar_t__,int *,scalar_t__,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int,int,int ) ;
 int VAR_7 ;

TupleTableSlot *
FUNC_17(CitusScanState *VAR_8)
{
 TupleTableSlot *VAR_9 = ((void*)0);

 DistributedPlan *VAR_10 = VAR_8->distributedPlan;
 DistributedExecution *VAR_11 = ((void*)0);
 EState *VAR_12 = FUNC_9(VAR_8);
 ParamListInfo VAR_13 = VAR_12->es_param_list_info;
 TupleDesc VAR_14 = FUNC_10(VAR_8);
 bool VAR_15 = 1;
 bool VAR_16 = 0;
 int VAR_17 = VAR_2;


 Job *VAR_18 = VAR_10->workerJob;
 List *VAR_19 = VAR_18->taskList;


 FUNC_1(!VAR_8->finishedRemoteScan);






 FUNC_5(VAR_10);

 FUNC_3(VAR_10);

 if (VAR_3 == VAR_5)
 {

  VAR_17 = 1;
 }

 VAR_8->tuplestorestate =
  FUNC_16(VAR_15, VAR_16, VAR_7);

 VAR_11 = FUNC_2(VAR_10->modLevel, VAR_19,
             VAR_10->hasReturning, VAR_13,
             VAR_14,
             VAR_8->tuplestorestate, VAR_17);





 FUNC_14(VAR_11);


 if (FUNC_15(VAR_11->localTaskList) > 0)
 {
  FUNC_8(VAR_8, VAR_11);


  FUNC_0(VAR_11);
 }

 if (FUNC_12(VAR_11->tasksToExecute))
 {
  FUNC_11(VAR_11);
 }
 else
 {
  FUNC_7(VAR_11);
 }

 if (VAR_10->modLevel != VAR_4)
 {
  if (FUNC_15(VAR_11->localTaskList) == 0)
  {
   FUNC_1(VAR_12->es_processed == 0);

   VAR_12->es_processed = VAR_11->rowsProcessed;
  }
  else if (VAR_10->targetRelationId != VAR_1 &&
     FUNC_6(VAR_10->targetRelationId) != VAR_0)
  {





   VAR_12->es_processed += VAR_11->rowsProcessed;
  }
 }

 FUNC_4(VAR_11);

 if (VAR_6 && VAR_10->hasReturning)
 {
  FUNC_13(VAR_8);
 }

 return VAR_9;
}
