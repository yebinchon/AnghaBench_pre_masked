
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pata_acpi {int* mask; } ;
struct ata_port {struct pata_acpi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ata_port *VAR_3)
{
 struct pata_acpi *VAR_4 = VAR_3->private_data;

 if ((VAR_4->mask[0] | VAR_4->mask[1]) & (0xF8 << VAR_2))
  return VAR_1;
 else
  return VAR_0;
}
