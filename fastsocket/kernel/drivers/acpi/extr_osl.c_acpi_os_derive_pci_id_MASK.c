
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_pci_id {int bus; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,int ,struct acpi_pci_id**,int*,int *) ;

void FUNC_1(acpi_handle VAR_0,
      acpi_handle VAR_1,
      struct acpi_pci_id **VAR_2)
{
 int VAR_3 = 1;
 u8 VAR_4 = (*VAR_2)->bus;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, &VAR_4);
}
