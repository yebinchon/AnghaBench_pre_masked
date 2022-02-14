
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ varattno; size_t varno; } ;
typedef TYPE_1__ Var ;
struct TYPE_13__ {TYPE_2__** simple_rte_array; } ;
struct TYPE_12__ {scalar_t__ rtekind; } ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ PlannerInfo ;
typedef int AttributeEquivalenceClass ;


 int FUNC_0 (int **,TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int **,TYPE_2__*,TYPE_3__*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(AttributeEquivalenceClass **VAR_3,
          PlannerInfo *VAR_4, Var *VAR_5)
{
 RangeTblEntry *VAR_6 = ((void*)0);


 if (VAR_5->varattno == VAR_0)
 {
  return;
 }


 if (VAR_5->varattno < VAR_0)
 {
  return;
 }

 VAR_6 = VAR_4->simple_rte_array[VAR_5->varno];
 if (VAR_6->rtekind == VAR_1)
 {
  FUNC_0(VAR_3,
              VAR_6,
              VAR_5);
 }
 else if (VAR_6->rtekind == VAR_2)
 {
  FUNC_1(VAR_3,
              VAR_6, VAR_4,
              VAR_5);
 }
}
