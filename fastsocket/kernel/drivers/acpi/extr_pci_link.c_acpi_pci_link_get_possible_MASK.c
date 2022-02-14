
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int possible_count; } ;
struct acpi_pci_link {TYPE_2__ irq; TYPE_1__* device; } ;
typedef int acpi_status ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,struct acpi_pci_link*) ;

__attribute__((used)) static int FUNC_4(struct acpi_pci_link *VAR_5)
{
 acpi_status VAR_6;

 VAR_6 = FUNC_3(VAR_5->device->handle, VAR_3,
         VAR_4, VAR_5);
 if (FUNC_2(VAR_6)) {
  FUNC_1((VAR_1, VAR_6, "Evaluating _PRS"));
  return -VAR_2;
 }

 FUNC_0((VAR_0,
     "Found %d possible IRQs\n",
     VAR_5->irq.possible_count));

 return 0;
}
