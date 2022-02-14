
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; } ;
struct uart_8250_port {TYPE_1__ port; int timer; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct uart_8250_port*) ;
 unsigned int FUNC_3 (struct uart_8250_port*,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct uart_8250_port *VAR_4 = (struct uart_8250_port *)VAR_3;
 unsigned int VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_0);
 if (!(VAR_5 & VAR_1))
  FUNC_2(VAR_4);
 FUNC_0(&VAR_4->timer, VAR_2 + FUNC_1(VAR_4->port.timeout));
}
