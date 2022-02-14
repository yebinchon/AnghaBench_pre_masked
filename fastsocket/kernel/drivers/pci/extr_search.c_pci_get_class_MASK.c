
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {unsigned int class; int class_mask; int subdevice; int subvendor; int device; int vendor; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct pci_dev* FUNC_0 (struct pci_device_id*,struct pci_dev*) ;

struct pci_dev *FUNC_1(unsigned int VAR_1, struct pci_dev *VAR_2)
{
 struct pci_device_id VAR_3 = {
  .vendor = VAR_0,
  .device = VAR_0,
  .subvendor = VAR_0,
  .subdevice = VAR_0,
  .class_mask = VAR_0,
  .class = VAR_1,
 };

 return FUNC_0(&VAR_3, VAR_2);
}
