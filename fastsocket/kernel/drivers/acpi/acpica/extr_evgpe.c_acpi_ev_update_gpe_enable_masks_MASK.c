
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct acpi_gpe_register_info {int base_gpe_number; int enable_for_run; int enable_for_wake; } ;
struct acpi_gpe_event_info {int gpe_number; int flags; struct acpi_gpe_register_info* register_info; } ;
typedef int acpi_status ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;

acpi_status
FUNC_4(struct acpi_gpe_event_info *VAR_6,
    u8 VAR_7)
{
 struct acpi_gpe_register_info *VAR_8;
 u8 VAR_9;

 FUNC_1(VAR_5);

 VAR_8 = VAR_6->register_info;
 if (!VAR_8) {
  FUNC_3(VAR_3);
 }

 VAR_9 = (u8)
     (1 <<
      (VAR_6->gpe_number - VAR_8->base_gpe_number));



 if (VAR_7 == VAR_0) {
  FUNC_0(VAR_8->enable_for_wake,
          VAR_9);
  FUNC_0(VAR_8->enable_for_run, VAR_9);
  FUNC_3(VAR_4);
 }



 switch (VAR_6->flags & VAR_1) {
 case 129:
  FUNC_2(VAR_8->enable_for_wake, VAR_9);
  FUNC_0(VAR_8->enable_for_run, VAR_9);
  break;

 case 130:
  FUNC_0(VAR_8->enable_for_wake,
          VAR_9);
  FUNC_2(VAR_8->enable_for_run, VAR_9);
  break;

 case 128:
  FUNC_2(VAR_8->enable_for_wake, VAR_9);
  FUNC_2(VAR_8->enable_for_run, VAR_9);
  break;

 default:
  FUNC_3(VAR_2);
 }

 FUNC_3(VAR_4);
}
