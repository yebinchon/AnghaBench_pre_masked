
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int lock; TYPE_3__ icount; scalar_t__ sysrq; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_10__ {int command; int mpc52xx_psc_status; } ;
struct TYPE_9__ {int (* raw_rx_rdy ) (struct uart_port*) ;unsigned char (* read_char ) (struct uart_port*) ;} ;
struct TYPE_6__ {struct tty_struct* tty; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 TYPE_5__* FUNC_0 (struct uart_port*) ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned short FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 TYPE_4__* VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_port*) ;
 unsigned char FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*,unsigned char,unsigned char) ;
 int FUNC_10 (struct uart_port*) ;
 scalar_t__ FUNC_11 (struct uart_port*,unsigned char) ;

__attribute__((used)) static inline int
FUNC_12(struct uart_port *VAR_11)
{
 struct tty_struct *VAR_12 = VAR_11->state->port.tty;
 unsigned char VAR_13, VAR_14;
 unsigned short VAR_15;


 while (VAR_10->raw_rx_rdy(VAR_11)) {

  VAR_13 = VAR_10->read_char(VAR_11);
  VAR_14 = VAR_7;
  VAR_11->icount.rx++;

  VAR_15 = FUNC_1(&FUNC_0(VAR_11)->mpc52xx_psc_status);

  if (VAR_15 & (VAR_3 |
         VAR_1 |
         VAR_4)) {

   if (VAR_15 & VAR_4) {
    VAR_14 = VAR_5;
    FUNC_10(VAR_11);
    VAR_11->icount.brk++;
   } else if (VAR_15 & VAR_3) {
    VAR_14 = VAR_9;
    VAR_11->icount.parity++;
   }
   else if (VAR_15 & VAR_1) {
    VAR_14 = VAR_6;
    VAR_11->icount.frame++;
   }


   FUNC_2(&FUNC_0(VAR_11)->command, VAR_0);

  }
  FUNC_9(VAR_12, VAR_13, VAR_14);
  if (VAR_15 & VAR_2) {





   FUNC_9(VAR_12, 0, VAR_8);
   VAR_11->icount.overrun++;
  }
 }

 FUNC_4(&VAR_11->lock);
 FUNC_8(VAR_12);
 FUNC_3(&VAR_11->lock);

 return VAR_10->raw_rx_rdy(VAR_11);
}
