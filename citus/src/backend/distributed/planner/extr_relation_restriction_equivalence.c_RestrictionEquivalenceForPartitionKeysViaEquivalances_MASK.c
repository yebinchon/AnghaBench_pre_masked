
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * relationRestrictionContext; } ;
typedef int RelationRestrictionContext ;
typedef TYPE_1__ PlannerRestrictionContext ;
typedef int List ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;

bool
FUNC_2(PlannerRestrictionContext *
               VAR_0,
               List *VAR_1)
{
 RelationRestrictionContext *VAR_2 =
  VAR_0->relationRestrictionContext;


 if (!FUNC_0(VAR_0))
 {
  return 1;
 }

 return FUNC_1(VAR_1,
             VAR_2);
}
