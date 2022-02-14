
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iotype; int regshift; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct uart_8250_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_8250_port *VAR_1)
{
 if (VAR_1->port.iotype == VAR_0)
  return 0x100000;




 return 8 << VAR_1->port.regshift;
}
