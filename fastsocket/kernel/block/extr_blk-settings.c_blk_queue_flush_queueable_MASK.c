
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int flush_not_queueable; } ;



void FUNC_0(struct request_queue *VAR_0, bool VAR_1)
{
 VAR_0->flush_not_queueable = !VAR_1;
}
