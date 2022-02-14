
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct acpi_device_id {char* member_0; int member_1; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 struct pci_dev* FUNC_1 (int ) ;
 long FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*,struct acpi_device_id const*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_2, u32 VAR_3, void *VAR_4, void **VAR_5)
{
 long *VAR_6 = VAR_4;
 struct pci_dev *VAR_7;
 struct acpi_device *VAR_8;

 const struct acpi_device_id VAR_9[] = {
  {VAR_0, 0},
  {"", 0},
 };
 if (FUNC_0(VAR_2, &VAR_8))
  return VAR_1;

 if (!FUNC_3(VAR_8, VAR_9)) {
  VAR_7 = FUNC_1(VAR_2);
  if (!VAR_7)
   return VAR_1;
  FUNC_4(VAR_7);
  *VAR_6 |= FUNC_2(VAR_8);
 }
 return VAR_1;
}
