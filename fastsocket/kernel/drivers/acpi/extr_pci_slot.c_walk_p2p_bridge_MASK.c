
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {struct pci_bus* subordinate; } ;
struct pci_bus {int number; } ;
struct callback_args {int root_handle; int (* user_function ) (int ,int ,void*,void**) ;struct pci_bus* pci_bus; } ;
typedef int (* acpi_walk_callback ) (int ,int ,void*,void**) ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,int ,int ,int (*) (int ,int ,void*,void**),struct callback_args*,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (struct pci_bus*,int ) ;

__attribute__((used)) static acpi_status
FUNC_8(acpi_handle VAR_2, u32 VAR_3, void *VAR_4, void **VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long long VAR_8;
 acpi_status VAR_9;
 acpi_handle VAR_10;
 acpi_walk_callback VAR_11;

 struct pci_dev *VAR_12;
 struct pci_bus *VAR_13;
 struct callback_args VAR_14;
 struct callback_args *VAR_15 = VAR_4;

 VAR_13 = VAR_15->pci_bus;
 VAR_11 = VAR_15->user_function;

 VAR_9 = FUNC_3(VAR_2, "_ADR", &VAR_10);
 if (FUNC_0(VAR_9))
  return VAR_1;

 VAR_9 = FUNC_2(VAR_2, "_ADR", ((void*)0), &VAR_8);
 if (FUNC_0(VAR_9))
  return VAR_1;

 VAR_6 = (VAR_8 >> 16) & 0xffff;
 VAR_7 = VAR_8 & 0xffff;

 VAR_12 = FUNC_7(VAR_13, FUNC_1(VAR_6, VAR_7));
 if (!VAR_12 || !VAR_12->subordinate)
  goto out;

 VAR_14.pci_bus = VAR_12->subordinate;
 VAR_14.user_function = VAR_11;
 VAR_14.root_handle = VAR_15->root_handle;

 FUNC_5("p2p bridge walk, pci_bus = %x\n", VAR_12->subordinate->number);
 VAR_9 = FUNC_4(VAR_0, VAR_2, (u32)1,
         VAR_11, &VAR_14, ((void*)0));
 if (FUNC_0(VAR_9))
  goto out;

 VAR_9 = FUNC_4(VAR_0, VAR_2, (u32)1,
         FUNC_8, &VAR_14, ((void*)0));
out:
 FUNC_6(VAR_12);
 return VAR_1;
}
