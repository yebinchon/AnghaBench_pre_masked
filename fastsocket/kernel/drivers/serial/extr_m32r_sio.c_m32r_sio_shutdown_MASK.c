
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct uart_sio_port {int timer; TYPE_1__ port; scalar_t__ ier; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_sio_port*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct uart_sio_port*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1)
{
 struct uart_sio_port *VAR_2 = (struct uart_sio_port *)VAR_1;




 VAR_2->ier = 0;
 FUNC_4(VAR_2, VAR_0, 0);





 FUNC_3();

 if (!FUNC_1(VAR_2->port.irq))
  FUNC_0(&VAR_2->timer);
 else
  FUNC_2(VAR_2);
}
