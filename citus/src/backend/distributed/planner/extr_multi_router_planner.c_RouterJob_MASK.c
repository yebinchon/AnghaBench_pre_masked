
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_22__ {int requiresMasterEvaluation; int jobId; void* taskList; int * partitionKeyValue; } ;
struct TYPE_21__ {int relationRestrictionContext; } ;
struct TYPE_20__ {scalar_t__ commandType; } ;
struct TYPE_19__ {scalar_t__ rtekind; } ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ PlannerRestrictionContext ;
typedef int List ;
typedef TYPE_4__ Job ;
typedef int DeferredErrorMessage ;
typedef int Const ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int * FUNC_2 (TYPE_2__*,TYPE_3__*,int **,scalar_t__*,int **,int **,int,int*,int **) ;
 void* FUNC_3 (TYPE_2__*,int ,int ,int *,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_4__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (TYPE_2__*,int ,int *,int *,scalar_t__) ;
 void* FUNC_7 (TYPE_2__*,int ,int *,int *,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static Job *
FUNC_8(Query *VAR_6, PlannerRestrictionContext *VAR_7,
    DeferredErrorMessage **VAR_8)
{
 Job *VAR_9 = ((void*)0);
 uint64 VAR_10 = VAR_1;
 List *VAR_11 = VAR_3;
 List *VAR_12 = VAR_3;
 List *VAR_13 = VAR_3;
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 RangeTblEntry *VAR_16 = ((void*)0);
 bool VAR_17 = 0;
 Const *VAR_18 = ((void*)0);


 VAR_14 = 1;


 VAR_15 = FUNC_5(VAR_6);

 (*VAR_8) = FUNC_2(VAR_6, VAR_7,
            &VAR_11, &VAR_10, &VAR_12,
            &VAR_13,
            VAR_14,
            &VAR_17,
            &VAR_18);
 if (*VAR_8)
 {
  return ((void*)0);
 }

 VAR_9 = FUNC_0(VAR_6);
 VAR_9->partitionKeyValue = VAR_18;

 VAR_16 = FUNC_1(VAR_6);
 if (VAR_16 != ((void*)0) && VAR_16->rtekind == VAR_4)
 {
  VAR_9->taskList = VAR_3;
  return VAR_9;
 }

 if (VAR_6->commandType == VAR_0)
 {
  VAR_9->taskList = FUNC_7(VAR_6, VAR_9->jobId,
              VAR_12, VAR_11,
              VAR_10);
  if (VAR_10 != VAR_1)
  {
   FUNC_4(VAR_9, VAR_5,
              VAR_11);
  }
 }
 else if (VAR_17)
 {
  VAR_9->taskList = FUNC_3(VAR_6, VAR_9->jobId,
             VAR_7->
             relationRestrictionContext,
             VAR_13,
             VAR_2,
             VAR_15);
 }
 else
 {
  VAR_9->taskList = FUNC_6(VAR_6, VAR_9->jobId,
              VAR_12, VAR_11,
              VAR_10);
 }

 VAR_9->requiresMasterEvaluation = VAR_15;
 return VAR_9;
}
