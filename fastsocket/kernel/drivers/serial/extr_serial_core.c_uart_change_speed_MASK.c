
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int flags; struct tty_struct* tty; } ;
struct uart_state {struct uart_port* uart_port; struct tty_port port; } ;
struct uart_port {scalar_t__ type; TYPE_1__* ops; } ;
struct tty_struct {struct ktermios* termios; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {int (* set_termios ) (struct uart_port*,struct ktermios*,struct ktermios*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*) ;

__attribute__((used)) static void
FUNC_3(struct uart_state *VAR_7, struct ktermios *VAR_8)
{
 struct tty_port *VAR_9 = &VAR_7->port;
 struct tty_struct *VAR_10 = VAR_9->tty;
 struct uart_port *VAR_11 = VAR_7->uart_port;
 struct ktermios *VAR_12;





 if (!VAR_10 || !VAR_10->termios || VAR_11->type == VAR_6)
  return;

 VAR_12 = VAR_10->termios;




 if (VAR_12->c_cflag & VAR_5)
  FUNC_1(VAR_1, &VAR_9->flags);
 else
  FUNC_0(VAR_1, &VAR_9->flags);

 if (VAR_12->c_cflag & VAR_3)
  FUNC_1(VAR_2, &VAR_9->flags);
 else
  FUNC_0(VAR_2, &VAR_9->flags);

 if (VAR_12->c_cflag & VAR_4)
  FUNC_0(VAR_0, &VAR_9->flags);
 else
  FUNC_1(VAR_0, &VAR_9->flags);

 VAR_11->ops->set_termios(VAR_11, VAR_12, VAR_8);
}
