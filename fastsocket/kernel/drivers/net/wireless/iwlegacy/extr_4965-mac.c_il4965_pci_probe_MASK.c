
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct TYPE_5__ {int firmware_loading_complete; } ;
struct il_priv {unsigned long long hw_base; struct ieee80211_hw* hw; struct pci_dev* pci_dev; int * workqueue; TYPE_2__ _4965; int status; int lock; TYPE_1__* addresses; int hw_ready; int hw_rev; struct il_cfg* cfg; int reg_lock; int inta_mask; int * debugfs_ops; int * ops; } ;
struct il_cfg {int name; } ;
struct ieee80211_hw {TYPE_3__* wiphy; struct il_priv* priv; } ;
struct TYPE_6__ {int n_addresses; TYPE_1__* addresses; } ;
struct TYPE_4__ {unsigned long long addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (struct ieee80211_hw*,int *) ;
 int VAR_16 ;
 int FUNC_6 (struct il_priv*,int ) ;
 int FUNC_7 (struct il_priv*,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct il_priv*) ;
 struct ieee80211_hw* FUNC_11 (int,int *) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int VAR_17 ;
 int FUNC_13 (struct il_priv*) ;
 int FUNC_14 (struct il_priv*,unsigned long long) ;
 int FUNC_15 (struct il_priv*) ;
 int FUNC_16 (struct il_priv*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_17 (struct il_priv*) ;
 int FUNC_18 (struct il_priv*,int) ;
 int FUNC_19 (struct il_priv*) ;
 int FUNC_20 (struct il_priv*) ;
 int FUNC_21 (struct il_priv*) ;
 int FUNC_22 (struct il_priv*) ;
 int FUNC_23 (struct il_priv*) ;
 int FUNC_24 (struct il_priv*) ;
 int FUNC_25 (struct il_priv*) ;
 int FUNC_26 (struct il_priv*) ;
 int VAR_20 ;
 int FUNC_27 (struct il_priv*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (unsigned long long) ;
 int FUNC_30 (struct pci_dev*) ;
 int FUNC_31 (struct pci_dev*,int) ;
 int FUNC_32 (struct pci_dev*) ;
 scalar_t__ FUNC_33 (struct pci_dev*) ;
 int FUNC_34 (struct pci_dev*) ;
 unsigned long long FUNC_35 (struct pci_dev*,int ) ;
 int FUNC_36 (struct pci_dev*,int ,int*) ;
 int FUNC_37 (struct pci_dev*) ;
 int FUNC_38 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_39 (struct pci_dev*,int ) ;
 int FUNC_40 (struct pci_dev*,int ) ;
 int FUNC_41 (struct pci_dev*,int ) ;
 int FUNC_42 (struct pci_dev*,struct il_priv*) ;
 int FUNC_43 (struct pci_dev*) ;
 int FUNC_44 (struct pci_dev*,int ,int) ;
 int FUNC_45 (struct pci_dev*,int ,int) ;
 int FUNC_46 (int ,int ,int ,int ,struct il_priv*) ;
 int FUNC_47 (int ,int *) ;
 int FUNC_48 (int *) ;
 int FUNC_49 (int *,unsigned long) ;
 int FUNC_50 (int *,unsigned long) ;
 int FUNC_51 (int ,int *) ;
 int FUNC_52 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_53(struct pci_dev *VAR_21, const struct pci_device_id *VAR_22)
{
 int VAR_23 = 0;
 struct il_priv *VAR_24;
 struct ieee80211_hw *VAR_25;
 struct il_cfg *VAR_26 = (struct il_cfg *)(VAR_22->driver_data);
 unsigned long VAR_27;
 u16 VAR_28;





 VAR_25 = FUNC_11(sizeof(struct il_priv), &VAR_18);
 if (!VAR_25) {
  VAR_23 = -VAR_8;
  goto out;
 }
 VAR_24 = VAR_25->priv;
 VAR_24->hw = VAR_25;
 FUNC_5(VAR_25, &VAR_21->dev);

 FUNC_1("*** LOAD DRIVER ***\n");
 VAR_24->cfg = VAR_26;
 VAR_24->ops = &VAR_19;



 VAR_24->pci_dev = VAR_21;
 VAR_24->inta_mask = VAR_2;




 FUNC_31(VAR_21,
          VAR_11 | VAR_12 |
          VAR_10);

 if (FUNC_33(VAR_21)) {
  VAR_23 = -VAR_7;
  goto out_ieee80211_free_hw;
 }

 FUNC_43(VAR_21);

 VAR_23 = FUNC_41(VAR_21, FUNC_0(36));
 if (!VAR_23)
  VAR_23 = FUNC_40(VAR_21, FUNC_0(36));
 if (VAR_23) {
  VAR_23 = FUNC_41(VAR_21, FUNC_0(32));
  if (!VAR_23)
   VAR_23 =
       FUNC_40(VAR_21, FUNC_0(32));

  if (VAR_23) {
   FUNC_4("No suitable DMA available.\n");
   goto out_pci_disable_device;
  }
 }

 VAR_23 = FUNC_38(VAR_21, VAR_5);
 if (VAR_23)
  goto out_pci_disable_device;

 FUNC_42(VAR_21, VAR_24);




 VAR_24->hw_base = FUNC_35(VAR_21, 0);
 if (!VAR_24->hw_base) {
  VAR_23 = -VAR_7;
  goto out_pci_release_regions;
 }

 FUNC_1("pci_resource_len = 0x%08llx\n",
        (unsigned long long)FUNC_39(VAR_21, 0));
 FUNC_1("pci_resource_base = %p\n", VAR_24->hw_base);




 FUNC_48(&VAR_24->reg_lock);
 FUNC_48(&VAR_24->lock);






 FUNC_7(VAR_24, VAR_3, VAR_4);

 FUNC_15(VAR_24);
 FUNC_3("Detected %s, REV=0x%X\n", VAR_24->cfg->name, VAR_24->hw_rev);



 FUNC_44(VAR_21, VAR_13, 0x00);

 FUNC_17(VAR_24);
 if (!VAR_24->hw_ready) {
  FUNC_4("Failed, HW not ready\n");
  VAR_23 = -VAR_6;
  goto out_iounmap;
 }





 VAR_23 = FUNC_25(VAR_24);
 if (VAR_23) {
  FUNC_2("Unable to init EEPROM\n");
  goto out_iounmap;
 }
 VAR_23 = FUNC_13(VAR_24);
 if (VAR_23)
  goto out_free_eeprom;


 FUNC_14(VAR_24, VAR_24->addresses[0].addr);
 FUNC_1("MAC address: %pM\n", VAR_24->addresses[0].addr);
 VAR_24->hw->wiphy->addresses = VAR_24->addresses;
 VAR_24->hw->wiphy->n_addresses = 1;




 FUNC_19(VAR_24);





 VAR_23 = FUNC_16(VAR_24);
 if (VAR_23)
  goto out_free_eeprom;





 FUNC_49(&VAR_24->lock, VAR_27);
 FUNC_23(VAR_24);
 FUNC_50(&VAR_24->lock, VAR_27);

 FUNC_34(VAR_24->pci_dev);

 VAR_23 = FUNC_46(VAR_24->pci_dev->irq, VAR_20, VAR_9, VAR_5, VAR_24);
 if (VAR_23) {
  FUNC_2("Error allocating IRQ %d\n", VAR_24->pci_dev->irq);
  goto out_disable_msi;
 }

 FUNC_20(VAR_24);
 FUNC_21(VAR_24);






 FUNC_36(VAR_24->pci_dev, VAR_14, &VAR_28);
 if (VAR_28 & VAR_15) {
  VAR_28 &= ~VAR_15;
  FUNC_45(VAR_24->pci_dev, VAR_14, VAR_28);
 }

 FUNC_26(VAR_24);


 if (FUNC_6(VAR_24, VAR_0) & VAR_1)
  FUNC_8(VAR_16, &VAR_24->status);
 else
  FUNC_47(VAR_16, &VAR_24->status);

 FUNC_52(VAR_24->hw->wiphy,
      FUNC_51(VAR_16, &VAR_24->status));

 FUNC_27(VAR_24);

 FUNC_28(&VAR_24->_4965.firmware_loading_complete);

 VAR_23 = FUNC_18(VAR_24, 1);
 if (VAR_23)
  goto out_destroy_workqueue;

 return 0;

out_destroy_workqueue:
 FUNC_9(VAR_24->workqueue);
 VAR_24->workqueue = ((void*)0);
 FUNC_10(VAR_24->pci_dev->irq, VAR_24);
out_disable_msi:
 FUNC_32(VAR_24->pci_dev);
 FUNC_22(VAR_24);
out_free_eeprom:
 FUNC_24(VAR_24);
out_iounmap:
 FUNC_29(VAR_24->hw_base);
out_pci_release_regions:
 FUNC_42(VAR_21, ((void*)0));
 FUNC_37(VAR_21);
out_pci_disable_device:
 FUNC_30(VAR_21);
out_ieee80211_free_hw:
 FUNC_12(VAR_24->hw);
out:
 return VAR_23;
}
