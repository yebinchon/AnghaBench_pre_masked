
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpiphp_bridge {int res_lock; int pci_bus; int * handle; int type; } ;
struct acpi_pci_root {int bus; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 struct acpi_pci_root* FUNC_0 (int *) ;
 int FUNC_1 (struct acpiphp_bridge*) ;
 struct acpiphp_bridge* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(acpi_handle *VAR_2)
{
 struct acpiphp_bridge *VAR_3;
 struct acpi_pci_root *VAR_4 = FUNC_0(VAR_2);

 VAR_3 = FUNC_2(sizeof(struct acpiphp_bridge), VAR_1);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->type = VAR_0;
 VAR_3->handle = VAR_2;

 VAR_3->pci_bus = VAR_4->bus;

 FUNC_3(&VAR_3->res_lock);

 FUNC_1(VAR_3);
}
