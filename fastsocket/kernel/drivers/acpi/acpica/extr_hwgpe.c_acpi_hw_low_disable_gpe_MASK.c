
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_gpe_register_info {int base_gpe_number; int enable_address; } ;
struct acpi_gpe_event_info {int gpe_number; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int,int *) ;

acpi_status FUNC_4(struct acpi_gpe_event_info *VAR_1)
{
 struct acpi_gpe_register_info *VAR_2;
 acpi_status VAR_3;
 u32 VAR_4;



 VAR_2 = VAR_1->register_info;
 if (!VAR_2) {
  return (VAR_0);
 }



 VAR_3 = FUNC_2(&VAR_4, &VAR_2->enable_address);
 if (FUNC_1(VAR_3)) {
  return (VAR_3);
 }



 FUNC_0(VAR_4, ((u32)1 <<
         (VAR_1->gpe_number -
          VAR_2->base_gpe_number)));



 VAR_3 = FUNC_3(VAR_4, &VAR_2->enable_address);
 return (VAR_3);
}
