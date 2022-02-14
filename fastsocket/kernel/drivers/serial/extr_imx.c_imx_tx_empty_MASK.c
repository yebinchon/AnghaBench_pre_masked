
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct imx_port {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_3)
{
 struct imx_port *VAR_4 = (struct imx_port *)VAR_3;

 return (FUNC_0(VAR_4->port.membase + VAR_1) & VAR_2) ? VAR_0 : 0;
}
