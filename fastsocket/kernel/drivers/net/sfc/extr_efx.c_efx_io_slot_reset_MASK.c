
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct efx_nic {int net_dev; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 struct efx_nic* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_4(struct pci_dev *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_3(VAR_3);
 pci_ers_result_t VAR_5 = VAR_1;
 int VAR_6;

 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_4, VAR_2, VAR_4->net_dev,
     "Cannot re-enable PCI device after reset.\n");
  VAR_5 = VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_4, VAR_2, VAR_4->net_dev,
  "pci_cleanup_aer_uncorrect_error_status failed (%d)\n", VAR_6);

 }

 return VAR_5;
}
