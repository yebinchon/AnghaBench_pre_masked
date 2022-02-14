
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {TYPE_1__* relationRestrictionContext; } ;
struct TYPE_5__ {int relationRestrictionList; } ;
typedef TYPE_1__ RelationRestrictionContext ;
typedef TYPE_2__ PlannerRestrictionContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(PlannerRestrictionContext *
          VAR_0)
{
 RelationRestrictionContext *VAR_1 =
  VAR_0->relationRestrictionContext;

 uint32 VAR_2 = FUNC_0(VAR_1);
 uint32 VAR_3 = FUNC_1(VAR_1->relationRestrictionList);
 uint32 VAR_4 = VAR_3 - VAR_2;
 if (VAR_4 <= 1)
 {
  return 0;
 }

 return 1;
}
