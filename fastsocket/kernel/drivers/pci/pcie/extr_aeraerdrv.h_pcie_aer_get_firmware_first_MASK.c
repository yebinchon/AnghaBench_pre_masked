
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev_rh1 {scalar_t__ __aer_firmware_first_valid; } ;
struct pci_dev {int aer_firmware_first; struct pci_dev_rh1* rh_reserved1; } ;



__attribute__((used)) static inline int FUNC_0(struct pci_dev *VAR_0)
{
 struct pci_dev_rh1 *VAR_1 = VAR_0->rh_reserved1;

 if (VAR_1 && VAR_1->__aer_firmware_first_valid)
  return VAR_0->aer_firmware_first;
 return 0;
}
