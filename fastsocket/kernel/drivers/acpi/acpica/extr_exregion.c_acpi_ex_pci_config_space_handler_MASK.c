
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct acpi_pci_id {int function; int device; int bus; int segment; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;
typedef int acpi_integer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_pci_id*,scalar_t__,int*,int) ;
 int FUNC_3 (struct acpi_pci_id*,scalar_t__,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(u32 VAR_4,
     acpi_physical_address VAR_5,
     u32 VAR_6,
     acpi_integer * VAR_7,
     void *VAR_8, void *VAR_9)
{
 acpi_status VAR_10 = VAR_2;
 struct acpi_pci_id *VAR_11;
 u16 VAR_12;
 u32 VAR_13;

 FUNC_1(VAR_3);
 VAR_11 = (struct acpi_pci_id *)VAR_9;
 VAR_12 = (u16) (u32) VAR_5;

 FUNC_0((VAR_0,
     "Pci-Config %d (%d) Seg(%04x) Bus(%04x) Dev(%04x) Func(%04x) Reg(%04x)\n",
     VAR_4, VAR_6, VAR_11->segment, VAR_11->bus,
     VAR_11->device, VAR_11->function, VAR_12));

 switch (VAR_4) {
 case 129:

  VAR_10 = FUNC_2(VAR_11, VAR_12,
       &VAR_13, VAR_6);
  *VAR_7 = VAR_13;
  break;

 case 128:

  VAR_10 = FUNC_3(VAR_11, VAR_12,
        *VAR_7, VAR_6);
  break;

 default:

  VAR_10 = VAR_1;
  break;
 }

 FUNC_4(VAR_10);
}
