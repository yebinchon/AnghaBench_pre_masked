
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ hasSemiJoin; } ;
struct TYPE_9__ {scalar_t__ hasWindowFuncs; scalar_t__ jointree; } ;
typedef int * StringInfo ;
typedef TYPE_1__ Query ;
typedef TYPE_2__ PlannerRestrictionContext ;
typedef int Node ;
typedef int List ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int * VAR_2 ;
 int * FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int **) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

bool
FUNC_6(Query *VAR_3, Query *VAR_4,
        PlannerRestrictionContext *VAR_5)
{
 List *VAR_6 = VAR_2;
 StringInfo VAR_7 = ((void*)0);






 if (FUNC_2(VAR_4))
 {
  return 1;
 }







 if (FUNC_5(VAR_4))
 {
  return 1;
 }
 if (VAR_5->hasSemiJoin)
 {
  return 1;
 }






 if (FUNC_1((Node *) VAR_3, VAR_0))
 {
  return 1;
 }





 if (FUNC_1((Node *) VAR_3->jointree, VAR_1))
 {
  return 1;
 }







 if (FUNC_1((Node *) VAR_4->jointree, VAR_1))
 {
  return 1;
 }





 VAR_6 = FUNC_3(VAR_4->jointree);
 if (FUNC_0(VAR_6) != ((void*)0))
 {
  return 1;
 }


 if (VAR_3->hasWindowFuncs &&
  FUNC_4(VAR_3, &VAR_7))
 {
  return 1;
 }

 return 0;
}
