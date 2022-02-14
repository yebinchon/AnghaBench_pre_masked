
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ExplainState {scalar_t__ analyze; } ;
struct TYPE_4__ {TYPE_1__* distributedPlan; } ;
struct TYPE_3__ {int * insertSelectSubquery; } ;
typedef int Query ;
typedef int * ParamListInfo ;
typedef int List ;
typedef int IntoClause ;
typedef TYPE_1__ DistributedPlan ;
typedef int CustomScanState ;
typedef TYPE_2__ CitusScanState ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,struct ExplainState*) ;
 int FUNC_1 (int *,int ,int *,struct ExplainState*,char*,int *,int *) ;
 int FUNC_2 (char*,char*,int,struct ExplainState*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(CustomScanState *VAR_1, List *VAR_2,
           struct ExplainState *VAR_3)
{
 CitusScanState *VAR_4 = (CitusScanState *) VAR_1;
 DistributedPlan *VAR_5 = VAR_4->distributedPlan;
 Query *VAR_6 = VAR_5->insertSelectSubquery;
 IntoClause *VAR_7 = ((void*)0);
 ParamListInfo VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);

 if (VAR_3->analyze)
 {

  FUNC_3(VAR_0, (FUNC_4("EXPLAIN ANALYZE is currently not supported for INSERT "
          "... SELECT commands via the coordinator")));
 }

 FUNC_2("Select Query", "Select Query", 0, VAR_3);


 FUNC_1(VAR_6, 0, VAR_7, VAR_3, VAR_9, VAR_8, ((void*)0));

 FUNC_0("Select Query", "Select Query", 0, VAR_3);
}
