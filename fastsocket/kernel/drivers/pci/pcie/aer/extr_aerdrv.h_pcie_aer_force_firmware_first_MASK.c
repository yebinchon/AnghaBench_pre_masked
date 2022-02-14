
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev_rh1 {int __aer_firmware_first_valid; } ;
struct pci_dev {int aer_firmware_first; struct pci_dev_rh1* rh_reserved1; } ;



__attribute__((used)) static inline void FUNC_0(struct pci_dev *VAR_0,
       int VAR_1)
{
 struct pci_dev_rh1 *VAR_2 = VAR_0->rh_reserved1;

 VAR_0->aer_firmware_first = !!VAR_1;
 if (VAR_2)
  VAR_2->__aer_firmware_first_valid = 1;
}
