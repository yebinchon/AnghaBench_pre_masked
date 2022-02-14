
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
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct imx_port *VAR_5 = (struct imx_port *)VAR_3;
 unsigned long VAR_6;

 VAR_6 = FUNC_0(VAR_5->port.membase + VAR_1) & ~VAR_2;

 if (VAR_4 & VAR_0)
  VAR_6 |= VAR_2;

 FUNC_1(VAR_6, VAR_5->port.membase + VAR_1);
}
