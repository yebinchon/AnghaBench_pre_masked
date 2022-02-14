
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct acpiphp_bridge {TYPE_2__* pci_dev; int res_lock; TYPE_1__* pci_bus; int * handle; int type; } ;
typedef int acpi_handle ;
struct TYPE_5__ {TYPE_1__* subordinate; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (struct acpiphp_bridge*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct acpiphp_bridge*) ;
 int FUNC_5 (struct acpiphp_bridge*) ;
 struct acpiphp_bridge* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(acpi_handle *VAR_2)
{
 struct acpiphp_bridge *VAR_3;

 VAR_3 = FUNC_6(sizeof(struct acpiphp_bridge), VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_2("out of memory\n");
  return;
 }

 VAR_3->type = VAR_0;
 VAR_3->handle = VAR_2;
 FUNC_1(VAR_3);

 VAR_3->pci_dev = FUNC_0(VAR_2);
 VAR_3->pci_bus = VAR_3->pci_dev->subordinate;
 if (!VAR_3->pci_bus) {
  FUNC_2("This is not a PCI-to-PCI bridge!\n");
  goto err;
 }






 FUNC_3(&VAR_3->pci_bus->dev);
 FUNC_8(&VAR_3->res_lock);

 FUNC_4(VAR_3);
 return;
 err:
 FUNC_7(VAR_3->pci_dev);
 FUNC_5(VAR_3);
 return;
}
