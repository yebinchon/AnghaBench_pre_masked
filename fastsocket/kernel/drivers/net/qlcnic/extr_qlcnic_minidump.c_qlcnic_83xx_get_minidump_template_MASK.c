
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_fw_dump {int * tmpl_hdr; } ;
struct qlcnic_hardware_context {struct qlcnic_fw_dump fw_dump; } ;
struct qlcnic_adapter {scalar_t__ fw_version; struct pci_dev* pdev; struct qlcnic_hardware_context* ahw; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct qlcnic_adapter *VAR_0)
{
 u32 VAR_1, VAR_2;
 struct qlcnic_hardware_context *VAR_3 = VAR_0->ahw;
 struct qlcnic_fw_dump *VAR_4 = &VAR_3->fw_dump;
 struct pci_dev *VAR_5 = VAR_0->pdev;

 VAR_1 = VAR_0->fw_version;
 VAR_2 = FUNC_1(VAR_0);

 if (VAR_4->tmpl_hdr == ((void*)0) || VAR_2 > VAR_1) {
  if (VAR_4->tmpl_hdr)
   FUNC_3(VAR_4->tmpl_hdr);
  if (!FUNC_2(VAR_0))
   FUNC_0(&VAR_5->dev, "Supports FW dump capability\n");
 }
}
