
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_8__ {int overrun; int frame; int parity; int rx; } ;
struct TYPE_9__ {unsigned int ignore_status_mask; unsigned int read_status_mask; int lock; scalar_t__ sysrq; TYPE_3__ icount; scalar_t__ membase; TYPE_2__* state; } ;
struct imx_port {TYPE_4__ port; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {struct tty_struct* tty; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,unsigned char) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_12, void *VAR_13)
{
 struct imx_port *VAR_14 = VAR_13;
 unsigned int VAR_15,VAR_16,VAR_17 = 0;
 struct tty_struct *VAR_18 = VAR_14->port.state->port.tty;
 unsigned long VAR_19, VAR_20;

 FUNC_1(&VAR_14->port.lock,VAR_19);

 while (FUNC_0(VAR_14->port.membase + VAR_9) & VAR_11) {
  VAR_16 = VAR_2;
  VAR_14->port.icount.rx++;

  VAR_15 = FUNC_0(VAR_14->port.membase + VAR_5);

  VAR_20 = FUNC_0(VAR_14->port.membase + VAR_9);
  if (VAR_20 & VAR_10) {
   FUNC_7(VAR_20 | VAR_10, VAR_14->port.membase + VAR_9);
   if (FUNC_5(&VAR_14->port))
    continue;
  }

  if (FUNC_6(&VAR_14->port, (unsigned char)VAR_15))
   continue;

  if (VAR_15 & (VAR_8 | VAR_7 | VAR_6) ) {
   if (VAR_15 & VAR_8)
    VAR_14->port.icount.parity++;
   else if (VAR_15 & VAR_6)
    VAR_14->port.icount.frame++;
   if (VAR_15 & VAR_7)
    VAR_14->port.icount.overrun++;

   if (VAR_15 & VAR_14->port.ignore_status_mask) {
    if (++VAR_17 > 100)
     goto out;
    continue;
   }

   VAR_15 &= VAR_14->port.read_status_mask;

   if (VAR_15 & VAR_8)
    VAR_16 = VAR_4;
   else if (VAR_15 & VAR_6)
    VAR_16 = VAR_1;
   if (VAR_15 & VAR_7)
    VAR_16 = VAR_3;




  }

  FUNC_4(VAR_18, VAR_15, VAR_16);
 }

out:
 FUNC_2(&VAR_14->port.lock,VAR_19);
 FUNC_3(VAR_18);
 return VAR_0;
}
