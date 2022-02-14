
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int * ci_parent; struct config_group* ci_group; int ci_entry; } ;
struct config_group {int dummy; } ;


 int FUNC_0 (struct config_group*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct config_item *VAR_0)
{
 struct config_group *VAR_1;

 VAR_1 = VAR_0->ci_group;
 if (VAR_1) {
  FUNC_2(&VAR_0->ci_entry);

  VAR_0->ci_group = ((void*)0);
  VAR_0->ci_parent = ((void*)0);


  FUNC_1(VAR_0);


  FUNC_0(VAR_1);
 }
}
