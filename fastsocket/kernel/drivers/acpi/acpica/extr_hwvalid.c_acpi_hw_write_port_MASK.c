
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ acpi_status ;
typedef int acpi_io_address ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;

acpi_status FUNC_4(acpi_io_address VAR_4, u32 VAR_5, u32 VAR_6)
{
 acpi_status VAR_7;
 u32 VAR_8;



 if (VAR_3) {
  VAR_4 &= VAR_0;
 }



 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (FUNC_1(VAR_7)) {
  VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6);
  return VAR_7;
 }

 if (VAR_7 != VAR_1) {
  return VAR_7;
 }






 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += 8) {



  if (FUNC_2(VAR_4, 8) == VAR_2) {
   VAR_7 =
       FUNC_3(VAR_4, (VAR_5 >> VAR_8) & 0xFF, 8);
   if (FUNC_0(VAR_7)) {
    return VAR_7;
   }
  }

  VAR_4++;
 }

 return VAR_2;
}
