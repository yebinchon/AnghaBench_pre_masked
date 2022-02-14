
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int * rq_timed_out_fn; } ;
typedef int rq_timed_out_fn ;



void FUNC_0(struct request_queue *VAR_0, rq_timed_out_fn *VAR_1)
{
 VAR_0->rq_timed_out_fn = VAR_1;
}
