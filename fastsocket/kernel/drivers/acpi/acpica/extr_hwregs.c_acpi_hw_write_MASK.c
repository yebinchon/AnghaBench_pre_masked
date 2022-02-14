
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct acpi_generic_address {scalar_t__ space_id; int bit_width; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;
typedef int acpi_io_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct acpi_generic_address*,int,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_2 ;

acpi_status FUNC_8(u32 VAR_3, struct acpi_generic_address *VAR_4)
{
 u64 VAR_5;
 acpi_status VAR_6;

 FUNC_3(VAR_2);



 VAR_6 = FUNC_4(VAR_4, 32, &VAR_5);
 if (FUNC_1(VAR_6)) {
  return (VAR_6);
 }





 if (VAR_4->space_id == VAR_0) {
  VAR_6 = FUNC_6((acpi_physical_address)
           VAR_5, (u64)VAR_3,
           VAR_4->bit_width);
 } else {

  VAR_6 = FUNC_5((acpi_io_address)
         VAR_5, VAR_3, VAR_4->bit_width);
 }

 FUNC_0((VAR_1,
     "Wrote: %8.8X width %2d   to %8.8X%8.8X (%s)\n",
     VAR_3, VAR_4->bit_width, FUNC_2(VAR_5),
     FUNC_7(VAR_4->space_id)));

 return (VAR_6);
}
