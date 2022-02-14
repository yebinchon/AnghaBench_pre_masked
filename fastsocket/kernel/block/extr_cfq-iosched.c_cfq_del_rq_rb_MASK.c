
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct cfq_queue {int * p_root; int p_node; int sort_list; int * queued; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct cfq_queue* FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (int *,struct request*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct request*) ;

__attribute__((used)) static void FUNC_7(struct request *VAR_0)
{
 struct cfq_queue *VAR_1 = FUNC_2(VAR_0);
 const int VAR_2 = FUNC_6(VAR_0);

 FUNC_0(!VAR_1->queued[VAR_2]);
 VAR_1->queued[VAR_2]--;

 FUNC_4(&VAR_1->sort_list, VAR_0);

 if (FUNC_3(VAR_1) && FUNC_1(&VAR_1->sort_list)) {





  if (VAR_1->p_root) {
   FUNC_5(&VAR_1->p_node, VAR_1->p_root);
   VAR_1->p_root = ((void*)0);
  }
 }
}
