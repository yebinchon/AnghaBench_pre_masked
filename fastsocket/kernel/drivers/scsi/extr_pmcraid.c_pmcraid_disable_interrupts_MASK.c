
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioa_host_interrupt_mask_reg; int global_interrupt_mask_reg; int ioa_host_interrupt_clr_reg; } ;
struct pmcraid_instance {TYPE_1__ int_regs; int interrupt_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(
 struct pmcraid_instance *VAR_1,
 u32 VAR_2
)
{
 u32 VAR_3 = FUNC_0(VAR_1->int_regs.global_interrupt_mask_reg);
 u32 VAR_4 = VAR_3 | VAR_0;

 FUNC_1(VAR_2, VAR_1->int_regs.ioa_host_interrupt_clr_reg);
 FUNC_1(VAR_4, VAR_1->int_regs.global_interrupt_mask_reg);
 FUNC_0(VAR_1->int_regs.global_interrupt_mask_reg);

 if (!VAR_1->interrupt_mode) {
  FUNC_1(VAR_2,
   VAR_1->int_regs.ioa_host_interrupt_mask_reg);
  FUNC_0(VAR_1->int_regs.ioa_host_interrupt_mask_reg);
 }
}
