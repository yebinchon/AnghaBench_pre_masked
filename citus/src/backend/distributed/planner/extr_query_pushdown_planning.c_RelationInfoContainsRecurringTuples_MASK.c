
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ** simple_rte_array; } ;
struct TYPE_5__ {int relids; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int RecurringTuplesType ;
typedef int RangeTblEntry ;
typedef TYPE_2__ PlannerInfo ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(PlannerInfo *VAR_0, RelOptInfo *VAR_1,
         RecurringTuplesType *VAR_2)
{
 Relids VAR_3 = FUNC_1(VAR_1->relids);
 int VAR_4 = -1;

 while ((VAR_4 = FUNC_2(VAR_3)) >= 0)
 {
  RangeTblEntry *VAR_5 = VAR_0->simple_rte_array[VAR_4];


  if (FUNC_0(VAR_5, VAR_2))
  {
   return 1;
  }
 }

 return 0;
}
