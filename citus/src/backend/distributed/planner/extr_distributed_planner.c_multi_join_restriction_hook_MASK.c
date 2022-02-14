
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* sjinfo; int restrictlist; } ;
struct TYPE_13__ {int * outerrel; int * innerrel; int * plannerInfo; int * joinRestrictInfoList; int joinType; } ;
struct TYPE_12__ {int joinRestrictionList; } ;
struct TYPE_11__ {int hasSemiJoin; TYPE_3__* joinRestrictionContext; int * memoryContext; } ;
struct TYPE_10__ {scalar_t__ jointype; } ;
typedef int RelOptInfo ;
typedef TYPE_2__ PlannerRestrictionContext ;
typedef int PlannerInfo ;
typedef int * MemoryContext ;
typedef int List ;
typedef int JoinType ;
typedef TYPE_3__ JoinRestrictionContext ;
typedef TYPE_4__ JoinRestriction ;
typedef TYPE_5__ JoinPathExtraData ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *) ;
 int * VAR_1 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int) ;

void
FUNC_6(PlannerInfo *VAR_2,
       RelOptInfo *VAR_3,
       RelOptInfo *VAR_4,
       RelOptInfo *VAR_5,
       JoinType VAR_6,
       JoinPathExtraData *VAR_7)
{
 PlannerRestrictionContext *VAR_8 = ((void*)0);
 JoinRestrictionContext *VAR_9 = ((void*)0);
 JoinRestriction *VAR_10 = ((void*)0);
 MemoryContext VAR_11 = ((void*)0);
 MemoryContext VAR_12 = ((void*)0);
 List *VAR_13 = VAR_1;





 VAR_8 = FUNC_1();
 VAR_11 = VAR_8->memoryContext;
 VAR_12 = FUNC_2(VAR_11);






 VAR_13 = FUNC_3(VAR_7->restrictlist);

 VAR_9 = VAR_8->joinRestrictionContext;
 FUNC_0(VAR_9 != ((void*)0));

 VAR_10 = FUNC_5(sizeof(JoinRestriction));
 VAR_10->joinType = VAR_6;
 VAR_10->joinRestrictInfoList = VAR_13;
 VAR_10->plannerInfo = VAR_2;
 VAR_10->innerrel = VAR_5;
 VAR_10->outerrel = VAR_4;

 VAR_9->joinRestrictionList =
  FUNC_4(VAR_9->joinRestrictionList, VAR_10);






 VAR_8->hasSemiJoin = VAR_8->hasSemiJoin ||
            VAR_7->sjinfo->jointype == VAR_0;

 FUNC_2(VAR_12);
}
