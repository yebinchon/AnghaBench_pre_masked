
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_10__ {unsigned int read_status_mask; int lock; scalar_t__ membase; TYPE_3__ icount; TYPE_2__* state; } ;
struct uart_amba_port {TYPE_4__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_7__ {struct tty_struct* tty; } ;
struct TYPE_8__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,unsigned int) ;
 int FUNC_6 (TYPE_4__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_amba_port *VAR_13)
{
 struct tty_struct *VAR_14 = VAR_13->port.state->port.tty;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18 = 256;

 VAR_15 = FUNC_0(VAR_13->port.membase + VAR_9);
 while ((VAR_15 & VAR_10) == 0 && VAR_18--) {
  VAR_16 = FUNC_0(VAR_13->port.membase + VAR_8) | VAR_12;
  VAR_17 = VAR_2;
  VAR_13->port.icount.rx++;





  if (FUNC_7(VAR_16 & VAR_11)) {
   if (VAR_16 & VAR_4) {
    VAR_16 &= ~(VAR_5 | VAR_7);
    VAR_13->port.icount.brk++;
    if (FUNC_4(&VAR_13->port))
     goto ignore_char;
   } else if (VAR_16 & VAR_7)
    VAR_13->port.icount.parity++;
   else if (VAR_16 & VAR_5)
    VAR_13->port.icount.frame++;
   if (VAR_16 & VAR_6)
    VAR_13->port.icount.overrun++;

   VAR_16 &= VAR_13->port.read_status_mask;

   if (VAR_16 & VAR_4)
    VAR_17 = VAR_0;
   else if (VAR_16 & VAR_7)
    VAR_17 = VAR_3;
   else if (VAR_16 & VAR_5)
    VAR_17 = VAR_1;
  }

  if (FUNC_5(&VAR_13->port, VAR_16 & 255))
   goto ignore_char;

  FUNC_6(&VAR_13->port, VAR_16, VAR_6, VAR_16, VAR_17);

 ignore_char:
  VAR_15 = FUNC_0(VAR_13->port.membase + VAR_9);
 }
 FUNC_2(&VAR_13->port.lock);
 FUNC_3(VAR_14);
 FUNC_1(&VAR_13->port.lock);
}
