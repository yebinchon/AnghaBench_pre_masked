
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {TYPE_3__* state; } ;
struct ktermios {int dummy; } ;
struct jsm_channel {int ch_c_cflag; int ch_mostat; struct jsm_board* ch_bd; scalar_t__ ch_old_baud; int ch_open_count; int ch_flags; } ;
struct jsm_board {int pci_dev; TYPE_4__* bd_ops; } ;
struct TYPE_8__ {int (* uart_off ) (struct jsm_channel*) ;int (* assert_modem_signals ) (struct jsm_channel*) ;} ;
struct TYPE_6__ {TYPE_1__* tty; } ;
struct TYPE_7__ {TYPE_2__ port; } ;
struct TYPE_5__ {struct ktermios* termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *,char*) ;
 int FUNC_1 (struct jsm_channel*) ;
 int FUNC_2 (struct jsm_channel*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_6)
{
 struct jsm_board *VAR_7;
 struct ktermios *VAR_8;
 struct jsm_channel *VAR_9 = (struct jsm_channel *)VAR_6;

 FUNC_0(VAR_1, VAR_3, &VAR_9->ch_bd->pci_dev, "start\n");

 VAR_7 = VAR_9->ch_bd;
 VAR_8 = VAR_6->state->port.tty->termios;

 VAR_9->ch_flags &= ~(VAR_0);

 VAR_9->ch_open_count--;




 if (VAR_9->ch_c_cflag & VAR_2) {
  FUNC_0(VAR_1, VAR_3, &VAR_9->ch_bd->pci_dev,
   "Close. HUPCL set, dropping DTR/RTS\n");


  VAR_9->ch_mostat &= ~(VAR_4 | VAR_5);
  VAR_7->bd_ops->assert_modem_signals(VAR_9);
 }

 VAR_9->ch_old_baud = 0;


 VAR_9->ch_bd->bd_ops->uart_off(VAR_9);

 FUNC_0(VAR_1, VAR_3, &VAR_9->ch_bd->pci_dev, "finish\n");
}
