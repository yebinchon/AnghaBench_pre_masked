
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ata_port* device; } ;
struct ata_port {int flags; scalar_t__ acpi_handle; TYPE_1__ link; } ;
struct ata_host {int n_ports; struct ata_port** ports; int acpi_handle; int dev; } ;
struct ata_device {int flags; scalar_t__ acpi_handle; TYPE_1__ link; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (scalar_t__,int *,struct ata_port*) ;

void FUNC_6(struct ata_host *VAR_4)
{
 int VAR_5, VAR_6;

 if (!FUNC_4(VAR_4->dev) || VAR_3)
  return;

 VAR_4->acpi_handle = FUNC_0(VAR_4->dev);
 if (!VAR_4->acpi_handle)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_ports; VAR_5++) {
  struct ata_port *VAR_7 = VAR_4->ports[VAR_5];

  if (VAR_4->ports[0]->flags & VAR_0)
   FUNC_2(VAR_7);
  else
   FUNC_1(VAR_7);

  if (VAR_7->acpi_handle) {

   FUNC_5(VAR_7->acpi_handle,
          &VAR_1, VAR_7);
  }

  for (VAR_6 = 0; VAR_6 < FUNC_3(&VAR_7->link); VAR_6++) {
   struct ata_device *VAR_8 = &VAR_7->link.device[VAR_6];

   if (VAR_8->acpi_handle) {

    FUNC_5(VAR_8->acpi_handle,
          &VAR_2, VAR_8);
   }
  }
 }
}
