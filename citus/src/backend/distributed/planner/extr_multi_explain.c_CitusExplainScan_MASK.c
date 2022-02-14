
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ExplainState {int indent; int str; } ;
struct TYPE_5__ {TYPE_1__* distributedPlan; } ;
struct TYPE_4__ {scalar_t__ subPlanList; int workerJob; } ;
typedef int List ;
typedef TYPE_1__ DistributedPlan ;
typedef int CustomScanState ;
typedef TYPE_2__ CitusScanState ;


 int FUNC_0 (char*,char*,int,struct ExplainState*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ExplainState*) ;
 int FUNC_2 (char*,char*,int,struct ExplainState*) ;
 int FUNC_3 (TYPE_1__*,struct ExplainState*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(CustomScanState *VAR_2, List *VAR_3, struct ExplainState *VAR_4)
{
 CitusScanState *VAR_5 = (CitusScanState *) VAR_2;
 DistributedPlan *VAR_6 = VAR_5->distributedPlan;

 if (!VAR_0)
 {
  FUNC_5(VAR_4->str, VAR_4->indent * 2);
  FUNC_4(VAR_4->str, "explain statements for distributed queries ");
  FUNC_4(VAR_4->str, "are not enabled\n");
  return;
 }

 FUNC_2("Distributed Query", "Distributed Query", 1, VAR_4);

 if (VAR_6->subPlanList != VAR_1)
 {
  FUNC_3(VAR_6, VAR_4);
 }

 FUNC_1(VAR_6->workerJob, VAR_4);

 FUNC_0("Distributed Query", "Distributed Query", 1, VAR_4);
}
