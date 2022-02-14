
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int read_status_mask; TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 unsigned int VAR_11 ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,unsigned char) ;
 int FUNC_4 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6 (struct uart_port* VAR_12)
{
 struct tty_struct* VAR_13 = VAR_12->state->port.tty;
 int VAR_14 = 256;
 unsigned int VAR_15;
 unsigned int VAR_16;

 while (!(FUNC_0 (VAR_12, VAR_10) & VAR_11) && --VAR_14) {
  VAR_15 = FUNC_0 (VAR_12, VAR_9);
  VAR_16 = VAR_7;
  ++VAR_12->icount.rx;

  if (FUNC_5(VAR_15 & VAR_1)) {
   if (VAR_15 & VAR_0) {
    VAR_15 &= ~(VAR_2 | VAR_4);
    ++VAR_12->icount.brk;
    if (FUNC_2 (VAR_12))
     continue;
   }
   else if (VAR_15 & VAR_4)
    ++VAR_12->icount.parity;
   else if (VAR_15 & VAR_2)
    ++VAR_12->icount.frame;
   if (VAR_15 & VAR_3)
    ++VAR_12->icount.overrun;


   VAR_15 &= VAR_12->read_status_mask | 0xff;

   if (VAR_15 & VAR_0)
    VAR_16 = VAR_5;
   else if (VAR_15 & VAR_4)
    VAR_16 = VAR_8;
   else if (VAR_15 & VAR_2)
    VAR_16 = VAR_6;
  }

  if (FUNC_3 (VAR_12, (unsigned char) VAR_15))
   continue;

  FUNC_4(VAR_12, VAR_15, VAR_3, VAR_15, VAR_16);
 }
 FUNC_1 (VAR_13);
 return;
}
