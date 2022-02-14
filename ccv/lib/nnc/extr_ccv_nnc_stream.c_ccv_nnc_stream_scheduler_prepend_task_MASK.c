
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ ccv_nnc_stream_task_t ;
struct TYPE_6__ {TYPE_1__* head; TYPE_1__* tail; } ;
typedef TYPE_2__ ccv_nnc_stream_scheduler_t ;



void FUNC_0(ccv_nnc_stream_scheduler_t* const VAR_0, ccv_nnc_stream_task_t* const VAR_1)
{
 if (VAR_0->head)
 {
  VAR_0->head->prev = VAR_1;
  VAR_1->next = VAR_0->head;
 } else {
  VAR_0->tail = VAR_1;
  VAR_1->next = 0;
 }
 VAR_0->head = VAR_1;
 VAR_1->prev = 0;
}
