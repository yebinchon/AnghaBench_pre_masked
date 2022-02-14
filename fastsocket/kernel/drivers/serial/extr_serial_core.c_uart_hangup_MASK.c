
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int flags; int mutex; int delta_msr_wait; int open_wait; scalar_t__ count; } ;
struct uart_state {TYPE_1__* uart_port; struct tty_port port; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct tty_port*,int *) ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct uart_state*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct tty_struct *VAR_2)
{
 struct uart_state *VAR_3 = VAR_2->driver_data;
 struct tty_port *VAR_4 = &VAR_3->port;

 FUNC_0(!FUNC_2());
 FUNC_5("uart_hangup(%d)\n", VAR_3->uart_port->line);

 FUNC_3(&VAR_4->mutex);
 if (VAR_4->flags & VAR_1) {
  FUNC_7(VAR_2);
  FUNC_8(VAR_3);
  VAR_4->count = 0;
  FUNC_1(VAR_0, &VAR_4->flags);
  FUNC_6(VAR_4, ((void*)0));
  FUNC_9(&VAR_4->open_wait);
  FUNC_9(&VAR_4->delta_msr_wait);
 }
 FUNC_4(&VAR_4->mutex);
}
