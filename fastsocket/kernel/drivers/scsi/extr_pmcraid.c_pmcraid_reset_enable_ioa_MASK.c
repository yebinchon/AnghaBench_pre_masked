
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ioa_host_interrupt_clr_reg; int ioa_host_interrupt_mask_reg; } ;
struct pmcraid_instance {TYPE_1__ int_regs; int interrupt_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pmcraid_instance*,int ) ;
 int FUNC_2 (struct pmcraid_instance*) ;
 int FUNC_3 (struct pmcraid_instance*) ;

__attribute__((used)) static int FUNC_4(struct pmcraid_instance *VAR_2)
{
 u32 VAR_3;

 FUNC_3(VAR_2);
 VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_1);

 if (VAR_3 & VAR_0) {
  if (!VAR_2->interrupt_mode) {
   FUNC_0(VAR_0,
    VAR_2->int_regs.
    ioa_host_interrupt_mask_reg);
   FUNC_0(VAR_0,
    VAR_2->int_regs.ioa_host_interrupt_clr_reg);
  }
  return 1;
 } else {
  return 0;
 }
}
