
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int pid; struct cfq_data* cfqd; scalar_t__ ref; int fifo; int p_node; int rb_node; } ;
struct cfq_data {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfq_queue*) ;
 int FUNC_3 (struct cfq_queue*) ;
 int FUNC_4 (struct cfq_queue*) ;
 int FUNC_5 (struct cfq_queue*) ;

__attribute__((used)) static void FUNC_6(struct cfq_data *VAR_0, struct cfq_queue *VAR_1,
     pid_t VAR_2, bool VAR_3)
{
 FUNC_1(&VAR_1->rb_node);
 FUNC_1(&VAR_1->p_node);
 FUNC_0(&VAR_1->fifo);

 VAR_1->ref = 0;
 VAR_1->cfqd = VAR_0;

 FUNC_4(VAR_1);

 if (VAR_3) {
  if (!FUNC_2(VAR_1))
   FUNC_3(VAR_1);
  FUNC_5(VAR_1);
 }
 VAR_1->pid = VAR_2;
}
