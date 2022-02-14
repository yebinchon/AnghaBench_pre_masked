
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_pci_root {TYPE_1__* device; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (struct acpi_pci_root*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static acpi_status FUNC_5(struct acpi_pci_root *VAR_1, u32 VAR_2)
{
 acpi_status VAR_3;
 acpi_handle VAR_4;

 VAR_3 = FUNC_1(VAR_1->device->handle, "_OSC", &VAR_4);
 if (FUNC_0(VAR_3))
  return VAR_3;
 FUNC_3(&VAR_0);
 VAR_3 = FUNC_2(VAR_1, VAR_2, ((void*)0));
 FUNC_4(&VAR_0);
 return VAR_3;
}
