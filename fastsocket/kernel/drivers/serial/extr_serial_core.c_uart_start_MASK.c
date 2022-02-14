
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {struct uart_port* uart_port; } ;
struct uart_port {int lock; } ;
struct tty_struct {struct uart_state* driver_data; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 struct uart_port *VAR_2 = VAR_1->uart_port;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_2->lock, VAR_3);
}
