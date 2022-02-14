
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ anchorRelationRestrictionList; } ;
struct TYPE_14__ {int * jointree; } ;
struct TYPE_13__ {int * plannerRestrictionContext; } ;
typedef TYPE_1__ RecursivePlanningContext ;
typedef TYPE_2__ Query ;
typedef int PlannerRestrictionContext ;
typedef int Node ;
typedef int FromExpr ;
typedef TYPE_3__ ColocatedJoinChecker ;


 TYPE_3__ FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(Query *VAR_1, RecursivePlanningContext *VAR_2)
{
 ColocatedJoinChecker VAR_3;

 FromExpr *VAR_4 = VAR_1->jointree;
 PlannerRestrictionContext *VAR_5 = ((void*)0);


 VAR_5 = VAR_2->plannerRestrictionContext;
 VAR_3 = FUNC_0(VAR_1, VAR_5);





 if (VAR_3.anchorRelationRestrictionList == VAR_0)
 {
  return;
 }


 FUNC_1((Node *) VAR_4, &VAR_3,
            VAR_2);


 FUNC_2(VAR_1, &VAR_3,
             VAR_2);
}
