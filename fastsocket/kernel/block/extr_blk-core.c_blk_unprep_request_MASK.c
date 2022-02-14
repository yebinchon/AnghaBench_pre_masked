
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int (* unprep_rq_fn ) (struct request_queue*,struct request*) ;} ;
struct request {int cmd_flags; struct request_queue* q; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,struct request*) ;

void FUNC_1(struct request *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->q;

 VAR_1->cmd_flags &= ~VAR_0;
 if (VAR_2->unprep_rq_fn)
  VAR_2->unprep_rq_fn(VAR_2, VAR_1);
}
