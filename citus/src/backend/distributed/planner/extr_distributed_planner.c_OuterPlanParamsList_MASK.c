
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plan_params; struct TYPE_7__* parent_root; } ;
struct TYPE_6__ {int plan_params; TYPE_2__* root; } ;
typedef TYPE_1__ RootPlanParams ;
typedef TYPE_2__ PlannerInfo ;
typedef int List ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static List *
FUNC_3(PlannerInfo *VAR_1)
{
 List *VAR_2 = VAR_0;
 PlannerInfo *VAR_3 = ((void*)0);

 for (VAR_3 = VAR_1->parent_root; VAR_3 != ((void*)0);
   VAR_3 = VAR_3->parent_root)
 {
  RootPlanParams *VAR_4 = FUNC_2(sizeof(RootPlanParams));
  VAR_4->root = VAR_3;





  VAR_4->plan_params = FUNC_0(VAR_3->plan_params);

  VAR_2 = FUNC_1(VAR_2, VAR_4);
 }

 return VAR_2;
}
