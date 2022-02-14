
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int cfqg; int * p_root; int p_node; int * service_tree; int rb_node; } ;
struct cfq_data {int busy_queues; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_data*,int ) ;
 int FUNC_5 (struct cfq_data*,struct cfq_queue*,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct cfq_data *VAR_0, struct cfq_queue *VAR_1)
{
 FUNC_5(VAR_0, VAR_1, "del_from_rr");
 FUNC_0(!FUNC_2(VAR_1));
 FUNC_3(VAR_1);

 if (!FUNC_1(&VAR_1->rb_node)) {
  FUNC_6(&VAR_1->rb_node, VAR_1->service_tree);
  VAR_1->service_tree = ((void*)0);
 }
 if (VAR_1->p_root) {
  FUNC_7(&VAR_1->p_node, VAR_1->p_root);
  VAR_1->p_root = ((void*)0);
 }

 FUNC_4(VAR_0, VAR_1->cfqg);
 FUNC_0(!VAR_0->busy_queues);
 VAR_0->busy_queues--;
}
