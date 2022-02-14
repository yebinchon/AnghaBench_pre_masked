
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;
struct TYPE_2__ {scalar_t__ dhandle; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool FUNC_6(struct pci_dev *VAR_2)
{
 acpi_handle VAR_3, VAR_4;
 acpi_status VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(&VAR_2->dev);
 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_3(VAR_3, "_DSM", &VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_2("no _DSM method for intel device\n");
  return 0;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_0, 0);
 if (VAR_6 < 0) {
  FUNC_2("failed to get supported _DSM functions\n");
  return 0;
 }

 VAR_1.dhandle = VAR_3;

 FUNC_5();
 return 1;
}
