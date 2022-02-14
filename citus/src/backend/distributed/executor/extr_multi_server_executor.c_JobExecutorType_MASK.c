
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int consttype; int constvalue; int constisnull; } ;
struct TYPE_6__ {int routerExecutable; scalar_t__ modLevel; int * insertSelectSubquery; TYPE_1__* workerJob; } ;
struct TYPE_5__ {int * taskList; int * dependedJobList; TYPE_3__* partitionKeyValue; } ;
typedef int Oid ;
typedef scalar_t__ MultiExecutorType ;
typedef int List ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ DistributedPlan ;
typedef int Datum ;
typedef TYPE_3__ Const ;


 int * FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 double VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

MultiExecutorType
FUNC_10(DistributedPlan *VAR_11)
{
 Job *VAR_12 = VAR_11->workerJob;
 MultiExecutorType VAR_13 = VAR_9;
 bool VAR_14 = VAR_11->routerExecutable;


 if (VAR_14)
 {
  if (FUNC_4(VAR_1))
  {
   Const *VAR_15 = VAR_12->partitionKeyValue;

   if (VAR_15 != ((void*)0) && !VAR_15->constisnull)
   {
    Datum VAR_16 = VAR_15->constvalue;
    Oid VAR_17 = VAR_15->consttype;
    char *VAR_18 = FUNC_3(VAR_16,
               VAR_17);

    FUNC_5(VAR_1, (FUNC_8("Plan is router executable"),
         FUNC_6("distribution column value: %s",
             FUNC_1(VAR_18))));
   }
   else
   {
    FUNC_5(VAR_1, (FUNC_8("Plan is router executable")));
   }
  }

  return VAR_4;
 }

 if (VAR_11->insertSelectSubquery != ((void*)0))
 {






  return VAR_5;
 }

 FUNC_2(VAR_11->modLevel == VAR_8);

 if (VAR_13 == VAR_4)
 {



  int VAR_19 = FUNC_9(VAR_12->dependedJobList);
  if (VAR_19 > 0)
  {
   if (!VAR_3)
   {
    FUNC_5(VAR_2, (FUNC_8(
         "the query contains a join that requires repartitioning"),
        FUNC_7("Set citus.enable_repartition_joins to on "
          "to enable repartitioning")));
   }

   FUNC_5(VAR_0, (FUNC_8(
         "cannot use adaptive executor with repartition jobs"),
        FUNC_7("Since you enabled citus.enable_repartition_joins "
          "Citus chose to use task-tracker.")));
   return VAR_6;
  }
 }
 else
 {
  List *VAR_20 = FUNC_0();
  int VAR_21 = FUNC_9(VAR_20);
  int VAR_22 = FUNC_9(VAR_12->taskList);
  double VAR_23 = VAR_22 / ((double) VAR_21);


  if (VAR_23 >= VAR_7)
  {
   FUNC_5(VAR_10, (FUNC_8("this query assigns more tasks per node than the "
          "configured max_tracked_tasks_per_node limit")));
  }
 }

 return VAR_13;
}
