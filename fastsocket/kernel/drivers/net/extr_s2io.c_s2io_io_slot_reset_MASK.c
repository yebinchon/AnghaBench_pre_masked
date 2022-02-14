
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 struct net_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct s2io_nic*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_2);
 struct s2io_nic *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_2)) {
  FUNC_4("Cannot re-enable PCI device after reset.\n");
  return VAR_0;
 }

 FUNC_3(VAR_2);
 FUNC_5(VAR_4);

 return VAR_1;
}
