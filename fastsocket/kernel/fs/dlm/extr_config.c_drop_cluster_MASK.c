
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__** default_groups; } ;
struct dlm_cluster {TYPE_1__ group; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;
struct TYPE_4__ {struct config_item cg_item; } ;


 int * VAR_0 ;
 int FUNC_0 (struct config_item*) ;
 struct dlm_cluster* FUNC_1 (struct config_item*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(struct config_group *VAR_2, struct config_item *VAR_3)
{
 struct dlm_cluster *VAR_4 = FUNC_1(VAR_3);
 struct config_item *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_4->group.default_groups[VAR_6]; VAR_6++) {
  VAR_5 = &VAR_4->group.default_groups[VAR_6]->cg_item;
  VAR_4->group.default_groups[VAR_6] = ((void*)0);
  FUNC_0(VAR_5);
 }

 VAR_1 = ((void*)0);
 VAR_0 = ((void*)0);

 FUNC_0(VAR_3);
}
