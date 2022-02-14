
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int irq; int dev; } ;
struct netxen_legacy_intr_set {int pci_int_reg; int tgt_mask_reg; int tgt_status_reg; int int_vec_bit; } ;
struct TYPE_3__ {scalar_t__ revision_id; size_t pci_func; } ;
struct netxen_adapter {int max_sds_rings; int flags; TYPE_2__* msix_entries; TYPE_1__ ahw; void* tgt_status_reg; scalar_t__ rss_supported; scalar_t__ msix_supported; void* crb_int_state_reg; void* isr_int_vec; void* pci_int_reg; void* tgt_mask_reg; int int_vec_bit; struct pci_dev* pdev; } ;
struct TYPE_4__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct netxen_legacy_intr_set* VAR_8 ;
 int * VAR_9 ;
 void* FUNC_1 (struct netxen_adapter*,int ) ;
 int FUNC_2 (struct netxen_adapter*,int) ;
 int FUNC_3 (struct pci_dev*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,TYPE_2__*,int) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_8(struct netxen_adapter *VAR_11)
{
 struct netxen_legacy_intr_set *VAR_12;
 struct pci_dev *VAR_13 = VAR_11->pdev;
 int VAR_14, VAR_15;

 if (VAR_11->rss_supported) {
  VAR_15 = (FUNC_4() >= VAR_3) ?
   VAR_3 : 2;
 } else
  VAR_15 = 1;

 VAR_11->max_sds_rings = 1;

 VAR_11->flags &= ~(VAR_5 | VAR_4);

 if (VAR_11->ahw.revision_id >= VAR_6)
  VAR_12 = &VAR_8[VAR_11->ahw.pci_func];
 else
  VAR_12 = &VAR_8[0];

 VAR_11->int_vec_bit = VAR_12->int_vec_bit;
 VAR_11->tgt_status_reg = FUNC_1(VAR_11,
   VAR_12->tgt_status_reg);
 VAR_11->tgt_mask_reg = FUNC_1(VAR_11,
   VAR_12->tgt_mask_reg);
 VAR_11->pci_int_reg = FUNC_1(VAR_11,
   VAR_12->pci_int_reg);
 VAR_11->isr_int_vec = FUNC_1(VAR_11, VAR_2);

 if (VAR_11->ahw.revision_id >= VAR_7)
  VAR_11->crb_int_state_reg = FUNC_1(VAR_11,
   VAR_1);
 else
  VAR_11->crb_int_state_reg = FUNC_1(VAR_11,
   VAR_0);

 FUNC_3(VAR_13, 0);

 if (VAR_11->msix_supported) {

  FUNC_2(VAR_11, VAR_15);
  VAR_14 = FUNC_7(VAR_13, VAR_11->msix_entries, VAR_15);
  if (VAR_14 == 0) {
   VAR_11->flags |= VAR_4;
   FUNC_3(VAR_13, 1);

   if (VAR_11->rss_supported)
    VAR_11->max_sds_rings = VAR_15;

   FUNC_0(&VAR_13->dev, "using msi-x interrupts\n");
   return;
  }

  if (VAR_14 > 0)
   FUNC_5(VAR_13);


 }

 if (VAR_10 && !FUNC_6(VAR_13)) {
  VAR_11->flags |= VAR_5;
  VAR_11->tgt_status_reg = FUNC_1(VAR_11,
    VAR_9[VAR_11->ahw.pci_func]);
  FUNC_0(&VAR_13->dev, "using msi interrupts\n");
  VAR_11->msix_entries[0].vector = VAR_13->irq;
  return;
 }

 FUNC_0(&VAR_13->dev, "using legacy interrupts\n");
 VAR_11->msix_entries[0].vector = VAR_13->irq;
}
