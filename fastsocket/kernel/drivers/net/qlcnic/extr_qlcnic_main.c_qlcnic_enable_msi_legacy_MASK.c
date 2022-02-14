
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_legacy_intr_set {int tgt_mask_reg; int tgt_status_reg; int int_vec_bit; } ;
struct qlcnic_hardware_context {size_t pci_func; int int_vec_bit; } ;
struct qlcnic_adapter {TYPE_1__* msix_entries; void* crb_int_state_reg; void* isr_int_vec; void* tgt_mask_reg; void* tgt_status_reg; struct qlcnic_hardware_context* ahw; int flags; struct pci_dev* pdev; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct qlcnic_legacy_intr_set* VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct pci_dev*) ;
 void* FUNC_2 (struct qlcnic_hardware_context*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10, VAR_11;
 const struct qlcnic_legacy_intr_set *VAR_12;
 struct qlcnic_hardware_context *VAR_13 = VAR_8->ahw;
 struct pci_dev *VAR_14 = VAR_8->pdev;

 if (VAR_6 && !FUNC_1(VAR_14)) {
  VAR_8->flags |= VAR_3;
  VAR_10 = VAR_5[VAR_8->ahw->pci_func];
  VAR_8->tgt_status_reg = FUNC_2(VAR_8->ahw,
           VAR_10);
  FUNC_0(&VAR_14->dev, "using msi interrupts\n");
  VAR_8->msix_entries[0].vector = VAR_14->irq;
  return VAR_9;
 }
 if (VAR_6 || VAR_7)
  return -VAR_0;

 VAR_12 = &VAR_4[VAR_8->ahw->pci_func];
 VAR_8->ahw->int_vec_bit = VAR_12->int_vec_bit;
 VAR_10 = VAR_12->tgt_status_reg;
 VAR_8->tgt_status_reg = FUNC_2(VAR_13, VAR_10);
 VAR_11 = VAR_12->tgt_mask_reg;
 VAR_8->tgt_mask_reg = FUNC_2(VAR_13, VAR_11);
 VAR_8->isr_int_vec = FUNC_2(VAR_13, VAR_2);
 VAR_8->crb_int_state_reg = FUNC_2(VAR_13, VAR_1);
 FUNC_0(&VAR_14->dev, "using legacy interrupts\n");
 VAR_8->msix_entries[0].vector = VAR_14->irq;
 return VAR_9;
}
