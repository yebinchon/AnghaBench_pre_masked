
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ subordinate; int dev; } ;
struct hpp_type2 {int revision; int unc_err_mask_and; int unc_err_mask_or; int unc_err_sever_and; int unc_err_sever_or; int cor_err_mask_and; int cor_err_mask_or; int adv_err_cap_and; int adv_err_cap_or; int pci_exp_lnkctl_or; int pci_exp_lnkctl_and; int pci_exp_devctl_or; int pci_exp_devctl_and; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_7, struct hpp_type2 *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 if (!VAR_8)
  return;

 if (VAR_8->revision > 1) {
  FUNC_0(&VAR_7->dev, "PCIe settings rev %d not supported\n",
    VAR_8->revision);
  return;
 }


 FUNC_4(VAR_7, VAR_4,
   ~VAR_8->pci_exp_devctl_and, VAR_8->pci_exp_devctl_or);


 if (VAR_7->subordinate)
  FUNC_4(VAR_7, VAR_5,
   ~VAR_8->pci_exp_lnkctl_and, VAR_8->pci_exp_lnkctl_or);


 VAR_9 = FUNC_1(VAR_7, VAR_6);
 if (!VAR_9)
  return;


 FUNC_2(VAR_7, VAR_9 + VAR_2, &VAR_10);
 VAR_10 = (VAR_10 & VAR_8->unc_err_mask_and) | VAR_8->unc_err_mask_or;
 FUNC_3(VAR_7, VAR_9 + VAR_2, VAR_10);


 FUNC_2(VAR_7, VAR_9 + VAR_3, &VAR_10);
 VAR_10 = (VAR_10 & VAR_8->unc_err_sever_and) | VAR_8->unc_err_sever_or;
 FUNC_3(VAR_7, VAR_9 + VAR_3, VAR_10);


 FUNC_2(VAR_7, VAR_9 + VAR_1, &VAR_10);
 VAR_10 = (VAR_10 & VAR_8->cor_err_mask_and) | VAR_8->cor_err_mask_or;
 FUNC_3(VAR_7, VAR_9 + VAR_1, VAR_10);


 FUNC_2(VAR_7, VAR_9 + VAR_0, &VAR_10);
 VAR_10 = (VAR_10 & VAR_8->adv_err_cap_and) | VAR_8->adv_err_cap_or;
 FUNC_3(VAR_7, VAR_9 + VAR_0, VAR_10);







}
