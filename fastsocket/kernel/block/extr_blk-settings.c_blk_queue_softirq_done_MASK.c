
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int * softirq_done_fn; } ;
typedef int softirq_done_fn ;



void FUNC_0(struct request_queue *VAR_0, softirq_done_fn *VAR_1)
{
 VAR_0->softirq_done_fn = VAR_1;
}
