
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int frame; int overrun; int parity; int rx; } ;
struct uart_port {int ignore_status_mask; int read_status_mask; TYPE_3__ icount; scalar_t__ membase; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tty_struct*,unsigned char,char) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_9, int VAR_10)
{
 struct tty_struct *VAR_11 = VAR_9->state->port.tty;
 unsigned char VAR_12 = 0;
 char VAR_13 = VAR_1;

 if ((VAR_10 & (VAR_8 | VAR_6
       | VAR_5)) == 0)
  return 0;


 if (VAR_10 & VAR_8) {
  VAR_9->icount.rx++;
  VAR_12 = FUNC_0(VAR_9->membase + VAR_4);

  if (VAR_10 & VAR_7)
   VAR_9->icount.parity++;
 }

 if (VAR_10 & VAR_6)
  VAR_9->icount.overrun++;

 if (VAR_10 & VAR_5)
  VAR_9->icount.frame++;



 if (VAR_10 & VAR_9->ignore_status_mask & VAR_7)
  VAR_10 &= ~VAR_8;

 VAR_10 &= VAR_9->read_status_mask;

 if (VAR_10 & VAR_7)
  VAR_13 = VAR_3;


 VAR_10 &= ~VAR_9->ignore_status_mask;

 if (VAR_10 & VAR_8)
  FUNC_1(VAR_11, VAR_12, VAR_13);

 if (VAR_10 & VAR_5)
  FUNC_1(VAR_11, 0, VAR_0);

 if (VAR_10 & VAR_6)
  FUNC_1(VAR_11, 0, VAR_2);

 return 1;
}
