
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int tasklet; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_4(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct atmel_uart_port *VAR_5 = FUNC_3(VAR_3);

 if (FUNC_1(VAR_3)) {

  if (VAR_4 & (VAR_0 | VAR_1)) {
   FUNC_0(VAR_3, VAR_0 | VAR_1);
   FUNC_2(&VAR_5->tasklet);
  }
 } else {

  if (VAR_4 & VAR_2) {
   FUNC_0(VAR_3, VAR_2);
   FUNC_2(&VAR_5->tasklet);
  }
 }
}
