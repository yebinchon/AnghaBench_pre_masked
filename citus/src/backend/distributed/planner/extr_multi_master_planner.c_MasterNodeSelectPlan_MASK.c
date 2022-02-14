
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* workerJob; int * masterQuery; } ;
struct TYPE_6__ {TYPE_1__* jobQuery; } ;
struct TYPE_5__ {int * targetList; } ;
typedef int Query ;
typedef int PlannedStmt ;
typedef int List ;
typedef TYPE_2__ Job ;
typedef TYPE_3__ DistributedPlan ;
typedef int CustomScan ;


 int * FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *) ;

PlannedStmt *
FUNC_2(DistributedPlan *VAR_0, CustomScan *VAR_1)
{
 Query *VAR_2 = VAR_0->masterQuery;
 PlannedStmt *VAR_3 = ((void*)0);

 Job *VAR_4 = VAR_0->workerJob;
 List *VAR_5 = VAR_4->jobQuery->targetList;
 List *VAR_6 = FUNC_1(VAR_5);

 VAR_3 = FUNC_0(VAR_2, VAR_6, VAR_1);

 return VAR_3;
}
