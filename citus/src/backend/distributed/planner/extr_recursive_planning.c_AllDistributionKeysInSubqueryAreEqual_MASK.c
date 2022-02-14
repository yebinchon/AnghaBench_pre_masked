
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cteList; } ;
typedef TYPE_1__ Query ;
typedef int PlannerRestrictionContext ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_2(Query *VAR_1,
           PlannerRestrictionContext *VAR_2)
{
 bool VAR_3 = 0;
 PlannerRestrictionContext *VAR_4 = ((void*)0);


 if (VAR_1->cteList != VAR_0)
 {
  return 0;
 }

 VAR_4 =
  FUNC_1(VAR_2, VAR_1);

 VAR_3 =
  FUNC_0(VAR_1, VAR_4);
 if (!VAR_3)
 {
  return 0;
 }

 return 1;
}
