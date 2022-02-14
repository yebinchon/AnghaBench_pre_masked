
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_11__ {int finishedRemoteScan; TYPE_2__* distributedPlan; } ;
struct TYPE_10__ {int relationIdList; TYPE_1__* workerJob; } ;
struct TYPE_9__ {int * jobQuery; } ;
typedef int Query ;
typedef int Node ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ DistributedPlan ;
typedef int CustomScanState ;
typedef TYPE_3__ CitusScanState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

TupleTableSlot *
FUNC_10(CustomScanState *VAR_2)
{
 CitusScanState *VAR_3 = (CitusScanState *) VAR_2;
 TupleTableSlot *VAR_4 = ((void*)0);

 if (!VAR_3->finishedRemoteScan)
 {
  DistributedPlan *VAR_5 = VAR_3->distributedPlan;
  Job *VAR_6 = VAR_5->workerJob;
  Query *VAR_7 = VAR_6->jobQuery;

  FUNC_2();
  FUNC_1();

  if (FUNC_0((Node *) VAR_7))
  {
   FUNC_8(VAR_1, (FUNC_9("Complex subqueries and CTEs are not supported when "
           "task_executor_type is set to 'task-tracker'")));
  }


  FUNC_4(VAR_5->relationIdList, VAR_0);

  FUNC_6(VAR_6);
  FUNC_5(VAR_6);

  FUNC_3(VAR_3, VAR_6);

  VAR_3->finishedRemoteScan = 1;
 }

 VAR_4 = FUNC_7(VAR_3);

 return VAR_4;
}
