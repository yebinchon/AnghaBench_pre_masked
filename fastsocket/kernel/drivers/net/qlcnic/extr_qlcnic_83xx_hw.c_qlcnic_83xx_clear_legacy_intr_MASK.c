
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {scalar_t__ pci_func; } ;
struct TYPE_2__ {int spurious_intr; } ;
struct qlcnic_adapter {int tgt_status_reg; int isr_int_vec; TYPE_1__ stats; struct qlcnic_hardware_context* ahw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

irqreturn_t FUNC_6(struct qlcnic_adapter *VAR_3)
{
 u32 VAR_4;
 struct qlcnic_hardware_context *VAR_5 = VAR_3->ahw;
 int VAR_6 = 0;

 VAR_4 = FUNC_3(VAR_3->tgt_status_reg);

 if (!FUNC_2(VAR_4))
  return VAR_1;

 if (FUNC_0(VAR_4) != VAR_3->ahw->pci_func) {
  VAR_3->stats.spurious_intr++;
  return VAR_1;
 }

 FUNC_4();


 FUNC_5(0, VAR_3->isr_int_vec);
 VAR_4 = FUNC_3(VAR_3->isr_int_vec);
 do {
  VAR_4 = FUNC_3(VAR_3->tgt_status_reg);
  if (FUNC_0(VAR_4) != VAR_5->pci_func)
   break;
  VAR_6++;
 } while (FUNC_1(VAR_4) &&
   (VAR_6 < VAR_2));

 return VAR_0;
}
