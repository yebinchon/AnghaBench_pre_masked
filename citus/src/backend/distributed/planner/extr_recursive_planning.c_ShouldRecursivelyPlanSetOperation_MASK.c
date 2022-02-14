
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ setOperations; } ;
struct TYPE_9__ {scalar_t__ level; int plannerRestrictionContext; } ;
struct TYPE_8__ {scalar_t__ op; } ;
typedef TYPE_1__ SetOperationStmt ;
typedef TYPE_2__ RecursivePlanningContext ;
typedef TYPE_3__ Query ;
typedef int PlannerRestrictionContext ;


 int * FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(Query *VAR_1, RecursivePlanningContext *VAR_2)
{
 PlannerRestrictionContext *VAR_3 = ((void*)0);

 SetOperationStmt *VAR_4 = (SetOperationStmt *) VAR_1->setOperations;
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->level == 0)
 {




  return 1;
 }

 if (VAR_4->op != VAR_0)
 {




  return 1;
 }

 if (FUNC_0(VAR_1) != ((void*)0))
 {




  return 1;
 }

 VAR_3 =
  FUNC_1(VAR_2->plannerRestrictionContext, VAR_1);
 if (!FUNC_2(VAR_3))
 {





  return 1;
 }

 return 0;
}
