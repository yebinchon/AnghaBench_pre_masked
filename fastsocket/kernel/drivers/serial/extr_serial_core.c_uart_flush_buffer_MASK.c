
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {int xmit; struct uart_port* uart_port; } ;
struct uart_port {int lock; TYPE_1__* ops; } ;
struct tty_struct {int index; struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* flush_buffer ) (struct uart_port*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 struct uart_port *VAR_2;
 unsigned long VAR_3;





 if (!VAR_1) {
  FUNC_0(1);
  return;
 }

 VAR_2 = VAR_1->uart_port;
 FUNC_1("uart_flush_buffer(%d) called\n", VAR_0->index);

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_6(&VAR_1->xmit);
 if (VAR_2->ops->flush_buffer)
  VAR_2->ops->flush_buffer(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_5(VAR_0);
}
