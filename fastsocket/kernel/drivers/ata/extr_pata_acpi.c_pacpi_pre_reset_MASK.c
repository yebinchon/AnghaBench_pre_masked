
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_acpi {int gtm; } ;
struct ata_port {int * acpi_handle; struct pata_acpi* private_data; } ;
struct ata_link {struct ata_port* ap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ata_port*,int *) ;
 int FUNC_1 (struct ata_link*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_1, unsigned long VAR_2)
{
 struct ata_port *VAR_3 = VAR_1->ap;
 struct pata_acpi *VAR_4 = VAR_3->private_data;
 if (VAR_3->acpi_handle == ((void*)0) || FUNC_0(VAR_3, &VAR_4->gtm) < 0)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
