
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct tty_struct {TYPE_1__* termios; } ;
struct TYPE_9__ {TYPE_3__* state; } ;
struct bfin_serial_port {scalar_t__ tx_done; scalar_t__ scts; TYPE_4__ port; } ;
struct TYPE_7__ {struct tty_struct* tty; } ;
struct TYPE_8__ {TYPE_2__ port; } ;
struct TYPE_6__ {scalar_t__ c_line; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfin_serial_port*,int ) ;
 int FUNC_1 (struct bfin_serial_port*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct bfin_serial_port*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_3)
{
 struct bfin_serial_port *VAR_4 = (struct bfin_serial_port *)VAR_3;
 struct tty_struct *VAR_5 = VAR_4->port.state->port.tty;
 if (VAR_5->termios->c_line == VAR_1)
  FUNC_3(VAR_3);





 FUNC_0(VAR_4, VAR_0);
 FUNC_4(VAR_4);

}
