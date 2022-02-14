
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ active; scalar_t__ initialized; } ;
struct acpi_pci_link {TYPE_1__ irq; scalar_t__ refcnt; } ;


 int FUNC_0 (struct acpi_pci_link*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct acpi_pci_link *VAR_0)
{
 if (VAR_0->refcnt && VAR_0->irq.active && VAR_0->irq.initialized)
  return (FUNC_0(VAR_0, VAR_0->irq.active));

 return 0;
}
