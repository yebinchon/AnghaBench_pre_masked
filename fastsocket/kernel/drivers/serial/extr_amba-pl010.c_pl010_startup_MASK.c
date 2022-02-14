
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; int irq; int uartclk; } ;
struct uart_amba_port {int old_status; int clk; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*,struct uart_amba_port*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_7)
{
 struct uart_amba_port *VAR_8 = (struct uart_amba_port *)VAR_7;
 int VAR_9;




 VAR_9 = FUNC_1(VAR_8->clk);
 if (VAR_9)
  goto out;

 VAR_8->port.uartclk = FUNC_2(VAR_8->clk);




 VAR_9 = FUNC_4(VAR_8->port.irq, VAR_6, 0, "uart-pl010", VAR_8);
 if (VAR_9)
  goto clk_dis;




 VAR_8->old_status = FUNC_3(VAR_8->port.membase + VAR_4) & VAR_5;




 FUNC_5(VAR_3 | VAR_1 | VAR_2,
        VAR_8->port.membase + VAR_0);

 return 0;

 clk_dis:
 FUNC_0(VAR_8->clk);
 out:
 return VAR_9;
}
