
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uart_port {int lock; TYPE_3__* state; } ;
struct ktermios {char* c_cc; } ;
struct jsm_channel {TYPE_5__* ch_bd; } ;
struct TYPE_10__ {TYPE_4__* bd_ops; } ;
struct TYPE_9__ {int (* send_stop_character ) (struct jsm_channel*) ;int (* send_start_character ) (struct jsm_channel*) ;} ;
struct TYPE_7__ {TYPE_1__* tty; } ;
struct TYPE_8__ {TYPE_2__ port; } ;
struct TYPE_6__ {struct ktermios* termios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct jsm_channel*) ;
 int FUNC_3 (struct jsm_channel*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, char VAR_3)
{
 unsigned long VAR_4;
 struct jsm_channel *VAR_5 = (struct jsm_channel *)VAR_2;
 struct ktermios *VAR_6;

 FUNC_0(&VAR_2->lock, VAR_4);
 VAR_6 = VAR_2->state->port.tty->termios;
 if (VAR_3 == VAR_6->c_cc[VAR_0])
  VAR_5->ch_bd->bd_ops->send_start_character(VAR_5);

 if (VAR_3 == VAR_6->c_cc[VAR_1])
  VAR_5->ch_bd->bd_ops->send_stop_character(VAR_5);
 FUNC_1(&VAR_2->lock, VAR_4);
}
