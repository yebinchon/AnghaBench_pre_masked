
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_acpi_gtm {int dummy; } ;
struct pata_acpi {struct ata_acpi_gtm gtm; } ;
struct ata_port {int cbl; struct pata_acpi* private_data; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*,struct ata_acpi_gtm*) ;
 unsigned int FUNC_1 (struct ata_device*,struct ata_acpi_gtm*) ;

__attribute__((used)) static unsigned long FUNC_2(struct ata_port *VAR_2, struct ata_device *VAR_3)
{
 struct pata_acpi *VAR_4 = VAR_2->private_data;
 struct ata_acpi_gtm VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_4->gtm;

 FUNC_0(VAR_2, &VAR_5);

 VAR_6 = FUNC_1(VAR_3, &VAR_5);

 if (VAR_6 & (0xF8 << VAR_1))
  VAR_2->cbl = VAR_0;

 return VAR_6;
}
