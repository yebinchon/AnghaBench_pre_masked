
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int irq; } ;
struct sa1100_port {TYPE_1__ port; int timer; } ;


 int FUNC_0 (struct sa1100_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct sa1100_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct sa1100_port *VAR_1 = (struct sa1100_port *)VAR_0;




 FUNC_1(&VAR_1->timer);




 FUNC_2(VAR_1->port.irq, VAR_1);




 FUNC_0(VAR_1, 0);
}
