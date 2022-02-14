
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dummy; } ;
struct iwl_trans_pcie {int drv; } ;
struct iwl_trans {int dbgfs_dir; } ;
struct iwl_cfg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_cfg const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 struct iwl_trans* FUNC_6 (struct pci_dev*,struct pci_device_id const*,struct iwl_cfg const*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct pci_dev*,struct iwl_trans*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 const struct iwl_cfg *VAR_3 = (struct iwl_cfg *)(VAR_2->driver_data);
 struct iwl_trans *VAR_4;
 struct iwl_trans_pcie *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_8(VAR_1, VAR_4);

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->drv = FUNC_3(VAR_4, VAR_3);

 if (FUNC_0(VAR_5->drv)) {
  VAR_6 = FUNC_2(VAR_5->drv);
  goto out_free_trans;
 }


 VAR_6 = FUNC_5(VAR_4, VAR_4->dbgfs_dir);
 if (VAR_6)
  goto out_free_drv;

 return 0;

out_free_drv:
 FUNC_4(VAR_5->drv);
out_free_trans:
 FUNC_7(VAR_4);
 FUNC_8(VAR_1, ((void*)0));
 return VAR_6;
}
