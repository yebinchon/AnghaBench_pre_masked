
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_1)
{
 struct uart_8250_port *VAR_2 = (struct uart_8250_port *)VAR_1;
 int VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == 0 && VAR_2->port.type == VAR_0) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 < 0)
   FUNC_0(VAR_2);
 }

 return VAR_3;
}
