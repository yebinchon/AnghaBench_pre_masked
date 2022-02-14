
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct acpi_generic_address {scalar_t__ space_id; int bit_width; scalar_t__ bit_offset; int address; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

acpi_status
FUNC_3(struct acpi_generic_address *VAR_7,
     u8 VAR_8, u64 *VAR_9)
{



 if (!VAR_7) {
  return (VAR_3);
 }






 FUNC_1(VAR_9, &VAR_7->address);
 if (!(*VAR_9)) {
  return (VAR_2);
 }



 if ((VAR_7->space_id != VAR_1) &&
     (VAR_7->space_id != VAR_0)) {
  FUNC_0((VAR_4,
       "Unsupported address space: 0x%X", VAR_7->space_id));
  return (VAR_6);
 }



 if ((VAR_7->bit_width != 8) &&
     (VAR_7->bit_width != 16) &&
     (VAR_7->bit_width != 32) && (VAR_7->bit_width != VAR_8)) {
  FUNC_0((VAR_4,
       "Unsupported register bit width: 0x%X",
       VAR_7->bit_width));
  return (VAR_6);
 }



 if (VAR_7->bit_offset != 0) {
  FUNC_2((VAR_4,
         "Unsupported register bit offset: 0x%X",
         VAR_7->bit_offset));
 }

 return (VAR_5);
}
