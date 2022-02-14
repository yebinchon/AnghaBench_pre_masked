
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {unsigned int read_status_mask; TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct uart_port *VAR_13 = VAR_12;
 struct tty_struct *VAR_14 = VAR_13->state->port.tty;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19 = 256;

 VAR_15 = FUNC_1(VAR_13);
 while ((VAR_15 & VAR_7) && VAR_19--) {
  VAR_16 = FUNC_0(VAR_13);
  VAR_18 = VAR_3;

  VAR_13->icount.rx++;





  VAR_17 = FUNC_1(VAR_13) | VAR_5;
  if (FUNC_6(VAR_17 & (VAR_6 | VAR_9 | VAR_8 | VAR_10))) {
   if (VAR_17 & VAR_6) {
    VAR_17 &= ~(VAR_8 | VAR_9);
    VAR_13->icount.brk++;
    if (FUNC_3(VAR_13))
     goto ignore_char;
   }
   if (VAR_17 & VAR_9)
    VAR_13->icount.parity++;
   if (VAR_17 & VAR_8)
    VAR_13->icount.frame++;
   if (VAR_17 & VAR_10)
    VAR_13->icount.overrun++;

   VAR_17 &= VAR_13->read_status_mask;

   if (VAR_17 & VAR_6)
    VAR_18 = VAR_1;
   else if (VAR_17 & VAR_9)
    VAR_18 = VAR_4;
   else if (VAR_17 & VAR_8)
    VAR_18 = VAR_2;
  }

  if (FUNC_4(VAR_13, VAR_16))
   goto ignore_char;

  FUNC_5(VAR_13, VAR_17, VAR_10, VAR_16, VAR_18);

ignore_char:
  VAR_15 = FUNC_1(VAR_13);
 }
 FUNC_2(VAR_14);

 return VAR_0;
}
