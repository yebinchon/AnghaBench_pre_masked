
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_res_list {int resource_type; int end; scalar_t__ start; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
typedef scalar_t__ acpi_physical_address ;
 int VAR_0 ;
 int FUNC_0 (struct acpi_res_list*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

acpi_status
FUNC_3(
    u8 VAR_2,
    acpi_physical_address VAR_3,
    acpi_size VAR_4)
{
 struct acpi_res_list VAR_5;

 switch (VAR_2) {
 case 129:
 case 128:


  VAR_5.start = VAR_3;
  VAR_5.end = VAR_3 + VAR_4 - 1;
  VAR_5.resource_type = VAR_2;
  FUNC_1(&VAR_1);
  FUNC_0(&VAR_5);
  FUNC_2(&VAR_1);
  break;
 case 131:
 case 134:
 case 130:
 case 136:
 case 132:
 case 135:
 case 133:
  break;
 }
 return VAR_0;
}
