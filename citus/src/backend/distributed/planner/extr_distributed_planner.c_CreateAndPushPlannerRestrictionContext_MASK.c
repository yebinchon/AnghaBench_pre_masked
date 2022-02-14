
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* relationRestrictionContext; int memoryContext; void* joinRestrictionContext; } ;
struct TYPE_5__ {int allReferenceTables; } ;
typedef int RelationRestrictionContext ;
typedef TYPE_2__ PlannerRestrictionContext ;
typedef int JoinRestrictionContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 void* FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static PlannerRestrictionContext *
FUNC_2(void)
{
 PlannerRestrictionContext *VAR_2 =
  FUNC_1(sizeof(PlannerRestrictionContext));

 VAR_2->relationRestrictionContext =
  FUNC_1(sizeof(RelationRestrictionContext));

 VAR_2->joinRestrictionContext =
  FUNC_1(sizeof(JoinRestrictionContext));

 VAR_2->memoryContext = VAR_0;


 VAR_2->relationRestrictionContext->allReferenceTables = 1;

 VAR_1 = FUNC_0(VAR_2,
            VAR_1);

 return VAR_2;
}
