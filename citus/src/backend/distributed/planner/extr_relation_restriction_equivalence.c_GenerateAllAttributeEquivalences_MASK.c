
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * joinRestrictionContext; int * relationRestrictionContext; } ;
typedef int RelationRestrictionContext ;
typedef TYPE_1__ PlannerRestrictionContext ;
typedef int List ;
typedef int JoinRestrictionContext ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *) ;

List *
FUNC_3(PlannerRestrictionContext *VAR_2)
{
 RelationRestrictionContext *VAR_3 =
  VAR_2->relationRestrictionContext;
 JoinRestrictionContext *VAR_4 =
  VAR_2->joinRestrictionContext;

 List *VAR_5 = VAR_0;
 List *VAR_6 = VAR_0;
 List *VAR_7 = VAR_0;


 VAR_1 = 1;

 VAR_5 =
  FUNC_1(VAR_3);
 VAR_6 =
  FUNC_0(VAR_4);

 VAR_7 = FUNC_2(VAR_5,
             VAR_6);

 return VAR_7;
}
