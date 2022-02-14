
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uart_port {int line; TYPE_3__* state; } ;
struct TYPE_10__ {TYPE_1__* termios; TYPE_4__* driver; } ;
struct TYPE_9__ {int num; } ;
struct TYPE_7__ {TYPE_5__* tty; } ;
struct TYPE_8__ {TYPE_2__ port; } ;
struct TYPE_6__ {int c_line; } ;


 unsigned short VAR_0 ;

 unsigned short VAR_1 ;
 unsigned short FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned short) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 int VAR_4 = VAR_3->line;
 unsigned short VAR_5;

 if (VAR_4 >= VAR_3->state->port.tty->driver->num)
  return;

 switch (VAR_3->state->port.tty->termios->c_line) {
 case 128:
  VAR_5 = FUNC_0(&VAR_2[VAR_4]);
  VAR_5 |= (VAR_0 | VAR_1);
  FUNC_1(&VAR_2[VAR_4], VAR_5);
  break;
 default:
  VAR_5 = FUNC_0(&VAR_2[VAR_4]);
  VAR_5 &= ~(VAR_0 | VAR_1);
  FUNC_1(&VAR_2[VAR_4], VAR_5);
 }
}
