
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct uart_sio_port {TYPE_1__ port; int list; } ;
struct irq_info {int lock; int * head; } ;


 int FUNC_0 (int *) ;
 struct irq_info* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int,char*,struct irq_info*) ;
 int FUNC_3 (struct irq_info*,struct uart_sio_port*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct uart_sio_port *VAR_2)
{
 struct irq_info *VAR_3 = VAR_0 + VAR_2->port.irq;
 int VAR_4, VAR_5 = 0;

 FUNC_4(&VAR_3->lock);

 if (VAR_3->head) {
  FUNC_1(&VAR_2->list, VAR_3->head);
  FUNC_5(&VAR_3->lock);

  VAR_4 = 0;
 } else {
  FUNC_0(&VAR_2->list);
  VAR_3->head = &VAR_2->list;
  FUNC_5(&VAR_3->lock);

  VAR_4 = FUNC_2(VAR_2->port.irq, VAR_1,
      VAR_5, "SIO0-RX", VAR_3);
  VAR_4 |= FUNC_2(VAR_2->port.irq + 1, VAR_1,
      VAR_5, "SIO0-TX", VAR_3);
  if (VAR_4 < 0)
   FUNC_3(VAR_3, VAR_2);
 }

 return VAR_4;
}
