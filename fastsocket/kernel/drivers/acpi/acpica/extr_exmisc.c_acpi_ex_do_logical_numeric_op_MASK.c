
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int acpi_status ;
typedef int acpi_integer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

acpi_status
FUNC_2(u16 VAR_5,
         acpi_integer VAR_6,
         acpi_integer VAR_7, u8 * VAR_8)
{
 acpi_status VAR_9 = VAR_1;
 u8 VAR_10 = VAR_2;

 FUNC_0(VAR_4);

 switch (VAR_5) {
 case 129:

  if (VAR_6 && VAR_7) {
   VAR_10 = VAR_3;
  }
  break;

 case 128:

  if (VAR_6 || VAR_7) {
   VAR_10 = VAR_3;
  }
  break;

 default:
  VAR_9 = VAR_0;
  break;
 }



 *VAR_8 = VAR_10;
 FUNC_1(VAR_9);
}
