
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_gpe_register_info {int base_gpe_number; int enable_for_run; int enable_for_wake; int status_address; } ;
struct acpi_gpe_event_info {int gpe_number; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;
typedef int acpi_event_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int*,int *) ;

acpi_status
FUNC_3(struct acpi_gpe_event_info * VAR_4,
         acpi_event_status * VAR_5)
{
 u32 VAR_6;
 u8 VAR_7;
 struct acpi_gpe_register_info *VAR_8;
 acpi_status VAR_9;
 acpi_event_status VAR_10 = 0;

 FUNC_1();

 if (!VAR_5) {
  return (VAR_3);
 }



 VAR_8 = VAR_4->register_info;



 VAR_7 = (u8)(1 <<
       (VAR_4->gpe_number -
        VAR_4->register_info->base_gpe_number));



 if (VAR_7 & VAR_8->enable_for_run) {
  VAR_10 |= VAR_0;
 }



 if (VAR_7 & VAR_8->enable_for_wake) {
  VAR_10 |= VAR_2;
 }



 VAR_9 = FUNC_2(&VAR_6, &VAR_8->status_address);
 if (FUNC_0(VAR_9)) {
  goto unlock_and_exit;
 }

 if (VAR_7 & VAR_6) {
  VAR_10 |= VAR_1;
 }



 (*VAR_5) = VAR_10;

      unlock_and_exit:
 return (VAR_9);
}
