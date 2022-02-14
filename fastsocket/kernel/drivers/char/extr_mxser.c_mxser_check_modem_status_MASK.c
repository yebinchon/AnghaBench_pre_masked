
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_7__ {int flags; int open_wait; int delta_msr_wait; } ;
struct TYPE_6__ {int modem_status; } ;
struct TYPE_5__ {int cts; int dcd; int dsr; int rng; } ;
struct mxser_port {scalar_t__ type; int IER; scalar_t__ ioaddr; TYPE_4__* board; TYPE_3__ port; TYPE_2__ mon_data; TYPE_1__ icount; } ;
struct TYPE_8__ {int chip_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_11,
    struct mxser_port *VAR_12, int VAR_13)
{

 if (VAR_13 & VAR_10)
  VAR_12->icount.rng++;
 if (VAR_13 & VAR_9)
  VAR_12->icount.dsr++;
 if (VAR_13 & VAR_8)
  VAR_12->icount.dcd++;
 if (VAR_13 & VAR_7)
  VAR_12->icount.cts++;
 VAR_12->mon_data.modem_status = VAR_13;
 FUNC_2(&VAR_12->port.delta_msr_wait);

 if ((VAR_12->port.flags & VAR_0) && (VAR_13 & VAR_8)) {
  if (VAR_13 & VAR_6)
   FUNC_2(&VAR_12->port.open_wait);
 }

 if (VAR_12->port.flags & VAR_1) {
  if (VAR_11->hw_stopped) {
   if (VAR_13 & VAR_5) {
    VAR_11->hw_stopped = 0;

    if ((VAR_12->type != VAR_2) &&
      (!VAR_12->board->chip_flag)) {
     FUNC_0(VAR_12->IER & ~VAR_4,
      VAR_12->ioaddr + VAR_3);
     VAR_12->IER |= VAR_4;
     FUNC_0(VAR_12->IER, VAR_12->ioaddr +
       VAR_3);
    }
    FUNC_1(VAR_11);
   }
  } else {
   if (!(VAR_13 & VAR_5)) {
    VAR_11->hw_stopped = 1;
    if (VAR_12->type != VAR_2 &&
      !VAR_12->board->chip_flag) {
     VAR_12->IER &= ~VAR_4;
     FUNC_0(VAR_12->IER, VAR_12->ioaddr +
       VAR_3);
    }
   }
  }
 }
}
