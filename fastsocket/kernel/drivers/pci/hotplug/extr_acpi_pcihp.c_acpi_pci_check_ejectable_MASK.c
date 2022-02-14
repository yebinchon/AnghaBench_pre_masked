
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(struct pci_bus *VAR_0, acpi_handle VAR_1)
{
 acpi_handle VAR_2, VAR_3;

 if (!(VAR_2 = FUNC_2(VAR_0)))
  return 0;
 if ((FUNC_0(FUNC_1(VAR_1, &VAR_3))))
  return 0;
 if (VAR_2 != VAR_3)
  return 0;
 return FUNC_3(VAR_1);
}
