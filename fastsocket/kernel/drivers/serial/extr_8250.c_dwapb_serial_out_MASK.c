
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; int (* serial_in ) (struct uart_port*,int) ;scalar_t__ membase; } ;
struct uart_8250_port {int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int) ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4;
 VAR_4 = FUNC_0(VAR_3, VAR_4) << VAR_3->regshift;


 if (VAR_6 == VAR_1) {
  struct uart_8250_port *VAR_7 = (struct uart_8250_port *)VAR_3;
  VAR_7->lcr = VAR_5;
 }
 FUNC_2(VAR_5, VAR_3->membase + VAR_4);


 if (VAR_6 == VAR_2 || VAR_6 == VAR_0)
  VAR_5 = VAR_3->serial_in(VAR_3, VAR_0);
}
