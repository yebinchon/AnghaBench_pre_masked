
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {int rom_handle; int optimus_detected; int dsm_detected; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int *) ;
 TYPE_1__ VAR_0 ;

bool FUNC_3(struct pci_dev *VAR_1)
{
 acpi_status VAR_2;
 acpi_handle VAR_3, VAR_4;

 if (!VAR_0.dsm_detected && !VAR_0.optimus_detected)
  return 0;

 VAR_3 = FUNC_1(&VAR_1->dev);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_2(VAR_3, "_ROM", &VAR_4);
 if (FUNC_0(VAR_2))
  return 0;

 VAR_0.rom_handle = VAR_4;
 return 1;
}
