
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {int im; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_5)
{
 struct uart_amba_port *VAR_6 = (struct uart_amba_port *)VAR_5;

 VAR_6->im |= VAR_4|VAR_0|VAR_1|VAR_2;
 FUNC_0(VAR_6->im, VAR_6->port.membase + VAR_3);
}
