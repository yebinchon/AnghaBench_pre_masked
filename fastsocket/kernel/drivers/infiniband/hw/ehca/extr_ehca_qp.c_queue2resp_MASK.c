
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipzu_queue_resp {int offset; int toggle_state; int pagesize; int queue_length; int act_nr_of_sg; int qe_size; } ;
struct ipz_queue {int offset; int toggle_state; int pagesize; int queue_length; int act_nr_of_sg; int qe_size; } ;



__attribute__((used)) static inline void FUNC_0(struct ipzu_queue_resp *VAR_0,
         struct ipz_queue *VAR_1)
{
 VAR_0->qe_size = VAR_1->qe_size;
 VAR_0->act_nr_of_sg = VAR_1->act_nr_of_sg;
 VAR_0->queue_length = VAR_1->queue_length;
 VAR_0->pagesize = VAR_1->pagesize;
 VAR_0->toggle_state = VAR_1->toggle_state;
 VAR_0->offset = VAR_1->offset;
}
