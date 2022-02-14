
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
 int FUNC_4 (int ,scalar_t__*,int ) ;
 int FUNC_5 (struct acpi_generic_address*,int,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_2 ;

acpi_status FUNC_8(u32 *VAR_3, struct acpi_generic_address *VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;
 acpi_status VAR_7;

 FUNC_3(VAR_2);



 VAR_7 = FUNC_5(VAR_4, 32, &VAR_5);
 if (FUNC_1(VAR_7)) {
  return (VAR_7);
 }



 *VAR_3 = 0;





 if (VAR_4->space_id == VAR_0) {
  VAR_7 = FUNC_6((acpi_physical_address)
          VAR_5, &VAR_6, VAR_4->bit_width);

  *VAR_3 = (u32)VAR_6;
 } else {

  VAR_7 = FUNC_4((acpi_io_address)
        VAR_5, VAR_3, VAR_4->bit_width);
 }

 FUNC_0((VAR_1,
     "Read:  %8.8X width %2d from %8.8X%8.8X (%s)\n",
     *VAR_3, VAR_4->bit_width, FUNC_2(VAR_5),
     FUNC_7(VAR_4->space_id)));

 return (VAR_7);
}
