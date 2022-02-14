
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int cpu; int tag; int ref_count; int start_time; int cmd_len; int __cmd; int cmd; int rb_node; int hash; scalar_t__ __sector; struct request_queue* q; int timeout_list; int queuelist; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct request*,int ,int) ;
 int FUNC_4 (struct request*) ;

void FUNC_5(struct request_queue *VAR_2, struct request *VAR_3)
{
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 FUNC_1(&VAR_3->queuelist);
 FUNC_1(&VAR_3->timeout_list);
 VAR_3->cpu = -1;
 VAR_3->q = VAR_2;
 VAR_3->__sector = (sector_t) -1;
 FUNC_0(&VAR_3->hash);
 FUNC_2(&VAR_3->rb_node);
 VAR_3->cmd = VAR_3->__cmd;
 VAR_3->cmd_len = VAR_0;
 VAR_3->tag = -1;
 VAR_3->ref_count = 1;
 VAR_3->start_time = VAR_1;
 FUNC_4(VAR_3);
}
