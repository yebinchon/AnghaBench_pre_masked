
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {unsigned int irq_status; int tasklet; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 struct atmel_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_2(struct uart_port *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{
 struct atmel_uart_port *VAR_7 = FUNC_1(VAR_4);

 if (VAR_5 & (VAR_3 | VAR_2 | VAR_1
    | VAR_0)) {
  VAR_7->irq_status = VAR_6;
  FUNC_0(&VAR_7->tasklet);
 }
}
