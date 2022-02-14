
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ ccv_nnc_stream_task_t ;
struct TYPE_6__ {TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ ccv_nnc_stream_scheduler_t ;



void FUNC_0(ccv_nnc_stream_scheduler_t* const VAR_0, ccv_nnc_stream_task_t* const VAR_1)
{
 if (VAR_0->tail)
 {
  VAR_0->tail->next = VAR_1;
  VAR_1->prev = VAR_0->tail;
 } else {
  VAR_0->head = VAR_1;
  VAR_1->prev = 0;
 }
 VAR_0->tail = VAR_1;
 VAR_1->next = 0;
}
