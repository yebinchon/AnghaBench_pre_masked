
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct acpi_bit_register_info {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 struct acpi_bit_register_info* VAR_2 ;

struct acpi_bit_register_info *FUNC_2(u32 VAR_3)
{
 FUNC_1();

 if (VAR_3 > VAR_0) {
  FUNC_0((VAR_1, "Invalid BitRegister ID: %X",
       VAR_3));
  return (((void*)0));
 }

 return (&VAR_2[VAR_3]);
}
