
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {scalar_t__ acpi_handle; } ;
struct ata_host {int n_ports; struct ata_port** ports; } ;
struct ata_acpi_gtm {int dummy; } ;


 struct ata_acpi_gtm* FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_port*,struct ata_acpi_gtm const*) ;

void FUNC_2(struct ata_host *VAR_0)
{
 int VAR_1;




 for (VAR_1 = 0; VAR_1 < VAR_0->n_ports; VAR_1++) {
  struct ata_port *VAR_2 = VAR_0->ports[VAR_1];
  const struct ata_acpi_gtm *VAR_3 = FUNC_0(VAR_2);

  if (VAR_2->acpi_handle && VAR_3)
   FUNC_1(VAR_2, VAR_3);
 }
}
