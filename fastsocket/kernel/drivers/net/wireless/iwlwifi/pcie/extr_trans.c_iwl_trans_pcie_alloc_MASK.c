
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int device; int subsystem_device; int irq; int dev; } ;
struct iwl_trans_pcie {int inta_mask; int wait_command_queue; struct pci_dev* pci_dev; int hw_base; int ucode_write_waitq; int reg_lock; int irq_lock; struct iwl_trans* trans; } ;
struct iwl_trans {int hw_id; int dev_cmd_pool; scalar_t__ dev_cmd_headroom; int dev_cmd_pool_name; int * dev; int hw_id_str; int hw_rev; struct iwl_cfg const* cfg; int * ops; } ;
struct iwl_device_cmd {int dummy; } ;
struct iwl_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*,char*,int ) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,...) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (int ,scalar_t__,int,int ,int *) ;
 int FUNC_11 (int ) ;
 struct iwl_trans* FUNC_12 (int,int ) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int) ;
 int FUNC_15 (struct pci_dev*) ;
 scalar_t__ FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*,int ,int*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*,int ) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*,int ,int) ;
 int FUNC_26 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_27 (int ,int ,int ,int ,int ,struct iwl_trans*) ;
 int FUNC_28 (int ,int,char*,...) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct iwl_trans*) ;
 int VAR_15 ;

struct iwl_trans *FUNC_31(struct pci_dev *VAR_16,
           const struct pci_device_id *VAR_17,
           const struct iwl_cfg *VAR_18)
{
 struct iwl_trans_pcie *VAR_19;
 struct iwl_trans *VAR_20;
 u16 VAR_21;
 int VAR_22;

 VAR_20 = FUNC_12(sizeof(struct iwl_trans) +
   sizeof(struct iwl_trans_pcie), VAR_4);

 if (!VAR_20)
  return ((void*)0);

 VAR_19 = FUNC_2(VAR_20);

 VAR_20->ops = &VAR_15;
 VAR_20->cfg = VAR_18;
 FUNC_30(VAR_20);
 VAR_19->trans = VAR_20;
 FUNC_29(&VAR_19->irq_lock);
 FUNC_29(&VAR_19->reg_lock);
 FUNC_5(&VAR_19->ucode_write_waitq);

 if (FUNC_16(VAR_16)) {
  VAR_22 = -VAR_3;
  goto out_no_pci;
 }



 FUNC_14(VAR_16, VAR_7 | VAR_8 |
          VAR_6);

 FUNC_24(VAR_16);

 VAR_22 = FUNC_23(VAR_16, FUNC_0(36));
 if (!VAR_22)
  VAR_22 = FUNC_22(VAR_16, FUNC_0(36));
 if (VAR_22) {
  VAR_22 = FUNC_23(VAR_16, FUNC_0(32));
  if (!VAR_22)
   VAR_22 = FUNC_22(VAR_16,
         FUNC_0(32));

  if (VAR_22) {
   FUNC_3(&VAR_16->dev, "No suitable DMA available\n");
   goto out_pci_disable_device;
  }
 }

 VAR_22 = FUNC_21(VAR_16, VAR_2);
 if (VAR_22) {
  FUNC_3(&VAR_16->dev, "pci_request_regions failed\n");
  goto out_pci_disable_device;
 }

 VAR_19->hw_base = FUNC_18(VAR_16, 0);
 if (!VAR_19->hw_base) {
  FUNC_3(&VAR_16->dev, "pci_ioremap_bar failed\n");
  VAR_22 = -VAR_3;
  goto out_pci_release_regions;
 }



 FUNC_25(VAR_16, VAR_9, 0x00);

 VAR_22 = FUNC_17(VAR_16);
 if (VAR_22) {
  FUNC_3(&VAR_16->dev, "pci_enable_msi failed(0X%x)\n", VAR_22);

  FUNC_19(VAR_16, VAR_10, &VAR_21);
  if (VAR_21 & VAR_11) {
   VAR_21 &= ~VAR_11;
   FUNC_26(VAR_16, VAR_10, VAR_21);
  }
 }

 VAR_20->dev = &VAR_16->dev;
 VAR_19->pci_dev = VAR_16;
 VAR_20->hw_rev = FUNC_8(VAR_20, VAR_0);
 VAR_20->hw_id = (VAR_16->device << 16) + VAR_16->subsystem_device;
 FUNC_28(VAR_20->hw_id_str, sizeof(VAR_20->hw_id_str),
   "PCI ID: 0x%04X:0x%04X", VAR_16->device, VAR_16->subsystem_device);


 FUNC_5(&VAR_19->wait_command_queue);

 FUNC_28(VAR_20->dev_cmd_pool_name, sizeof(VAR_20->dev_cmd_pool_name),
   "iwl_cmd_pool:%s", FUNC_4(VAR_20->dev));

 VAR_20->dev_cmd_headroom = 0;
 VAR_20->dev_cmd_pool =
  FUNC_10(VAR_20->dev_cmd_pool_name,
      sizeof(struct iwl_device_cmd)
      + VAR_20->dev_cmd_headroom,
      sizeof(void *),
      VAR_12,
      ((void*)0));

 if (!VAR_20->dev_cmd_pool)
  goto out_pci_disable_msi;

 VAR_19->inta_mask = VAR_1;

 if (FUNC_6(VAR_20))
  goto out_free_cmd_pool;

 if (FUNC_27(VAR_16->irq, VAR_14,
     VAR_13,
     VAR_5, VAR_2, VAR_20)) {
  FUNC_1(VAR_20, "Error allocating IRQ %d\n", VAR_16->irq);
  goto out_free_ict;
 }

 return VAR_20;

out_free_ict:
 FUNC_7(VAR_20);
out_free_cmd_pool:
 FUNC_11(VAR_20->dev_cmd_pool);
out_pci_disable_msi:
 FUNC_15(VAR_16);
out_pci_release_regions:
 FUNC_20(VAR_16);
out_pci_disable_device:
 FUNC_13(VAR_16);
out_no_pci:
 FUNC_9(VAR_20);
 return ((void*)0);
}
