
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct TYPE_11__ {int kobj; } ;
struct pci_dev {int irq; TYPE_6__ dev; } ;
struct TYPE_8__ {int rfkill_poll; } ;
struct il_priv {unsigned long long hw_base; struct ieee80211_hw* hw; struct pci_dev* pci_dev; int * workqueue; TYPE_2__ _3945; TYPE_1__* bands; int lock; struct il_cfg* cfg; scalar_t__ eeprom; int reg_lock; int inta_mask; int * debugfs_ops; int * ops; int cmd_queue; } ;
struct il_cfg {int name; } ;
struct il3945_eeprom {unsigned long long mac_address; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct TYPE_10__ {int * hw_scan; } ;
struct TYPE_9__ {scalar_t__ disable_hw_scan; } ;
struct TYPE_7__ {int * channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_6__*) ;
 int FUNC_6 (struct ieee80211_hw*,unsigned long long) ;
 int FUNC_7 (struct il_priv*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,struct il_priv*) ;
 struct ieee80211_hw* FUNC_10 (int,TYPE_4__*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;
 TYPE_4__ VAR_15 ;
 TYPE_3__ VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (struct il_priv*) ;
 int FUNC_15 (struct il_priv*) ;
 int FUNC_16 (struct il_priv*) ;
 int FUNC_17 (struct il_priv*) ;
 int FUNC_18 (struct il_priv*,int ) ;
 int FUNC_19 (struct il_priv*) ;
 int FUNC_20 (struct il_priv*) ;
 int FUNC_21 (struct il_priv*) ;
 int FUNC_22 (struct il_priv*) ;
 int FUNC_23 (struct il_priv*) ;
 int FUNC_24 (struct il_priv*) ;
 int VAR_18 ;
 int FUNC_25 (struct il_priv*) ;
 int FUNC_26 (struct il_priv*,int *) ;
 int FUNC_27 (unsigned long long) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int) ;
 int FUNC_30 (struct pci_dev*) ;
 scalar_t__ FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*) ;
 unsigned long long FUNC_33 (struct pci_dev*,int ) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_36 (struct pci_dev*,int ) ;
 int FUNC_37 (struct pci_dev*,int ) ;
 int FUNC_38 (struct pci_dev*,int ) ;
 int FUNC_39 (struct pci_dev*,struct il_priv*) ;
 int FUNC_40 (struct pci_dev*) ;
 int FUNC_41 (struct pci_dev*,int,int) ;
 int FUNC_42 (int *,int *,int) ;
 int FUNC_43 (int,int ,int ,int ,struct il_priv*) ;
 int FUNC_44 (int *) ;
 int FUNC_45 (int *,unsigned long) ;
 int FUNC_46 (int *,unsigned long) ;
 int FUNC_47 (int *,int *) ;
 int FUNC_48 (int *,int *) ;

__attribute__((used)) static int
FUNC_49(struct pci_dev *VAR_19, const struct pci_device_id *VAR_20)
{
 int VAR_21 = 0;
 struct il_priv *VAR_22;
 struct ieee80211_hw *VAR_23;
 struct il_cfg *VAR_24 = (struct il_cfg *)(VAR_20->driver_data);
 struct il3945_eeprom *VAR_25;
 unsigned long VAR_26;





 VAR_23 = FUNC_10(sizeof(struct il_priv), &VAR_15);
 if (!VAR_23) {
  VAR_21 = -VAR_5;
  goto out;
 }
 VAR_22 = VAR_23->priv;
 VAR_22->hw = VAR_23;
 FUNC_5(VAR_23, &VAR_19->dev);

 VAR_22->cmd_queue = VAR_8;





 if (VAR_16.disable_hw_scan) {
  FUNC_1("Disabling hw_scan\n");
  VAR_15.hw_scan = ((void*)0);
 }

 FUNC_1("*** LOAD DRIVER ***\n");
 VAR_22->cfg = VAR_24;
 VAR_22->ops = &VAR_17;



 VAR_22->pci_dev = VAR_19;
 VAR_22->inta_mask = VAR_0;




 FUNC_29(VAR_19,
          VAR_11 | VAR_12 |
          VAR_10);

 if (FUNC_31(VAR_19)) {
  VAR_21 = -VAR_4;
  goto out_ieee80211_free_hw;
 }

 FUNC_40(VAR_19);

 VAR_21 = FUNC_38(VAR_19, FUNC_0(32));
 if (!VAR_21)
  VAR_21 = FUNC_37(VAR_19, FUNC_0(32));
 if (VAR_21) {
  FUNC_4("No suitable DMA available.\n");
  goto out_pci_disable_device;
 }

 FUNC_39(VAR_19, VAR_22);
 VAR_21 = FUNC_35(VAR_19, VAR_3);
 if (VAR_21)
  goto out_pci_disable_device;




 VAR_22->hw_base = FUNC_33(VAR_19, 0);
 if (!VAR_22->hw_base) {
  VAR_21 = -VAR_4;
  goto out_pci_release_regions;
 }

 FUNC_1("pci_resource_len = 0x%08llx\n",
        (unsigned long long)FUNC_36(VAR_19, 0));
 FUNC_1("pci_resource_base = %p\n", VAR_22->hw_base);



 FUNC_41(VAR_19, 0x41, 0x00);




 FUNC_44(&VAR_22->reg_lock);
 FUNC_44(&VAR_22->lock);






 FUNC_7(VAR_22, VAR_1, VAR_2);






 VAR_21 = FUNC_21(VAR_22);
 if (VAR_21) {
  FUNC_2("Unable to init EEPROM\n");
  goto out_iounmap;
 }

 VAR_25 = (struct il3945_eeprom *)VAR_22->eeprom;
 FUNC_1("MAC address: %pM\n", VAR_25->mac_address);
 FUNC_6(VAR_22->hw, VAR_25->mac_address);





 if (FUNC_12(VAR_22)) {
  FUNC_2("failed to set hw settings\n");
  goto out_eeprom_free;
 }





 VAR_21 = FUNC_13(VAR_22);
 if (VAR_21) {
  FUNC_2("initializing driver failed\n");
  goto out_unset_hw_params;
 }

 FUNC_3("Detected Intel Wireless WiFi Link %s\n", VAR_22->cfg->name);





 FUNC_45(&VAR_22->lock, VAR_26);
 FUNC_19(VAR_22);
 FUNC_46(&VAR_22->lock, VAR_26);

 FUNC_32(VAR_22->pci_dev);

 VAR_21 = FUNC_43(VAR_22->pci_dev->irq, VAR_18, VAR_9, VAR_3, VAR_22);
 if (VAR_21) {
  FUNC_2("Error allocating IRQ %d\n", VAR_22->pci_dev->irq);
  goto out_disable_msi;
 }

 VAR_21 = FUNC_47(&VAR_19->dev.kobj, &VAR_13);
 if (VAR_21) {
  FUNC_2("failed to create sysfs device attributes\n");
  goto out_release_irq;
 }

 FUNC_26(VAR_22, &VAR_22->bands[VAR_7].channels[5]);
 FUNC_14(VAR_22);
 FUNC_15(VAR_22);
 FUNC_25(VAR_22);





 FUNC_22(VAR_22);

 VAR_21 = FUNC_16(VAR_22);
 if (VAR_21)
  goto out_remove_sysfs;

 VAR_21 = FUNC_18(VAR_22, VAR_3);
 if (VAR_21)
  FUNC_2("failed to create debugfs files. Ignoring error: %d\n",
         VAR_21);


 FUNC_42(VAR_22->workqueue, &VAR_22->_3945.rfkill_poll, 2 * VAR_6);

 return 0;

out_remove_sysfs:
 FUNC_8(VAR_22->workqueue);
 VAR_22->workqueue = ((void*)0);
 FUNC_48(&VAR_19->dev.kobj, &VAR_13);
out_release_irq:
 FUNC_9(VAR_22->pci_dev->irq, VAR_22);
out_disable_msi:
 FUNC_30(VAR_22->pci_dev);
 FUNC_24(VAR_22);
 FUNC_23(VAR_22);
out_unset_hw_params:
 FUNC_17(VAR_22);
out_eeprom_free:
 FUNC_20(VAR_22);
out_iounmap:
 FUNC_27(VAR_22->hw_base);
out_pci_release_regions:
 FUNC_34(VAR_19);
out_pci_disable_device:
 FUNC_39(VAR_19, ((void*)0));
 FUNC_28(VAR_19);
out_ieee80211_free_hw:
 FUNC_11(VAR_22->hw);
out:
 return VAR_21;
}
