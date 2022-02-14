
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct acpi_pci_root {int osc_control_set; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*) ;
 scalar_t__ VAR_9 ;
 struct acpi_pci_root* FUNC_1 (int ) ;

int FUNC_2(struct pci_dev *VAR_10, int *VAR_11)
{
 struct acpi_pci_root *VAR_12;
 acpi_handle VAR_13;
 u32 VAR_14;

 if (VAR_9)
  return 0;

 VAR_13 = FUNC_0(VAR_10);
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_13);
 if (!VAR_12)
  return -VAR_1;

 VAR_14 = VAR_12->osc_control_set;

 *VAR_11 = VAR_8;
 if (VAR_14 & VAR_3)
  *VAR_11 |= VAR_6;
 if (VAR_14 & VAR_4)
  *VAR_11 |= VAR_7;
 if (VAR_14 & VAR_2)
  *VAR_11 |= VAR_5;

 return 0;
}
