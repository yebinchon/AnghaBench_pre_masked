
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_pci_id {int function; int device; int bus; int segment; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int,int*) ;

acpi_status
FUNC_2(struct acpi_pci_id * VAR_3, u32 VAR_4,
          u32 *VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8;

 if (!VAR_5)
  return VAR_0;

 switch (VAR_6) {
 case 8:
  VAR_8 = 1;
  break;
 case 16:
  VAR_8 = 2;
  break;
 case 32:
  VAR_8 = 4;
  break;
 default:
  return VAR_1;
 }

 VAR_7 = FUNC_1(VAR_3->segment, VAR_3->bus,
    FUNC_0(VAR_3->device, VAR_3->function),
    VAR_4, VAR_8, VAR_5);

 return (VAR_7 ? VAR_1 : VAR_2);
}
