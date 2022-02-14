
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_register_info {int enable_address; int enable_for_run; } ;
struct acpi_gpe_event_info {struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

acpi_status
FUNC_2(struct acpi_gpe_event_info * VAR_1)
{
 struct acpi_gpe_register_info *VAR_2;
 acpi_status VAR_3;

 FUNC_0();



 VAR_2 = VAR_1->register_info;
 if (!VAR_2) {
  return (VAR_0);
 }



 VAR_3 = FUNC_1(VAR_2->enable_for_run,
          &VAR_2->enable_address);

 return (VAR_3);
}
