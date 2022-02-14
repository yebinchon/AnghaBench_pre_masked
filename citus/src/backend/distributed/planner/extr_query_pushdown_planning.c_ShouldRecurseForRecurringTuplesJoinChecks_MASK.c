
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int join_rel_list; } ;
struct TYPE_5__ {scalar_t__ reloptkind; int relids; TYPE_2__* subroot; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(RelOptInfo *VAR_2)
{
 bool VAR_3 = 1;
 if (VAR_2->reloptkind == VAR_1)
 {
  return 0;
 }
 if (VAR_2->reloptkind == VAR_0 && VAR_2->subroot != ((void*)0))
 {
  PlannerInfo *VAR_4 = VAR_2->subroot;

  if (FUNC_2(VAR_4->join_rel_list) > 0)
  {
   RelOptInfo *VAR_5 = FUNC_1(VAR_4->join_rel_list);
   if (FUNC_0(VAR_5->relids) > 0)
   {
    VAR_3 = 0;
   }
  }
 }

 return VAR_3;
}
