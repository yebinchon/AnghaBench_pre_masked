
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct uart_8250_port {int acr; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 struct uart_8250_port *VAR_4 = (struct uart_8250_port *)VAR_3;

 FUNC_0(VAR_4);




 if (VAR_4->port.type == VAR_0) {
  VAR_4->acr |= VAR_2;
  FUNC_1(VAR_4, VAR_1, VAR_4->acr);
 }
}
