
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ata_device* device; } ;
struct ata_port {int port_no; int flags; int pflags; int __acpi_init_gtm; void* acpi_handle; TYPE_1__ link; TYPE_2__* host; } ;
struct ata_device {void* acpi_handle; } ;
struct TYPE_4__ {void* acpi_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (struct ata_port*,int *) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->acpi_handle = FUNC_0(VAR_2->host->acpi_handle, VAR_2->port_no);
 if (!VAR_2->acpi_handle)
  return;

 VAR_3 = 1;
 if (VAR_2->flags & VAR_0)
  VAR_3++;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct ata_device *VAR_5 = &VAR_2->link.device[VAR_4];

  VAR_5->acpi_handle = FUNC_0(VAR_2->acpi_handle, VAR_4);
 }

 if (FUNC_1(VAR_2, &VAR_2->__acpi_init_gtm) == 0)
  VAR_2->pflags |= VAR_1;
}
