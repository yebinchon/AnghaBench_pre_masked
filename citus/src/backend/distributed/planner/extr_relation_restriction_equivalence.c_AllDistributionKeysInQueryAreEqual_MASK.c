
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * relationRestrictionContext; } ;
struct TYPE_8__ {scalar_t__ cteList; scalar_t__ setOperations; } ;
typedef int RelationRestrictionContext ;
typedef TYPE_1__ Query ;
typedef TYPE_2__ PlannerRestrictionContext ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

bool
FUNC_4(Query *VAR_1,
           PlannerRestrictionContext *VAR_2)
{
 bool VAR_3 = 0;
 RelationRestrictionContext *VAR_4 = ((void*)0);


 if (VAR_1->cteList != VAR_0)
 {
  return 0;
 }


 VAR_4 = VAR_2->relationRestrictionContext;
 if (FUNC_1(VAR_4))
 {
  return 0;
 }

 VAR_3 =
  FUNC_2(VAR_2);
 if (VAR_3)
 {
  return 1;
 }

 if (VAR_1->setOperations || FUNC_0(VAR_1))
 {
  return FUNC_3(VAR_2);
 }

 return 0;
}
