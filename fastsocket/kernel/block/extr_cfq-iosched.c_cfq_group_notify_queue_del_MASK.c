
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int * active; } ;
struct cfq_group {int nr_cfqq; int blkg; scalar_t__ saved_workload_slice; int rb_node; } ;
struct cfq_data {struct cfq_rb_root grp_service_tree; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cfq_rb_root*,struct cfq_group*) ;
 int FUNC_3 (struct cfq_data*,struct cfq_group*,char*) ;

__attribute__((used)) static void
FUNC_4(struct cfq_data *VAR_0, struct cfq_group *VAR_1)
{
 struct cfq_rb_root *VAR_2 = &VAR_0->grp_service_tree;

 if (VAR_2->active == &VAR_1->rb_node)
  VAR_2->active = ((void*)0);

 FUNC_0(VAR_1->nr_cfqq < 1);
 VAR_1->nr_cfqq--;


 if (VAR_1->nr_cfqq)
  return;

 FUNC_3(VAR_0, VAR_1, "del_from_rr group");
 FUNC_2(VAR_2, VAR_1);
 VAR_1->saved_workload_slice = 0;
 FUNC_1(&VAR_1->blkg, 1);
}
