
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int hasReturning; int targetPoolSize; int raiseInterrupts; int connectionSetChanged; int waitFlagsChanged; char** columnArray; void* remoteTaskList; void* localTaskList; int * attributeInputMetadata; scalar_t__ rowsProcessed; void* unfinishedTaskCount; void* totalTaskCount; void* sessionList; void* workerList; int * tupleStore; TYPE_1__* tupleDescriptor; int paramListInfo; int * executionStats; int * tasksToExecute; int modLevel; } ;
struct TYPE_6__ {int natts; } ;
typedef int RowModifyLevel ;
typedef int ParamListInfo ;
typedef int List ;
typedef int DistributedExecutionStats ;
typedef TYPE_2__ DistributedExecution ;


 int FUNC_0 (int,int *,void**,void**) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static DistributedExecution *
FUNC_6(RowModifyLevel VAR_1, List *VAR_2, bool VAR_3,
         ParamListInfo VAR_4, TupleDesc VAR_5,
         Tuplestorestate *VAR_6, int VAR_7)
{
 DistributedExecution *VAR_8 =
  (DistributedExecution *) FUNC_5(sizeof(DistributedExecution));

 VAR_8->modLevel = VAR_1;
 VAR_8->tasksToExecute = VAR_2;
 VAR_8->hasReturning = VAR_3;

 VAR_8->localTaskList = VAR_0;
 VAR_8->remoteTaskList = VAR_0;

 VAR_8->executionStats =
  (DistributedExecutionStats *) FUNC_5(sizeof(DistributedExecutionStats));
 VAR_8->paramListInfo = VAR_4;
 VAR_8->tupleDescriptor = VAR_5;
 VAR_8->tupleStore = VAR_6;

 VAR_8->workerList = VAR_0;
 VAR_8->sessionList = VAR_0;
 VAR_8->targetPoolSize = VAR_7;

 VAR_8->totalTaskCount = FUNC_4(VAR_2);
 VAR_8->unfinishedTaskCount = FUNC_4(VAR_2);
 VAR_8->rowsProcessed = 0;

 VAR_8->raiseInterrupts = 1;

 VAR_8->connectionSetChanged = 0;
 VAR_8->waitFlagsChanged = 0;


 if (VAR_5 != ((void*)0))
 {
  VAR_8->attributeInputMetadata = FUNC_3(VAR_5);
  VAR_8->columnArray =
   (char **) FUNC_5(VAR_5->natts * sizeof(char *));
 }
 else
 {
  VAR_8->attributeInputMetadata = ((void*)0);
  VAR_8->columnArray = ((void*)0);
 }

 if (FUNC_1(VAR_2))
 {
  bool VAR_9 = !FUNC_2(VAR_1, VAR_2);

  FUNC_0(VAR_9, VAR_2, &VAR_8->localTaskList,
           &VAR_8->remoteTaskList);
 }

 return VAR_8;
}
