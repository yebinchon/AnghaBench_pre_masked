
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; int irq; int lock; } ;
struct uart_amba_port {unsigned long im; int clk; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct uart_amba_port*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_8)
{
 struct uart_amba_port *VAR_9 = (struct uart_amba_port *)VAR_8;
 unsigned long VAR_10;




 FUNC_3(&VAR_9->port.lock);
 VAR_9->im = 0;
 FUNC_5(VAR_9->im, VAR_9->port.membase + VAR_3);
 FUNC_5(0xffff, VAR_9->port.membase + VAR_2);
 FUNC_4(&VAR_9->port.lock);




 FUNC_1(VAR_9->port.irq, VAR_9);




 FUNC_5(VAR_5 | VAR_1, VAR_9->port.membase + VAR_0);




 VAR_10 = FUNC_2(VAR_9->port.membase + VAR_4);
 VAR_10 &= ~(VAR_6 | VAR_7);
 FUNC_5(VAR_10, VAR_9->port.membase + VAR_4);




 FUNC_0(VAR_9->clk);
}
