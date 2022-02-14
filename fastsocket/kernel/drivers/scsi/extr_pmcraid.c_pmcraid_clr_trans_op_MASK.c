
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ioa_host_interrupt_clr_reg; int ioa_host_interrupt_mask_reg; } ;
struct pmcraid_instance {TYPE_1__* host; TYPE_3__* reset_cmd; TYPE_2__ int_regs; int interrupt_mode; } ;
struct TYPE_6__ {int (* cmd_done ) (TYPE_3__*) ;int timer; } ;
struct TYPE_4__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(
 struct pmcraid_instance *VAR_1
)
{
 unsigned long VAR_2;

 if (!VAR_1->interrupt_mode) {
  FUNC_2(VAR_0,
   VAR_1->int_regs.ioa_host_interrupt_mask_reg);
  FUNC_1(VAR_1->int_regs.ioa_host_interrupt_mask_reg);
  FUNC_2(VAR_0,
   VAR_1->int_regs.ioa_host_interrupt_clr_reg);
  FUNC_1(VAR_1->int_regs.ioa_host_interrupt_clr_reg);
 }

 if (VAR_1->reset_cmd != ((void*)0)) {
  FUNC_0(&VAR_1->reset_cmd->timer);
  FUNC_3(
   VAR_1->host->host_lock, VAR_2);
  VAR_1->reset_cmd->cmd_done(VAR_1->reset_cmd);
  FUNC_4(
   VAR_1->host->host_lock, VAR_2);
 }
}
