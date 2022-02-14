
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_io_address ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

acpi_status FUNC_4(acpi_io_address VAR_1, u32 VAR_2, u32 VAR_3)
{
 if (VAR_3 <= 8) {
  FUNC_1(VAR_2, VAR_1);
 } else if (VAR_3 <= 16) {
  FUNC_3(VAR_2, VAR_1);
 } else if (VAR_3 <= 32) {
  FUNC_2(VAR_2, VAR_1);
 } else {
  FUNC_0();
 }

 return VAR_0;
}
