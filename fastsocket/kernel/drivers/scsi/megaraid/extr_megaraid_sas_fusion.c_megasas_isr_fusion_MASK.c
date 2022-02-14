
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct megasas_irq_context {int MSIxIndex; struct megasas_instance* instance; } ;
struct megasas_instance {int work_init; int reg_set; TYPE_1__* instancet; int reset_flags; int msix_vectors; scalar_t__ mask_interrupts; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* clear_intr ) (int ) ;int (* read_fw_status_reg ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct megasas_instance*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct megasas_irq_context *VAR_7 = VAR_6;
 struct megasas_instance *VAR_8 = VAR_7->instance;
 u32 VAR_9, VAR_10;

 if (VAR_8->mask_interrupts)
  return VAR_1;

 if (!VAR_8->msix_vectors) {
  VAR_9 = VAR_8->instancet->clear_intr(VAR_8->reg_set);
  if (!VAR_9)
   return VAR_1;
 }


 if (FUNC_6(VAR_2, &VAR_8->reset_flags)) {
  VAR_8->instancet->clear_intr(VAR_8->reg_set);
  return VAR_0;
 }

 if (!FUNC_0(VAR_8, VAR_7->MSIxIndex)) {
  VAR_8->instancet->clear_intr(VAR_8->reg_set);

  VAR_10 = VAR_8->instancet->read_fw_status_reg(
   VAR_8->reg_set) & VAR_4;
  if (VAR_10 == VAR_3)
   FUNC_1(&VAR_8->work_init);
 }

 return VAR_0;
}
