
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct imx_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_2, int VAR_3)
{
 struct imx_port *VAR_4 = (struct imx_port *)VAR_2;

 if (VAR_3 & VAR_1 &&
     FUNC_0(&VAR_4->port) == 0)
  VAR_4->port.type = VAR_0;
}
