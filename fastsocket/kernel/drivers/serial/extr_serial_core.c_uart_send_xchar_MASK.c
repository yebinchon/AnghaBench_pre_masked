
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {struct uart_port* uart_port; } ;
struct uart_port {char x_char; int lock; TYPE_1__* ops; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* start_tx ) (struct uart_port*) ;int (* send_xchar ) (struct uart_port*,char) ;} ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_port*,char) ;
 int FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, char VAR_1)
{
 struct uart_state *VAR_2 = VAR_0->driver_data;
 struct uart_port *VAR_3 = VAR_2->uart_port;
 unsigned long VAR_4;

 if (VAR_3->ops->send_xchar)
  VAR_3->ops->send_xchar(VAR_3, VAR_1);
 else {
  VAR_3->x_char = VAR_1;
  if (VAR_1) {
   FUNC_0(&VAR_3->lock, VAR_4);
   VAR_3->ops->start_tx(VAR_3);
   FUNC_1(&VAR_3->lock, VAR_4);
  }
 }
}
