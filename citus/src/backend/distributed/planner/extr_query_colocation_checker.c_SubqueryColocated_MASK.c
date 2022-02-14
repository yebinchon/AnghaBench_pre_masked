
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* subqueryPlannerRestriction; int * anchorAttributeEquivalences; int * anchorRelationRestrictionList; } ;
struct TYPE_9__ {TYPE_1__* relationRestrictionContext; } ;
struct TYPE_8__ {int * relationRestrictionList; } ;
typedef TYPE_1__ RelationRestrictionContext ;
typedef int Query ;
typedef TYPE_2__ PlannerRestrictionContext ;
typedef int List ;
typedef TYPE_3__ ColocatedJoinChecker ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 void* FUNC_6 (int) ;

bool
FUNC_7(Query *VAR_0, ColocatedJoinChecker *VAR_1)
{
 List *VAR_2 = VAR_1->anchorRelationRestrictionList;
 List *VAR_3 = VAR_1->anchorAttributeEquivalences;

 PlannerRestrictionContext *VAR_4 = VAR_1->subqueryPlannerRestriction;
 PlannerRestrictionContext *VAR_5 =
  FUNC_1(VAR_4, VAR_0);
 List *VAR_6 =
  VAR_5->relationRestrictionContext->relationRestrictionList;

 List *VAR_7 = ((void*)0);
 RelationRestrictionContext *VAR_8 = ((void*)0);
 PlannerRestrictionContext *VAR_9 = ((void*)0);






 if (FUNC_5(VAR_6) == 0)
 {
  FUNC_0(!FUNC_2(VAR_0));

  return 1;
 }







 VAR_7 =
  FUNC_4(VAR_2,
           VAR_6);
 VAR_8 = FUNC_6(sizeof(RelationRestrictionContext));
 VAR_8->relationRestrictionList =
  VAR_7;

 VAR_9 = FUNC_6(sizeof(PlannerRestrictionContext));
 VAR_9->relationRestrictionContext =
  VAR_8;

 if (!FUNC_3(
   VAR_9,
   VAR_3))
 {
  return 0;
 }

 return 1;
}
