
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ class_mask; scalar_t__ subvendor; scalar_t__ vendor; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct pci_device_id const*,struct pci_dev*) ;

const struct pci_device_id *FUNC_1(const struct pci_device_id *VAR_0,
      struct pci_dev *VAR_1)
{
 if (VAR_0) {
  while (VAR_0->vendor || VAR_0->subvendor || VAR_0->class_mask) {
   if (FUNC_0(VAR_0, VAR_1))
    return VAR_0;
   VAR_0++;
  }
 }
 return ((void*)0);
}
