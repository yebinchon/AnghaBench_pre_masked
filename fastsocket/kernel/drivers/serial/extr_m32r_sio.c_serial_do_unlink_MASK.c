
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
struct uart_sio_port {TYPE_1__ list; } ;
struct irq_info {int lock; TYPE_1__* head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_info *VAR_0, struct uart_sio_port *VAR_1)
{
 FUNC_3(&VAR_0->lock);

 if (!FUNC_2(VAR_0->head)) {
  if (VAR_0->head == &VAR_1->list)
   VAR_0->head = VAR_0->head->next;
  FUNC_1(&VAR_1->list);
 } else {
  FUNC_0(VAR_0->head != &VAR_1->list);
  VAR_0->head = ((void*)0);
 }

 FUNC_4(&VAR_0->lock);
}
