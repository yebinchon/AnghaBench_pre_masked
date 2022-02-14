
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ partitionMethod; } ;
struct TYPE_15__ {TYPE_1__* relationRestrictionContext; int * memoryContext; } ;
struct TYPE_14__ {scalar_t__ rtekind; int relid; } ;
struct TYPE_13__ {int distributedRelation; int outerPlanParamsList; int prunedShardIntervalList; int * plannerInfo; int * relOptInfo; TYPE_3__* rte; int relationId; int index; } ;
struct TYPE_12__ {int hasDistributedRelation; int hasLocalRelation; int allReferenceTables; int relationRestrictionList; } ;
typedef TYPE_1__ RelationRestrictionContext ;
typedef TYPE_2__ RelationRestriction ;
typedef int RelOptInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef TYPE_4__ PlannerRestrictionContext ;
typedef int PlannerInfo ;
typedef int * MemoryContext ;
typedef int Index ;
typedef TYPE_5__ DistTableCacheEntry ;


 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_4__* FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;

void
FUNC_8(PlannerInfo *VAR_3, RelOptInfo *VAR_4,
        Index VAR_5, RangeTblEntry *VAR_6)
{
 PlannerRestrictionContext *VAR_7 = ((void*)0);
 RelationRestrictionContext *VAR_8 = ((void*)0);
 MemoryContext VAR_9 = ((void*)0);
 MemoryContext VAR_10 = ((void*)0);
 RelationRestriction *VAR_11 = ((void*)0);
 DistTableCacheEntry *VAR_12 = ((void*)0);
 bool VAR_13 = 0;
 bool VAR_14 = 0;

 FUNC_0(VAR_6, VAR_4);

 if (VAR_6->rtekind != VAR_2)
 {
  return;
 }





 VAR_7 = FUNC_1();
 VAR_9 = VAR_7->memoryContext;
 VAR_10 = FUNC_4(VAR_9);

 VAR_13 = FUNC_3(VAR_6->relid);
 VAR_14 = !VAR_13;

 VAR_11 = FUNC_7(sizeof(RelationRestriction));
 VAR_11->index = VAR_5;
 VAR_11->relationId = VAR_6->relid;
 VAR_11->rte = VAR_6;
 VAR_11->relOptInfo = VAR_4;
 VAR_11->distributedRelation = VAR_13;
 VAR_11->plannerInfo = VAR_3;
 VAR_11->prunedShardIntervalList = VAR_1;


 VAR_11->outerPlanParamsList = FUNC_5(VAR_3);

 VAR_8 = VAR_7->relationRestrictionContext;
 VAR_8->hasDistributedRelation |= VAR_13;
 VAR_8->hasLocalRelation |= VAR_14;





 if (VAR_13)
 {
  VAR_12 = FUNC_2(VAR_6->relid);

  VAR_8->allReferenceTables &=
   (VAR_12->partitionMethod == VAR_0);
 }

 VAR_8->relationRestrictionList =
  FUNC_6(VAR_8->relationRestrictionList, VAR_11);

 FUNC_4(VAR_10);
}
