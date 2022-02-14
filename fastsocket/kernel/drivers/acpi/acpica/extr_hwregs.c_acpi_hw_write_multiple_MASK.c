
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_generic_address {scalar_t__ address; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_generic_address*) ;

__attribute__((used)) static acpi_status
FUNC_2(u32 VAR_0,
         struct acpi_generic_address *VAR_1,
         struct acpi_generic_address *VAR_2)
{
 acpi_status VAR_3;



 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (FUNC_0(VAR_3)) {
  return (VAR_3);
 }
 if (VAR_2->address) {
  VAR_3 = FUNC_1(VAR_0, VAR_2);
 }

 return (VAR_3);
}
