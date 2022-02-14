
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; } ;
struct device {int parent; } ;
typedef int acpi_integer ;
typedef int acpi_handle ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, acpi_handle *VAR_2)
{
 struct pci_dev * VAR_3;
 acpi_integer VAR_4;

 VAR_3 = FUNC_4(VAR_1);

 VAR_4 = (FUNC_2(VAR_3->devfn) << 16) | FUNC_1(VAR_3->devfn);
 *VAR_2 = FUNC_3(FUNC_0(VAR_1->parent), VAR_4);
 if (!*VAR_2)
  return -VAR_0;
 return 0;
}
