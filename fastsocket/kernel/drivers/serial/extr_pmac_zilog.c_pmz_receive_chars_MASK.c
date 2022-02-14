
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_13__ {unsigned char read_status_mask; int ignore_status_mask; TYPE_3__ icount; int lock; scalar_t__ sysrq; TYPE_2__* state; } ;
struct uart_pmac_port {unsigned char parity_mask; int flags; int* curregs; TYPE_5__* dev; TYPE_6__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_12__ {TYPE_4__ ofdev; } ;
struct TYPE_8__ {struct tty_struct* tty; } ;
struct TYPE_9__ {TYPE_1__ port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (char*) ;
 unsigned char FUNC_4 (struct uart_pmac_port*) ;
 unsigned char FUNC_5 (struct uart_pmac_port*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tty_struct*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,unsigned char) ;
 int FUNC_11 (struct uart_pmac_port*,size_t,int) ;
 int FUNC_12 (struct uart_pmac_port*) ;

__attribute__((used)) static struct tty_struct *FUNC_13(struct uart_pmac_port *VAR_19)
{
 struct tty_struct *VAR_20 = ((void*)0);
 unsigned char VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26 = 0;





 if (!FUNC_1(VAR_19)) {
  FUNC_3("pmz: draining input\n");

  for (;;) {
   if ((++VAR_26) > 1000)
    goto flood;
   (void)FUNC_5(VAR_19, VAR_8);
   FUNC_11(VAR_19, VAR_7, VAR_2);
   (void)FUNC_4(VAR_19);
   VAR_21 = FUNC_5(VAR_19, VAR_7);
   if (!(VAR_21 & VAR_10))
    break;
  }
  return ((void*)0);
 }


 if (VAR_19->port.state == ((void*)0) || VAR_19->port.state->port.tty == ((void*)0)) {
  FUNC_0(1);
  (void)FUNC_4(VAR_19);
  return ((void*)0);
 }
 VAR_20 = VAR_19->port.state->port.tty;

 while (1) {
  VAR_24 = 0;
  VAR_23 = 0;

  VAR_22 = FUNC_5(VAR_19, VAR_8);
  VAR_21 = FUNC_4(VAR_19);

  if (VAR_22 & (VAR_5 | VAR_11 | VAR_1)) {
   FUNC_11(VAR_19, VAR_7, VAR_2);
   FUNC_12(VAR_19);
  }

  VAR_21 &= VAR_19->parity_mask;
  if (VAR_21 == 0 && VAR_19->flags & VAR_6) {
   VAR_19->flags &= ~VAR_6;
  }
  if (VAR_23)
   goto next_char;

  VAR_25 = VAR_14;
  VAR_19->port.icount.rx++;

  if (VAR_22 & (VAR_5 | VAR_11 | VAR_1 | VAR_0)) {
   VAR_24 = 1;
   if (VAR_22 & VAR_0) {
    FUNC_3("pmz: got break !\n");
    VAR_22 &= ~(VAR_5 | VAR_1);
    VAR_19->port.icount.brk++;
    if (FUNC_9(&VAR_19->port))
     goto next_char;
   }
   else if (VAR_22 & VAR_5)
    VAR_19->port.icount.parity++;
   else if (VAR_22 & VAR_1)
    VAR_19->port.icount.frame++;
   if (VAR_22 & VAR_11)
    VAR_19->port.icount.overrun++;
   VAR_22 &= VAR_19->port.read_status_mask;
   if (VAR_22 & VAR_0)
    VAR_25 = VAR_12;
   else if (VAR_22 & VAR_5)
    VAR_25 = VAR_16;
   else if (VAR_22 & VAR_1)
    VAR_25 = VAR_13;
  }

  if (VAR_19->port.ignore_status_mask == 0xff ||
      (VAR_22 & VAR_19->port.ignore_status_mask) == 0) {
       FUNC_8(VAR_20, VAR_21, VAR_25);
  }
  if (VAR_22 & VAR_11)
   FUNC_8(VAR_20, 0, VAR_15);
 next_char:







  if ((++VAR_26) > 1000)
   goto flood;
  VAR_21 = FUNC_5(VAR_19, VAR_7);
  if (!(VAR_21 & VAR_10))
   break;
 }

 return VAR_20;
 flood:
 VAR_19->curregs[VAR_8] &= ~(VAR_3 | VAR_17 | VAR_9);
 FUNC_11(VAR_19, VAR_8, VAR_19->curregs[VAR_8]);
 FUNC_12(VAR_19);
 FUNC_2(&VAR_19->dev->ofdev.dev, "pmz: rx irq flood !\n");
 return VAR_20;
}
