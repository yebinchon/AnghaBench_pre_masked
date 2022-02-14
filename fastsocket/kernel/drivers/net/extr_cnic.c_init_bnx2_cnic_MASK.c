
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ device; } ;
struct net_device {int dummy; } ;
struct cnic_local {int close_conn; int disable_int_sync; int enable_int; int stop_cm; int start_cm; int free_resc; int alloc_resc; int setup_pgtbl; int stop_hw; int start_hw; int * cnic_ops; int chip_id; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int max_iscsi_conn; int chip_id; struct pci_dev* pdev; } ;
struct cnic_dev {int max_iscsi_conn; struct pci_dev* pcidev; struct cnic_local* cnic_priv; int submit_kwqes; int flags; } ;
struct bnx2 {struct cnic_eth_dev* (* cnic_probe ) (struct net_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cnic_dev* FUNC_0 (struct net_device*,struct pci_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct bnx2* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int FUNC_7 (int ,int *) ;
 struct cnic_eth_dev* FUNC_8 (struct net_device*) ;

__attribute__((used)) static struct cnic_dev *FUNC_9(struct net_device *VAR_16)
{
 struct pci_dev *VAR_17;
 struct cnic_dev *VAR_18;
 struct cnic_local *VAR_19;
 struct bnx2 *VAR_20 = FUNC_3(VAR_16);
 struct cnic_eth_dev *VAR_21 = ((void*)0);

 if (VAR_20->cnic_probe)
  VAR_21 = (VAR_20->cnic_probe)(VAR_16);

 if (!VAR_21)
  return ((void*)0);

 VAR_17 = VAR_21->pdev;
 if (!VAR_17)
  return ((void*)0);

 FUNC_1(VAR_16);
 FUNC_4(VAR_17);
 if (VAR_17->device == VAR_1 ||
     VAR_17->device == VAR_2) {
  u8 VAR_22;

  FUNC_6(VAR_17, VAR_3, &VAR_22);
  if (VAR_22 < 0x10) {
   FUNC_5(VAR_17);
   goto cnic_err;
  }
 }
 FUNC_5(VAR_17);

 VAR_18 = FUNC_0(VAR_16, VAR_17);
 if (VAR_18 == ((void*)0))
  goto cnic_err;

 FUNC_7(VAR_0, &VAR_18->flags);
 VAR_18->submit_kwqes = VAR_15;

 VAR_19 = VAR_18->cnic_priv;
 VAR_19->ethdev = VAR_21;
 VAR_18->pcidev = VAR_17;
 VAR_19->chip_id = VAR_21->chip_id;

 VAR_18->max_iscsi_conn = VAR_21->max_iscsi_conn;

 VAR_19->cnic_ops = &VAR_5;
 VAR_19->start_hw = VAR_13;
 VAR_19->stop_hw = VAR_14;
 VAR_19->setup_pgtbl = VAR_12;
 VAR_19->alloc_resc = VAR_4;
 VAR_19->free_resc = VAR_11;
 VAR_19->start_cm = VAR_7;
 VAR_19->stop_cm = VAR_8;
 VAR_19->enable_int = VAR_10;
 VAR_19->disable_int_sync = VAR_9;
 VAR_19->close_conn = VAR_6;
 return VAR_18;

cnic_err:
 FUNC_2(VAR_16);
 return ((void*)0);
}
