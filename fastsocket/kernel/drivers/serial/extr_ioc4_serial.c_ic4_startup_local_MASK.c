
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tty; } ;
struct uart_state {TYPE_2__ port; } ;
struct uart_port {int mapbase; struct uart_state* state; } ;
struct ktermios {int dummy; } ;
struct ioc4_port {int dummy; } ;
struct TYPE_3__ {int termios; } ;


 struct ioc4_port* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,struct ktermios*) ;
 int FUNC_2 (struct ioc4_port*,int ) ;
 int FUNC_3 (struct ioc4_port*) ;

__attribute__((used)) static inline int FUNC_4(struct uart_port *VAR_0)
{
 struct ioc4_port *VAR_1;
 struct uart_state *VAR_2;

 if (!VAR_0)
  return -1;

 VAR_1 = FUNC_0(VAR_0, 0);
 if (!VAR_1)
  return -1;

 VAR_2 = VAR_0->state;

 FUNC_3(VAR_1);


 FUNC_2(VAR_1, VAR_0->mapbase);


 FUNC_1(VAR_0, VAR_2->port.tty->termios,
     (struct ktermios *)0);

 return 0;
}
