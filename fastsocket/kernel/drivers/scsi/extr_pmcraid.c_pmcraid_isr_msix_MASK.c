
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pmcraid_isr_param {int hrrq_id; struct pmcraid_instance* drv_inst; } ;
struct TYPE_4__ {int host_ioa_interrupt_reg; } ;
struct pmcraid_instance {int ioa_unit_check; int * isr_tasklet; TYPE_2__ int_regs; TYPE_1__* host; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct pmcraid_instance*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct pmcraid_instance*) ;
 int FUNC_5 (struct pmcraid_instance*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct pmcraid_isr_param *VAR_7;
 struct pmcraid_instance *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_7 = (struct pmcraid_isr_param *)VAR_6;
 VAR_11 = VAR_7->hrrq_id;
 VAR_8 = VAR_7->drv_inst;

 if (!VAR_11) {

  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10 &&
   ((FUNC_0(VAR_8->int_regs.host_ioa_interrupt_reg)
   & VAR_0) == 0)) {





   if (VAR_10 & VAR_4) {
    if (VAR_10 & VAR_1)
     VAR_8->ioa_unit_check = 1;

    FUNC_3("ISR: error interrupts: %x 					initiating reset\n", VAR_10);

    FUNC_6(VAR_8->host->host_lock,
     VAR_9);
    FUNC_4(VAR_8);
    FUNC_7(
     VAR_8->host->host_lock,
     VAR_9);
   }




   if (VAR_10 & VAR_2)
    FUNC_2(VAR_8);





   FUNC_1(VAR_0,
    VAR_8->int_regs.host_ioa_interrupt_reg);
   FUNC_0(VAR_8->int_regs.host_ioa_interrupt_reg);


  }
 }

 FUNC_8(&(VAR_8->isr_tasklet[VAR_11]));

 return VAR_3;
}
