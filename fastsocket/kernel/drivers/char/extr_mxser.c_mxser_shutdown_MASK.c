
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; struct mxser_port* driver_data; } ;
struct TYPE_5__ {int flags; int * xmit_buf; int delta_msr_wait; } ;
struct mxser_port {int MCR; int slock; scalar_t__ ioaddr; TYPE_3__* board; TYPE_2__ port; scalar_t__ IER; } ;
struct TYPE_6__ {scalar_t__ chip_flag; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_12)
{
 struct mxser_port *VAR_13 = VAR_12->driver_data;
 unsigned long VAR_14;

 if (!(VAR_13->port.flags & VAR_0))
  return;

 FUNC_5(&VAR_13->slock, VAR_14);





 FUNC_7(&VAR_13->port.delta_msr_wait);




 if (VAR_13->port.xmit_buf) {
  FUNC_1((unsigned long) VAR_13->port.xmit_buf);
  VAR_13->port.xmit_buf = ((void*)0);
 }

 VAR_13->IER = 0;
 FUNC_3(0x00, VAR_13->ioaddr + VAR_7);

 if (VAR_12->termios->c_cflag & VAR_1)
  VAR_13->MCR &= ~(VAR_9 | VAR_10);
 FUNC_3(VAR_13->MCR, VAR_13->ioaddr + VAR_8);


 if (VAR_13->board->chip_flag)
  FUNC_3(VAR_5 | VAR_6 |
    VAR_2,
    VAR_13->ioaddr + VAR_4);
 else
  FUNC_3(VAR_5 | VAR_6,
   VAR_13->ioaddr + VAR_4);


 (void) FUNC_2(VAR_13->ioaddr + VAR_11);

 FUNC_4(VAR_3, &VAR_12->flags);

 VAR_13->port.flags &= ~VAR_0;

 if (VAR_13->board->chip_flag)
  FUNC_0(VAR_13->ioaddr);

 FUNC_6(&VAR_13->slock, VAR_14);
}
