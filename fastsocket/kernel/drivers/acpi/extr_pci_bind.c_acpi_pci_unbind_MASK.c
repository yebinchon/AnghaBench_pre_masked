
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int subordinate; } ;
struct TYPE_2__ {int * unbind; int * bind; } ;
struct acpi_device {TYPE_1__ ops; int handle; } ;


 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct pci_dev *VAR_1;

 VAR_1 = FUNC_0(VAR_0->handle);
 if (!VAR_1 || !VAR_1->subordinate)
  goto out;

 FUNC_1(VAR_1->subordinate);

 VAR_0->ops.bind = ((void*)0);
 VAR_0->ops.unbind = ((void*)0);

out:
 FUNC_2(VAR_1);
 return 0;
}
