
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* q_next; } ;
typedef TYPE_1__ ips_scb_t ;
struct TYPE_6__ {int count; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ ips_scb_queue_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void
FUNC_1(ips_scb_queue_t * VAR_0, ips_scb_t * VAR_1)
{
 FUNC_0("ips_putq_scb_head", 1);

 if (!VAR_1)
  return;

 VAR_1->q_next = VAR_0->head;
 VAR_0->head = VAR_1;

 if (!VAR_0->tail)
  VAR_0->tail = VAR_1;

 VAR_0->count++;
}
