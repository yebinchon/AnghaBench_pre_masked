
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {scalar_t__ break_active; int tasklet; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (int *) ;
 struct atmel_uart_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_8, unsigned int VAR_9)
{
 struct atmel_uart_port *VAR_10 = FUNC_6(VAR_8);

 if (FUNC_4(VAR_8)) {







  if (VAR_9 & (VAR_0 | VAR_7)) {
   FUNC_1(VAR_8, (VAR_0
      | VAR_7));
   FUNC_5(&VAR_10->tasklet);
  }

  if (VAR_9 & (VAR_5 | VAR_2 |
    VAR_1 | VAR_3))
   FUNC_2(VAR_8, VAR_9);
 }


 if (VAR_9 & VAR_6)
  FUNC_3(VAR_8);
 else if (VAR_9 & VAR_5) {




  FUNC_0(VAR_8, VAR_4);
  FUNC_1(VAR_8, VAR_5);
  VAR_10->break_active = 0;
 }
}
