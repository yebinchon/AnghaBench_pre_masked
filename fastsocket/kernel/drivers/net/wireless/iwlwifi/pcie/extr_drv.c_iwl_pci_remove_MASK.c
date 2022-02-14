
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct iwl_trans_pcie {int drv; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_trans*) ;
 struct iwl_trans* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct iwl_trans *VAR_1 = FUNC_3(VAR_0);
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->drv);
 FUNC_2(VAR_1);

 FUNC_4(VAR_0, ((void*)0));
}
