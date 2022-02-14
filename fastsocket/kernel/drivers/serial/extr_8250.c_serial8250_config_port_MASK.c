
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ iotype; scalar_t__ type; } ;
struct uart_8250_port {scalar_t__ cur_iotype; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_8250_port*,int) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (struct uart_8250_port*) ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_6, int VAR_7)
{
 struct uart_8250_port *VAR_8 = (struct uart_8250_port *)VAR_6;
 int VAR_9 = VAR_2;
 int VAR_10;





 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0)
  return;

 VAR_10 = FUNC_4(VAR_8);
 if (VAR_10 < 0)
  VAR_9 &= ~VAR_3;

 if (VAR_8->port.iotype != VAR_8->cur_iotype)
  FUNC_6(VAR_6);

 if (VAR_7 & VAR_5)
  FUNC_0(VAR_8, VAR_9);
 if (VAR_8->port.type != VAR_1 && VAR_7 & VAR_4)
  FUNC_1(VAR_8);

 if (VAR_8->port.type != VAR_0 && VAR_9 & VAR_3)
  FUNC_2(VAR_8);
 if (VAR_8->port.type == VAR_1)
  FUNC_3(VAR_8);
}
