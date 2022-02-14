
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_7)
{
 struct uart_amba_port *VAR_8 = (struct uart_amba_port *)VAR_7;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_8->port.membase + VAR_3);
 if (VAR_10 & VAR_5)
  VAR_9 |= VAR_0;
 if (VAR_10 & VAR_6)
  VAR_9 |= VAR_2;
 if (VAR_10 & VAR_4)
  VAR_9 |= VAR_1;

 return VAR_9;
}
