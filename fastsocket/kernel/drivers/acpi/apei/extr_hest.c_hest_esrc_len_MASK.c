
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct acpi_hest_ia_machine_check {int num_hardware_banks; } ;
struct acpi_hest_ia_error_bank {int dummy; } ;
struct acpi_hest_ia_corrected {int num_hardware_banks; } ;
struct acpi_hest_header {size_t type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct acpi_hest_header *VAR_4)
{
 u16 VAR_5 = VAR_4->type;
 int VAR_6;

 if (VAR_5 >= VAR_2)
  return 0;

 VAR_6 = VAR_3[VAR_5];

 if (VAR_5 == VAR_1) {
  struct acpi_hest_ia_corrected *VAR_7;
  VAR_7 = (struct acpi_hest_ia_corrected *)VAR_4;
  VAR_6 = sizeof(*VAR_7) + VAR_7->num_hardware_banks *
   sizeof(struct acpi_hest_ia_error_bank);
 } else if (VAR_5 == VAR_0) {
  struct acpi_hest_ia_machine_check *VAR_8;
  VAR_8 = (struct acpi_hest_ia_machine_check *)VAR_4;
  VAR_6 = sizeof(*VAR_8) + VAR_8->num_hardware_banks *
   sizeof(struct acpi_hest_ia_error_bank);
 }
 FUNC_0(VAR_6 == -1);

 return VAR_6;
}
