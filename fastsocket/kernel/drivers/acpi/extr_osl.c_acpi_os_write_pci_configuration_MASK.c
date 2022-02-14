
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_pci_id {int function; int device; int bus; int segment; } ;
typedef int acpi_status ;
typedef int acpi_integer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int,int ) ;

acpi_status
FUNC_2(struct acpi_pci_id * VAR_2, u32 VAR_3,
    acpi_integer VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7;

 switch (VAR_5) {
 case 8:
  VAR_7 = 1;
  break;
 case 16:
  VAR_7 = 2;
  break;
 case 32:
  VAR_7 = 4;
  break;
 default:
  return VAR_0;
 }

 VAR_6 = FUNC_1(VAR_2->segment, VAR_2->bus,
    FUNC_0(VAR_2->device, VAR_2->function),
    VAR_3, VAR_7, VAR_4);

 return (VAR_6 ? VAR_0 : VAR_1);
}
