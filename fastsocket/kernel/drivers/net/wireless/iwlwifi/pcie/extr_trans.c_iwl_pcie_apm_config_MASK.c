
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_trans_pcie {int pci_dev; } ;
struct iwl_trans {int pm_support; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_5)
{
 struct iwl_trans_pcie *VAR_6 = FUNC_0(VAR_5);
 u16 VAR_7;
 FUNC_4(VAR_6->pci_dev, VAR_2, &VAR_7);
 if (VAR_7 & VAR_4) {

  FUNC_3(VAR_5, VAR_0, VAR_1);
  FUNC_1(VAR_5->dev, "L1 Enabled; Disabling L0S\n");
 } else {

  FUNC_2(VAR_5, VAR_0, VAR_1);
  FUNC_1(VAR_5->dev, "L1 Disabled; Enabling L0S\n");
 }
 VAR_5->pm_support = !(VAR_7 & VAR_3);
}
