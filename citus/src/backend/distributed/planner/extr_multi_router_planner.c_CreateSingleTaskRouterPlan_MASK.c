
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int routerExecutable; int hasReturning; int * masterQuery; int * workerJob; int * planningError; int modLevel; } ;
typedef int Query ;
typedef int PlannerRestrictionContext ;
typedef int Job ;
typedef TYPE_1__ DistributedPlan ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(DistributedPlan *VAR_1, Query *VAR_2,
         Query *VAR_3,
         PlannerRestrictionContext *VAR_4)
{
 Job *VAR_5 = ((void*)0);

 VAR_1->modLevel = FUNC_1(VAR_3);


 VAR_5 = FUNC_0(VAR_2, VAR_4,
     &VAR_1->planningError);

 if (VAR_1->planningError != ((void*)0))
 {

  return;
 }

 FUNC_2(VAR_0, (FUNC_3("Creating router plan")));

 VAR_1->workerJob = VAR_5;
 VAR_1->masterQuery = ((void*)0);
 VAR_1->routerExecutable = 1;
 VAR_1->hasReturning = 0;
}
