
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int lock; int irq; } ;
struct uart_sunsab_port {int cached_mode; int interrupt_mask0; int interrupt_mask1; TYPE_5__ port; int irqflags; TYPE_4__* regs; } ;
struct uart_port {int dummy; } ;
struct TYPE_8__ {int imr1; int imr0; int rfc; int mode; int ccr4; int ccr3; int ccr2; int ccr1; int ccr0; int cmdr; } ;
struct TYPE_7__ {int ccr0; } ;
struct TYPE_6__ {int isr1; int isr0; } ;
struct TYPE_9__ {TYPE_3__ w; TYPE_2__ rw; TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 int VAR_30 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char*,struct uart_sunsab_port*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct uart_sunsab_port*) ;
 int VAR_31 ;
 int FUNC_6 (struct uart_sunsab_port*) ;
 int FUNC_7 (unsigned char,int *) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_32)
{
 struct uart_sunsab_port *VAR_33 = (struct uart_sunsab_port *) VAR_32;
 unsigned long VAR_34;
 unsigned char VAR_35;
 int VAR_36 = FUNC_1(VAR_33->port.irq, VAR_31,
         VAR_0, "sab", VAR_33);
 if (VAR_36)
  return VAR_36;

 FUNC_3(&VAR_33->port.lock, VAR_34);




 FUNC_5(VAR_33);
 FUNC_6(VAR_33);




 FUNC_7(VAR_13, &VAR_33->regs->w.cmdr);
 FUNC_5(VAR_33);
 FUNC_7(VAR_14, &VAR_33->regs->w.cmdr);




 (void) FUNC_0(&VAR_33->regs->r.isr0);
 (void) FUNC_0(&VAR_33->regs->r.isr1);




 FUNC_7(0, &VAR_33->regs->w.ccr0);
 FUNC_7(VAR_2 | VAR_4 |
        VAR_5, &VAR_33->regs->w.ccr0);
 FUNC_7(VAR_7 | VAR_6 | 7, &VAR_33->regs->w.ccr1);
 FUNC_7(VAR_8 | VAR_9 |
        VAR_10, &VAR_33->regs->w.ccr2);
 FUNC_7(0, &VAR_33->regs->w.ccr3);
 FUNC_7(VAR_12 | VAR_11, &VAR_33->regs->w.ccr4);
 VAR_33->cached_mode = (VAR_27 | VAR_25 |
      VAR_26);
 FUNC_7(VAR_33->cached_mode, &VAR_33->regs->w.mode);
 FUNC_7(VAR_28|VAR_29, &VAR_33->regs->w.rfc);

 VAR_35 = FUNC_0(&VAR_33->regs->rw.ccr0);
 VAR_35 |= VAR_3;
 FUNC_7(VAR_35, &VAR_33->regs->rw.ccr0);




 VAR_33->interrupt_mask0 = (VAR_16 | VAR_15 |
          VAR_17);
 FUNC_7(VAR_33->interrupt_mask0, &VAR_33->regs->w.imr0);
 VAR_33->interrupt_mask1 = (VAR_19 | VAR_18 |
          VAR_22 | VAR_21 |
          VAR_20 | VAR_23 |
          VAR_24);
 FUNC_7(VAR_33->interrupt_mask1, &VAR_33->regs->w.imr1);
 FUNC_2(VAR_1, &VAR_33->irqflags);
 FUNC_2(VAR_30, &VAR_33->irqflags);

 FUNC_4(&VAR_33->port.lock, VAR_34);

 return 0;
}
