
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_serial_quirk {int subdevice; int subvendor; int device; int vendor; } ;
struct pci_dev {int subsystem_device; int subsystem_vendor; int device; int vendor; } ;


 struct pci_serial_quirk* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct pci_serial_quirk *FUNC_1(struct pci_dev *VAR_1)
{
 struct pci_serial_quirk *VAR_2;

 for (VAR_2 = VAR_0; ; VAR_2++)
  if (FUNC_0(VAR_2->vendor, VAR_1->vendor) &&
      FUNC_0(VAR_2->device, VAR_1->device) &&
      FUNC_0(VAR_2->subvendor, VAR_1->subsystem_vendor) &&
      FUNC_0(VAR_2->subdevice, VAR_1->subsystem_device))
   break;
 return VAR_2;
}
