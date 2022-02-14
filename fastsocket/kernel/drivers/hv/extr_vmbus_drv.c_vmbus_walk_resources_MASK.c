
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_resource_irq {unsigned int* interrupts; } ;
struct TYPE_2__ {struct acpi_resource_irq irq; } ;
struct acpi_resource {scalar_t__ type; TYPE_1__ data; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static acpi_status FUNC_0(struct acpi_resource *VAR_2, void *VAR_3)
{

 if (VAR_2->type == VAR_0) {
  struct acpi_resource_irq *VAR_4;
  VAR_4 = &VAR_2->data.irq;

  *((unsigned int *)VAR_3) = VAR_4->interrupts[0];
 }

 return VAR_1;
}
