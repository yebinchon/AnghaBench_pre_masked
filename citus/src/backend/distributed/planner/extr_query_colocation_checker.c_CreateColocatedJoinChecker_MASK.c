
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * anchorAttributeEquivalences; void* anchorRelationRestrictionList; TYPE_3__* subqueryPlannerRestriction; int * subquery; } ;
struct TYPE_14__ {TYPE_1__* relationRestrictionContext; } ;
struct TYPE_13__ {scalar_t__ rtekind; int * subquery; } ;
struct TYPE_12__ {void* relationRestrictionList; } ;
typedef TYPE_1__ RelationRestrictionContext ;
typedef TYPE_2__ RangeTblEntry ;
typedef int Query ;
typedef TYPE_3__ PlannerRestrictionContext ;
typedef int List ;
typedef TYPE_4__ ColocatedJoinChecker ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int *) ;
 int * FUNC_2 (TYPE_3__*) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;

ColocatedJoinChecker
FUNC_5(Query *VAR_3, PlannerRestrictionContext *VAR_4)
{
 ColocatedJoinChecker VAR_5;

 RangeTblEntry *VAR_6 = ((void*)0);
 Query *VAR_7 = ((void*)0);
 PlannerRestrictionContext *VAR_8 = ((void*)0);
 RelationRestrictionContext *VAR_9 = ((void*)0);
 List *VAR_10 = VAR_0;


 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 == ((void*)0))
 {
  VAR_5.anchorRelationRestrictionList = VAR_0;

  return VAR_5;
 }

 if (VAR_6->rtekind == VAR_1)
 {






  VAR_7 = FUNC_3(VAR_6);
 }
 else if (VAR_6->rtekind == VAR_2)
 {
  VAR_7 = VAR_6->subquery;
 }
 else
 {

  FUNC_4();
 }

 VAR_8 =
  FUNC_1(VAR_4, VAR_7);
 VAR_9 =
  VAR_8->relationRestrictionContext;
 VAR_10 =
  FUNC_2(VAR_8);


 VAR_5.subquery = VAR_3;
 VAR_5.subqueryPlannerRestriction = VAR_4;

 VAR_5.anchorRelationRestrictionList =
  VAR_9->relationRestrictionList;
 VAR_5.anchorAttributeEquivalences = VAR_10;

 return VAR_5;
}
