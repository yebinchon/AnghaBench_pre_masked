
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int isr0; int isr1; } ;
union sab82532_irq_status {TYPE_1__ sreg; } ;
struct TYPE_12__ {int dsr; } ;
struct TYPE_15__ {TYPE_6__* state; TYPE_4__ icount; } ;
struct uart_sunsab_port {int pvr_dsr_bit; int dsr; TYPE_7__ port; TYPE_3__* regs; } ;
struct TYPE_13__ {int delta_msr_wait; } ;
struct TYPE_14__ {TYPE_5__ port; } ;
struct TYPE_10__ {int pvr; int star; int vstr; } ;
struct TYPE_11__ {TYPE_2__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_7__*,int) ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct uart_sunsab_port *VAR_4,
    union sab82532_irq_status *VAR_5)
{
 if (VAR_5->sreg.isr0 & VAR_0)
  FUNC_2(&VAR_4->port,
           !(FUNC_0(&VAR_4->regs->r.vstr) & VAR_3));

 if (VAR_5->sreg.isr1 & VAR_1)
  FUNC_1(&VAR_4->port,
           (FUNC_0(&VAR_4->regs->r.star) & VAR_2));

 if ((FUNC_0(&VAR_4->regs->r.pvr) & VAR_4->pvr_dsr_bit) ^ VAR_4->dsr) {
  VAR_4->dsr = (FUNC_0(&VAR_4->regs->r.pvr) & VAR_4->pvr_dsr_bit) ? 0 : 1;
  VAR_4->port.icount.dsr++;
 }

 FUNC_3(&VAR_4->port.state->port.delta_msr_wait);
}
