
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** default_groups; } ;
struct dlm_space {TYPE_2__ group; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;
struct TYPE_3__ {struct config_item cg_item; } ;


 int FUNC_0 (struct config_item*) ;
 struct dlm_space* FUNC_1 (struct config_item*) ;

__attribute__((used)) static void FUNC_2(struct config_group *VAR_0, struct config_item *VAR_1)
{
 struct dlm_space *VAR_2 = FUNC_1(VAR_1);
 struct config_item *VAR_3;
 int VAR_4;



 for (VAR_4 = 0; VAR_2->group.default_groups[VAR_4]; VAR_4++) {
  VAR_3 = &VAR_2->group.default_groups[VAR_4]->cg_item;
  VAR_2->group.default_groups[VAR_4] = ((void*)0);
  FUNC_0(VAR_3);
 }

 FUNC_0(VAR_1);
}
