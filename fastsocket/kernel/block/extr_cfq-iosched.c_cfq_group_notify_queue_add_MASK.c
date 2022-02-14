
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct cfq_rb_root {scalar_t__ min_vdisktime; int rb; } ;
struct cfq_group {scalar_t__ vdisktime; int rb_node; int nr_cfqq; } ;
struct cfq_data {struct cfq_rb_root grp_service_tree; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cfq_rb_root*,struct cfq_group*) ;
 struct cfq_group* FUNC_2 (struct rb_node*) ;
 struct rb_node* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct cfq_data *VAR_1, struct cfq_group *VAR_2)
{
 struct cfq_rb_root *VAR_3 = &VAR_1->grp_service_tree;
 struct cfq_group *VAR_4;
 struct rb_node *VAR_5;

 VAR_2->nr_cfqq++;
 if (!FUNC_0(&VAR_2->rb_node))
  return;






 VAR_5 = FUNC_3(&VAR_3->rb);
 if (VAR_5) {
  VAR_4 = FUNC_2(VAR_5);
  VAR_2->vdisktime = VAR_4->vdisktime + VAR_0;
 } else
  VAR_2->vdisktime = VAR_3->min_vdisktime;
 FUNC_1(VAR_3, VAR_2);
}
