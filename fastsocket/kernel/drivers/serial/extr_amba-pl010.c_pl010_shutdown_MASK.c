
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; int irq; } ;
struct uart_amba_port {int clk; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct uart_amba_port*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4)
{
 struct uart_amba_port *VAR_5 = (struct uart_amba_port *)VAR_4;




 FUNC_1(VAR_5->port.irq, VAR_5);




 FUNC_3(0, VAR_5->port.membase + VAR_0);


 FUNC_3(FUNC_2(VAR_5->port.membase + VAR_1) &
  ~(VAR_2 | VAR_3),
        VAR_5->port.membase + VAR_1);




 FUNC_0(VAR_5->clk);
}
