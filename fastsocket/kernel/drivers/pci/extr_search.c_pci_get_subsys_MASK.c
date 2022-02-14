
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {unsigned int vendor; unsigned int device; unsigned int subvendor; unsigned int subdevice; } ;
struct pci_dev {int dummy; } ;


 struct pci_dev* FUNC_0 (struct pci_device_id*,struct pci_dev*) ;

struct pci_dev *FUNC_1(unsigned int VAR_0, unsigned int VAR_1,
          unsigned int VAR_2, unsigned int VAR_3,
          struct pci_dev *VAR_4)
{
 struct pci_device_id VAR_5 = {
  .vendor = VAR_0,
  .device = VAR_1,
  .subvendor = VAR_2,
  .subdevice = VAR_3,
 };

 return FUNC_0(&VAR_5, VAR_4);
}
