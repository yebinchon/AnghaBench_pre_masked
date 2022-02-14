
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; int pin; } ;
struct acpi_prt_entry {int index; scalar_t__ link; } ;


 struct acpi_prt_entry* FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct pci_dev *VAR_0)
{
 struct acpi_prt_entry *VAR_1;
 int VAR_2;
 u8 VAR_3;

 VAR_3 = VAR_0->pin;
 if (!VAR_3)
  return;

 VAR_1 = FUNC_0(VAR_0, VAR_3);
 if (!VAR_1)
  return;

 if (VAR_1->link)
  VAR_2 = FUNC_1(VAR_1->link);
 else
  VAR_2 = VAR_1->index;






 FUNC_3(&VAR_0->dev, "PCI INT %c disabled\n", FUNC_4(VAR_3));
 FUNC_2(VAR_2);
}
