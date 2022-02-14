
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_4)
{
 struct uart_amba_port *VAR_5 = (struct uart_amba_port *)VAR_4;
 unsigned int VAR_6 = FUNC_0(VAR_5->port.membase + VAR_1);
 return VAR_6 & (VAR_2|VAR_3) ? 0 : VAR_0;
}
