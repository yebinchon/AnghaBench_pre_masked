
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int rx; } ;
struct uart_port {unsigned int read_status_mask; scalar_t__ sysrq; TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct uart_port*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct uart_port *VAR_11 = VAR_10;
 struct tty_struct *VAR_12 = VAR_11->state->port.tty;
 unsigned int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_2(FUNC_0(VAR_11));
 while (!(VAR_13 & VAR_1)) {
  VAR_14 = FUNC_2(FUNC_1(VAR_11));

  VAR_11->icount.rx++;

  VAR_15 = VAR_3;





  if (FUNC_6(VAR_14 & VAR_8)) {
   if (VAR_14 & VAR_7)
    VAR_11->icount.parity++;
   else if (VAR_14 & VAR_5)
    VAR_11->icount.frame++;
   if (VAR_14 & VAR_6)
    VAR_11->icount.overrun++;

   VAR_14 &= VAR_11->read_status_mask;

   if (VAR_14 & VAR_7)
    VAR_15 = VAR_4;
   else if (VAR_14 & VAR_5)
    VAR_15 = VAR_2;




  }

  if (FUNC_4(VAR_11, VAR_14))
   goto ignore_char;





  FUNC_5(VAR_11, VAR_14, VAR_6, VAR_14, VAR_15);

 ignore_char:
  VAR_13 = FUNC_2(FUNC_0(VAR_11));
 }
 FUNC_3(VAR_12);
 return VAR_0;
}
