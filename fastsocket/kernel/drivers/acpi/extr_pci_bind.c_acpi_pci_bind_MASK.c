
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {struct pci_bus* bus; struct pci_bus* subordinate; int devfn; } ;
struct pci_bus {int number; } ;
struct TYPE_2__ {int (* bind ) (struct acpi_device*) ;int unbind; } ;
struct acpi_device {int handle; TYPE_1__ ops; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 struct pci_dev* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct pci_bus*) ;
 int VAR_2 ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_bus*) ;

__attribute__((used)) static int FUNC_9(struct acpi_device *VAR_3)
{
 acpi_status VAR_4;
 acpi_handle VAR_5;
 struct pci_bus *VAR_6;
 struct pci_dev *VAR_7;

 VAR_7 = FUNC_5(VAR_3->handle);
 if (!VAR_7)
  return 0;





 if (VAR_7->subordinate) {
  FUNC_0((VAR_0,
      "Device %04x:%02x:%02x.%d is a PCI bridge\n",
      FUNC_8(VAR_7->bus), VAR_7->bus->number,
      FUNC_3(VAR_7->devfn), FUNC_2(VAR_7->devfn)));
  VAR_3->ops.bind = FUNC_9;
  VAR_3->ops.unbind = VAR_2;
 }
 VAR_4 = FUNC_4(VAR_3->handle, VAR_1, &VAR_5);
 if (FUNC_1(VAR_4))
  goto out;

 if (VAR_7->subordinate)
  VAR_6 = VAR_7->subordinate;
 else
  VAR_6 = VAR_7->bus;

 FUNC_6(VAR_3->handle, VAR_6);

out:
 FUNC_7(VAR_7);
 return 0;
}
