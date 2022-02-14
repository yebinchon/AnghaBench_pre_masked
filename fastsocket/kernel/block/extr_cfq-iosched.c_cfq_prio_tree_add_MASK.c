
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct cfq_queue {size_t org_ioprio; int * p_root; int p_node; int next_rq; } ;
struct cfq_data {int * prio_trees; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cfq_queue*) ;
 struct cfq_queue* FUNC_2 (struct cfq_data*,int *,int ,struct rb_node**,struct rb_node***) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static void FUNC_6(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 struct rb_node **VAR_2, *VAR_3;
 struct cfq_queue *VAR_4;

 if (VAR_1->p_root) {
  FUNC_3(&VAR_1->p_node, VAR_1->p_root);
  VAR_1->p_root = ((void*)0);
 }

 if (FUNC_1(VAR_1))
  return;
 if (!VAR_1->next_rq)
  return;

 VAR_1->p_root = &VAR_0->prio_trees[VAR_1->org_ioprio];
 VAR_4 = FUNC_2(VAR_0, VAR_1->p_root,
          FUNC_0(VAR_1->next_rq), &VAR_3, &VAR_2);
 if (!VAR_4) {
  FUNC_5(&VAR_1->p_node, VAR_3, VAR_2);
  FUNC_4(&VAR_1->p_node, VAR_1->p_root);
 } else
  VAR_1->p_root = ((void*)0);
}
