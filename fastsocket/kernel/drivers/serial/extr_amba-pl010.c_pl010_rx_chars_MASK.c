
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,unsigned int) ;
 int FUNC_7 (TYPE_4__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct uart_amba_port *VAR_14)
{
 struct tty_struct *VAR_15 = VAR_14->port.state->port.tty;
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = 256;

 VAR_16 = FUNC_1(VAR_14->port.membase + VAR_6);
 while (FUNC_0(VAR_16) && VAR_20--) {
  VAR_17 = FUNC_1(VAR_14->port.membase + VAR_4);
  VAR_18 = VAR_2;

  VAR_14->port.icount.rx++;





  VAR_19 = FUNC_1(VAR_14->port.membase + VAR_7) | VAR_13;
  if (FUNC_8(VAR_19 & VAR_8)) {
   FUNC_9(0, VAR_14->port.membase + VAR_5);

   if (VAR_19 & VAR_9) {
    VAR_19 &= ~(VAR_10 | VAR_12);
    VAR_14->port.icount.brk++;
    if (FUNC_5(&VAR_14->port))
     goto ignore_char;
   } else if (VAR_19 & VAR_12)
    VAR_14->port.icount.parity++;
   else if (VAR_19 & VAR_10)
    VAR_14->port.icount.frame++;
   if (VAR_19 & VAR_11)
    VAR_14->port.icount.overrun++;

   VAR_19 &= VAR_14->port.read_status_mask;

   if (VAR_19 & VAR_9)
    VAR_18 = VAR_0;
   else if (VAR_19 & VAR_12)
    VAR_18 = VAR_3;
   else if (VAR_19 & VAR_10)
    VAR_18 = VAR_1;
  }

  if (FUNC_6(&VAR_14->port, VAR_17))
   goto ignore_char;

  FUNC_7(&VAR_14->port, VAR_19, VAR_11, VAR_17, VAR_18);

 ignore_char:
  VAR_16 = FUNC_1(VAR_14->port.membase + VAR_6);
 }
 FUNC_3(&VAR_14->port.lock);
 FUNC_4(VAR_15);
 FUNC_2(&VAR_14->port.lock);
}
