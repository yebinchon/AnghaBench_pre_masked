
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {int fifosize; TYPE_2__ icount; TYPE_1__* state; } ;
struct uart_sunsab_port {int interrupt_mask1; TYPE_5__* regs; TYPE_3__ port; int irqflags; } ;
struct uart_port {int dummy; } ;
struct circ_buf {int* buf; size_t tail; } ;
struct TYPE_9__ {int cmdr; int * xfifo; int imr1; } ;
struct TYPE_10__ {TYPE_4__ w; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct uart_sunsab_port*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_6)
{
 struct uart_sunsab_port *VAR_7 = (struct uart_sunsab_port *) VAR_6;
 struct circ_buf *VAR_8 = &VAR_7->port.state->xmit;
 int VAR_9;

 VAR_7->interrupt_mask1 &= ~(VAR_2|VAR_3);
 FUNC_4(VAR_7->interrupt_mask1, &VAR_7->regs->w.imr1);

 if (!FUNC_2(VAR_4, &VAR_7->irqflags))
  return;

 FUNC_0(VAR_0, &VAR_7->irqflags);
 FUNC_0(VAR_4, &VAR_7->irqflags);

 for (VAR_9 = 0; VAR_9 < VAR_7->port.fifosize; VAR_9++) {
  FUNC_4(VAR_8->buf[VAR_8->tail],
         &VAR_7->regs->w.xfifo[VAR_9]);
  VAR_8->tail = (VAR_8->tail + 1) & (VAR_5 - 1);
  VAR_7->port.icount.tx++;
  if (FUNC_3(VAR_8))
   break;
 }


 FUNC_1(VAR_7);
 FUNC_4(VAR_1, &VAR_7->regs->w.cmdr);
}
