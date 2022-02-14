
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ membase; int irq; int uartclk; } ;
struct uart_amba_port {unsigned int ifls; int old_status; int im; int clk; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_16 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,struct uart_amba_port*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct uart_port *VAR_17)
{
 struct uart_amba_port *VAR_18 = (struct uart_amba_port *)VAR_17;
 unsigned int VAR_19;
 int VAR_20;




 VAR_20 = FUNC_2(VAR_18->clk);
 if (VAR_20)
  goto out;

 VAR_18->port.uartclk = FUNC_3(VAR_18->clk);




 VAR_20 = FUNC_5(VAR_18->port.irq, VAR_16, 0, "uart-pl011", VAR_18);
 if (VAR_20)
  goto clk_dis;

 FUNC_8(VAR_18->ifls, VAR_18->port.membase + VAR_6);




 VAR_19 = VAR_11 | VAR_3 | VAR_1;
 FUNC_8(VAR_19, VAR_18->port.membase + VAR_0);
 FUNC_8(0, VAR_18->port.membase + VAR_4);
 FUNC_8(1, VAR_18->port.membase + VAR_5);
 FUNC_8(0, VAR_18->port.membase + VAR_8);
 FUNC_8(0, VAR_18->port.membase + VAR_12);
 while (FUNC_4(VAR_18->port.membase + VAR_13) & VAR_14)
  FUNC_0();

 VAR_19 = VAR_11 | VAR_2 | VAR_3;
 FUNC_8(VAR_19, VAR_18->port.membase + VAR_0);




 VAR_18->old_status = FUNC_4(VAR_18->port.membase + VAR_13) & VAR_15;




 FUNC_6(&VAR_18->port.lock);
 VAR_18->im = VAR_10 | VAR_9;
 FUNC_8(VAR_18->im, VAR_18->port.membase + VAR_7);
 FUNC_7(&VAR_18->port.lock);

 return 0;

 clk_dis:
 FUNC_1(VAR_18->clk);
 out:
 return VAR_20;
}
