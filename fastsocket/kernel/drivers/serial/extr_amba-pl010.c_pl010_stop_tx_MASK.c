
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 struct uart_amba_port *VAR_3 = (struct uart_amba_port *)VAR_2;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3->port.membase + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_3->port.membase + VAR_0);
}
