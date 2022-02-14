
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; } ;
struct hotplug_params {int dummy; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (int *,struct hotplug_params*) ;
 int FUNC_6 (int *,struct hotplug_params*) ;

int FUNC_7(struct pci_dev *VAR_1, struct hotplug_params *VAR_2)
{
 acpi_status VAR_3;
 acpi_handle VAR_4, VAR_5;
 struct pci_bus *VAR_6;

 VAR_4 = ((void*)0);
 for (VAR_6 = VAR_1->bus; VAR_6; VAR_6 = VAR_6->parent) {
  VAR_4 = FUNC_4(VAR_6);
  if (VAR_4)
   break;
 }







 while (VAR_4) {
  VAR_3 = FUNC_6(VAR_4, VAR_2);
  if (FUNC_1(VAR_3))
   return 0;
  VAR_3 = FUNC_5(VAR_4, VAR_2);
  if (FUNC_1(VAR_3))
   return 0;
  if (FUNC_3(VAR_4))
   break;
  VAR_3 = FUNC_2(VAR_4, &VAR_5);
  if (FUNC_0(VAR_3))
   break;
  VAR_4 = VAR_5;
 }
 return -VAR_0;
}
