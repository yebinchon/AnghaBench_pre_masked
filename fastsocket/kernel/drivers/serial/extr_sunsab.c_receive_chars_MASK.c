
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {int isr0; int isr1; } ;
union sab82532_irq_status {TYPE_8__ sreg; } ;
struct TYPE_17__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_19__ {scalar_t__ line; int read_status_mask; int ignore_status_mask; TYPE_7__ icount; TYPE_6__* cons; TYPE_2__* state; } ;
struct uart_sunsab_port {TYPE_9__ port; TYPE_5__* regs; } ;
struct tty_struct {int dummy; } ;
struct TYPE_16__ {scalar_t__ index; } ;
struct TYPE_14__ {int cmdr; } ;
struct TYPE_13__ {int * rfifo; int rbcl; } ;
struct TYPE_15__ {TYPE_4__ w; TYPE_3__ r; } ;
struct TYPE_11__ {struct tty_struct* tty; } ;
struct TYPE_12__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct uart_sunsab_port*) ;
 int FUNC_3 (struct tty_struct*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 scalar_t__ FUNC_5 (TYPE_9__*,unsigned char) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static struct tty_struct *
FUNC_8(struct uart_sunsab_port *VAR_15,
       union sab82532_irq_status *VAR_16)
{
 struct tty_struct *VAR_17 = ((void*)0);
 unsigned char VAR_18[32];
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22;

 if (VAR_15->port.state != ((void*)0))
  VAR_17 = VAR_15->port.state->port.tty;


 if (VAR_16->sreg.isr0 & VAR_5) {
  VAR_21 = VAR_9;
  VAR_20++;
 }

 if (VAR_16->sreg.isr0 & VAR_6) {
  VAR_21 = FUNC_0(&VAR_15->regs->r.rbcl) & (VAR_9 - 1);
  VAR_20++;
 }


 if (VAR_16->sreg.isr0 & VAR_7) {
  FUNC_2(VAR_15);
  FUNC_7(VAR_0, &VAR_15->regs->w.cmdr);
  return VAR_17;
 }

 if (VAR_16->sreg.isr0 & VAR_4)
  VAR_20++;


 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
  VAR_18[VAR_22] = FUNC_0(&VAR_15->regs->r.rfifo[VAR_22]);


 if (VAR_20) {
  FUNC_2(VAR_15);
  FUNC_7(VAR_1, &VAR_15->regs->w.cmdr);
 }


 if ((VAR_16->sreg.isr1 & VAR_8) &&
     (VAR_15->port.line == VAR_15->port.cons->index))
  VAR_19 = 1;

 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
  unsigned char VAR_23 = VAR_18[VAR_22], VAR_24;

  if (VAR_17 == ((void*)0)) {
   FUNC_5(&VAR_15->port, VAR_23);
   continue;
  }

  VAR_24 = VAR_12;
  VAR_15->port.icount.rx++;

  if (FUNC_6(VAR_16->sreg.isr0 & (VAR_3 |
      VAR_2 |
      VAR_4)) ||
      FUNC_6(VAR_16->sreg.isr1 & VAR_8)) {



   if (VAR_16->sreg.isr1 & VAR_8) {
    VAR_16->sreg.isr0 &= ~(VAR_3 |
           VAR_2);
    VAR_15->port.icount.brk++;






    if (FUNC_4(&VAR_15->port))
     continue;
   } else if (VAR_16->sreg.isr0 & VAR_3)
    VAR_15->port.icount.parity++;
   else if (VAR_16->sreg.isr0 & VAR_2)
    VAR_15->port.icount.frame++;
   if (VAR_16->sreg.isr0 & VAR_4)
    VAR_15->port.icount.overrun++;




   VAR_16->sreg.isr0 &= (VAR_15->port.read_status_mask & 0xff);
   VAR_16->sreg.isr1 &= ((VAR_15->port.read_status_mask >> 8) & 0xff);

   if (VAR_16->sreg.isr1 & VAR_8) {
    VAR_24 = VAR_10;
   } else if (VAR_16->sreg.isr0 & VAR_3)
    VAR_24 = VAR_14;
   else if (VAR_16->sreg.isr0 & VAR_2)
    VAR_24 = VAR_11;
  }

  if (FUNC_5(&VAR_15->port, VAR_23))
   continue;

  if ((VAR_16->sreg.isr0 & (VAR_15->port.ignore_status_mask & 0xff)) == 0 &&
      (VAR_16->sreg.isr1 & ((VAR_15->port.ignore_status_mask >> 8) & 0xff)) == 0)
   FUNC_3(VAR_17, VAR_23, VAR_24);
  if (VAR_16->sreg.isr0 & VAR_4)
   FUNC_3(VAR_17, 0, VAR_13);
 }

 if (VAR_19)
  FUNC_1();

 return VAR_17;
}
