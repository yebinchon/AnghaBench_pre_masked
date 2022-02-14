
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct uart_sio_port {TYPE_1__ port; } ;
struct irq_info {int * head; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct irq_info*) ;
 struct irq_info* VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct irq_info*,struct uart_sio_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_sio_port *VAR_1)
{
 struct irq_info *VAR_2 = VAR_0 + VAR_1->port.irq;

 FUNC_0(VAR_2->head == ((void*)0));

 if (FUNC_2(VAR_2->head)) {
  FUNC_1(VAR_1->port.irq, VAR_2);
  FUNC_1(VAR_1->port.irq + 1, VAR_2);
 }

 FUNC_3(VAR_2, VAR_1);
}
