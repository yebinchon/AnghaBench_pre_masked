
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * joinRestrictionContext; TYPE_1__* relationRestrictionContext; int memoryContext; } ;
struct TYPE_9__ {int allReferenceTables; int hasLocalRelation; int hasDistributedRelation; int relationRestrictionList; } ;
typedef int Relids ;
typedef TYPE_1__ RelationRestrictionContext ;
typedef int Query ;
typedef TYPE_2__ PlannerRestrictionContext ;
typedef int JoinRestrictionContext ;


 int * FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int) ;

PlannerRestrictionContext *
FUNC_6(PlannerRestrictionContext *VAR_0,
         Query *VAR_1)
{
 PlannerRestrictionContext *VAR_2 = ((void*)0);
 int VAR_3 = 0;
 int VAR_4 = 0;

 Relids VAR_5 = FUNC_2(VAR_1);

 RelationRestrictionContext *VAR_6 =
  VAR_0->relationRestrictionContext;
 JoinRestrictionContext *VAR_7 =
  VAR_0->joinRestrictionContext;

 RelationRestrictionContext *VAR_8 =
  FUNC_1(VAR_6, VAR_5);

 JoinRestrictionContext *VAR_9 =
  FUNC_0(VAR_7, VAR_5);


 VAR_2 = FUNC_5(sizeof(PlannerRestrictionContext));

 VAR_2->memoryContext =
  VAR_0->memoryContext;

 VAR_4 = FUNC_4(
  VAR_8->relationRestrictionList);
 VAR_3 = FUNC_3(VAR_8);

 VAR_8->allReferenceTables =
  (VAR_4 == VAR_3);


 VAR_8->hasLocalRelation = 0;
 VAR_8->hasDistributedRelation = 1;


 VAR_2->relationRestrictionContext =
  VAR_8;
 VAR_2->joinRestrictionContext =
  VAR_9;

 return VAR_2;
}
