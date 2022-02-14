
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pci_link {int list; } ;
struct acpi_device {int dummy; } ;


 struct acpi_pci_link* FUNC_0 (struct acpi_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_pci_link*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_pci_link *VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_3(&VAR_0);
 FUNC_2(&VAR_3->list);
 FUNC_4(&VAR_0);

 FUNC_1(VAR_3);
 return 0;
}
