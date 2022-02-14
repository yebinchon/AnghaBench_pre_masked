
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int irq; int lock; } ;
struct uart_sunsab_port {int interrupt_mask0; int interrupt_mask1; int cached_dafo; int cached_mode; TYPE_4__ port; TYPE_3__* regs; } ;
struct uart_port {int dummy; } ;
struct TYPE_6__ {int ccr0; int mode; int dafo; } ;
struct TYPE_5__ {int imr1; int imr0; } ;
struct TYPE_7__ {TYPE_2__ rw; TYPE_1__ w; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct uart_sunsab_port*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_4)
{
 struct uart_sunsab_port *VAR_5 = (struct uart_sunsab_port *) VAR_4;
 unsigned long VAR_6;

 FUNC_2(&VAR_5->port.lock, VAR_6);


 VAR_5->interrupt_mask0 = 0xff;
 FUNC_4(VAR_5->interrupt_mask0, &VAR_5->regs->w.imr0);
 VAR_5->interrupt_mask1 = 0xff;
 FUNC_4(VAR_5->interrupt_mask1, &VAR_5->regs->w.imr1);


 VAR_5->cached_dafo = FUNC_1(&VAR_5->regs->rw.dafo);
 VAR_5->cached_dafo &= ~VAR_1;
 FUNC_4(VAR_5->cached_dafo, &VAR_5->regs->rw.dafo);


 VAR_5->cached_mode &= ~VAR_2;
 FUNC_4(VAR_5->cached_mode, &VAR_5->regs->rw.mode);
 FUNC_3(&VAR_5->port.lock, VAR_6);
 FUNC_0(VAR_5->port.irq, VAR_5);
}
