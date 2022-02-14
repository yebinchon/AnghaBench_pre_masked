
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct imx_port {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_8)
{
 struct imx_port *VAR_9 = (struct imx_port *)VAR_8;
 unsigned int VAR_10 = VAR_2 | VAR_0;

 if (FUNC_0(VAR_9->port.membase + VAR_6) & VAR_7)
  VAR_10 |= VAR_1;

 if (FUNC_0(VAR_9->port.membase + VAR_4) & VAR_5)
  VAR_10 |= VAR_3;

 return VAR_10;
}
