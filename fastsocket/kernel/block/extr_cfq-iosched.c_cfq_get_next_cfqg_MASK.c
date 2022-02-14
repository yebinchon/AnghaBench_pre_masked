
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int * active; int rb; } ;
struct cfq_group {int rb_node; } ;
struct cfq_data {struct cfq_rb_root grp_service_tree; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct cfq_group* FUNC_1 (struct cfq_rb_root*) ;
 int FUNC_2 (struct cfq_rb_root*) ;

__attribute__((used)) static struct cfq_group *FUNC_3(struct cfq_data *VAR_0)
{
 struct cfq_rb_root *VAR_1 = &VAR_0->grp_service_tree;
 struct cfq_group *VAR_2;

 if (FUNC_0(&VAR_1->rb))
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_1);
 VAR_1->active = &VAR_2->rb_node;
 FUNC_2(VAR_1);
 return VAR_2;
}
