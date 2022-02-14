
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rtable; int utilityStmt; int queryId; } ;
typedef TYPE_1__ PlannedStmt ;
typedef int DistributedPlan ;
typedef int CustomScan ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static PlannedStmt *
FUNC_2(PlannedStmt *VAR_0, DistributedPlan *VAR_1,
       CustomScan *VAR_2)
{
 PlannedStmt *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_3->queryId = VAR_0->queryId;
 VAR_3->utilityStmt = VAR_0->utilityStmt;


 VAR_3->rtable = FUNC_1(VAR_3->rtable, VAR_0->rtable);

 return VAR_3;
}
