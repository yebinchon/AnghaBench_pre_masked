
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_group {int cg_item; int * cg_subsys; struct config_group** default_groups; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct config_group *VAR_0)
{
 int VAR_1;
 struct config_group *VAR_2;

 if (VAR_0->default_groups) {
  for (VAR_1 = 0; VAR_0->default_groups[VAR_1]; VAR_1++) {
   VAR_2 = VAR_0->default_groups[VAR_1];
   FUNC_1(VAR_2);
  }
 }

 VAR_0->cg_subsys = ((void*)0);
 FUNC_0(&VAR_0->cg_item);
}
