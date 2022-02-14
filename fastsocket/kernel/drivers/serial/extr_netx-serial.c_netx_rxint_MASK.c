
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int rx; } ;
struct uart_port {unsigned char read_status_mask; TYPE_3__ icount; scalar_t__ membase; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,unsigned char) ;
 int FUNC_4 (struct uart_port*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_12)
{
 unsigned char VAR_13, VAR_14, VAR_15;
 struct tty_struct *VAR_16 = VAR_12->state->port.tty;

 while (!(FUNC_0(VAR_12->membase + VAR_10) & VAR_0)) {
  VAR_13 = FUNC_0(VAR_12->membase + VAR_9);
  VAR_14 = VAR_7;
  VAR_12->icount.rx++;
  VAR_15 = FUNC_0(VAR_12->membase + VAR_11);
  if (VAR_15 & VAR_1) {
   FUNC_6(0, VAR_12->membase + VAR_11);
   if (FUNC_2(VAR_12))
    continue;
  }

  if (FUNC_5(VAR_15 & (VAR_2 | VAR_4 | VAR_3))) {

   if (VAR_15 & VAR_4)
    VAR_12->icount.parity++;
   else if (VAR_15 & VAR_2)
    VAR_12->icount.frame++;
   if (VAR_15 & VAR_3)
    VAR_12->icount.overrun++;

   VAR_15 &= VAR_12->read_status_mask;

   if (VAR_15 & VAR_1)
    VAR_14 = VAR_5;
   else if (VAR_15 & VAR_4)
    VAR_14 = VAR_8;
   else if (VAR_15 & VAR_2)
    VAR_14 = VAR_6;
  }

  if (FUNC_3(VAR_12, VAR_13))
   continue;

  FUNC_4(VAR_12, VAR_15, VAR_3, VAR_13, VAR_14);
 }

 FUNC_1(VAR_16);
 return;
}
