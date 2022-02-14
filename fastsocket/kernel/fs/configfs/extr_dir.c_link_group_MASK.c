
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configfs_subsystem {int dummy; } ;
struct config_group {struct config_group** default_groups; struct configfs_subsystem* cg_subsys; int cg_item; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct configfs_subsystem* FUNC_3 (struct config_group*) ;

__attribute__((used)) static void FUNC_4(struct config_group *VAR_0, struct config_group *VAR_1)
{
 int VAR_2;
 struct config_group *VAR_3;
 struct configfs_subsystem *VAR_4 = ((void*)0);

 FUNC_2(&VAR_0->cg_item, &VAR_1->cg_item);

 if (VAR_0->cg_subsys)
  VAR_4 = VAR_0->cg_subsys;
 else if (FUNC_1(&VAR_0->cg_item))
  VAR_4 = FUNC_3(VAR_1);
 else
  FUNC_0();
 VAR_1->cg_subsys = VAR_4;

 if (VAR_1->default_groups) {
  for (VAR_2 = 0; VAR_1->default_groups[VAR_2]; VAR_2++) {
   VAR_3 = VAR_1->default_groups[VAR_2];
   FUNC_4(VAR_1, VAR_3);
  }
 }
}
