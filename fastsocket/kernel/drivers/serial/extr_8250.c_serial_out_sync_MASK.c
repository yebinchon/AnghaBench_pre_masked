
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; int (* serial_out ) (struct uart_port*,int,int) ;int (* serial_in ) (struct uart_port*,int ) ;} ;
struct uart_8250_port {struct uart_port port; } ;


 int VAR_0 ;




 int FUNC_0 (struct uart_port*,int,int) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct uart_8250_port *VAR_1, int VAR_2, int VAR_3)
{
 struct uart_port *VAR_4 = &VAR_1->port;
 switch (VAR_4->iotype) {
 case 129:
 case 128:



 case 130:
  VAR_4->serial_out(VAR_4, VAR_2, VAR_3);
  VAR_4->serial_in(VAR_4, VAR_0);
  break;
 default:
  VAR_4->serial_out(VAR_4, VAR_2, VAR_3);
 }
}
