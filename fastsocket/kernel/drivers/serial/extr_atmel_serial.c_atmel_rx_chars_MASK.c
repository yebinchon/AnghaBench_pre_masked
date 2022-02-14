
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int break_active; int tasklet; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,unsigned int,unsigned int) ;
 int FUNC_6 (int *) ;
 struct atmel_uart_port* FUNC_7 (struct uart_port*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_6)
{
 struct atmel_uart_port *VAR_7 = FUNC_7(VAR_6);
 unsigned int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_6);
 while (VAR_8 & VAR_5) {
  VAR_9 = FUNC_0(VAR_6);





  if (FUNC_8(VAR_8 & (VAR_2 | VAR_0
           | VAR_1 | VAR_4)
        || VAR_7->break_active)) {


   FUNC_2(VAR_6, VAR_3);

   if (VAR_8 & VAR_4
       && !VAR_7->break_active) {
    VAR_7->break_active = 1;
    FUNC_4(VAR_6, VAR_4);
   } else {







    FUNC_3(VAR_6, VAR_4);
    VAR_8 &= ~VAR_4;
    VAR_7->break_active = 0;
   }
  }

  FUNC_5(VAR_6, VAR_8, VAR_9);
  VAR_8 = FUNC_1(VAR_6);
 }

 FUNC_6(&VAR_7->tasklet);
}
