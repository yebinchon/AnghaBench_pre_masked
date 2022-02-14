
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; struct uart_port* uart_port; } ;
struct uart_port {int dummy; } ;
struct tty_struct {int flags; struct uart_state* driver_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct tty_struct *VAR_2, struct file *VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 struct uart_state *VAR_6 = VAR_2->driver_data;
 struct uart_port *VAR_7 = VAR_6->uart_port;
 struct tty_port *VAR_8 = &VAR_6->port;
 int VAR_9 = -VAR_0;

 FUNC_0(&VAR_8->mutex);
 if ((!VAR_3 || !FUNC_2(VAR_3)) &&
     !(VAR_2->flags & (1 << VAR_1))) {
  FUNC_3(VAR_7, VAR_4, VAR_5);
  VAR_9 = 0;
 }
 FUNC_1(&VAR_8->mutex);
 return VAR_9;
}
