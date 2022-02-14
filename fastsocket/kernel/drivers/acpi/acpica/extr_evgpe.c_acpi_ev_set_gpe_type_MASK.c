
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_gpe_event_info {int flags; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct acpi_gpe_event_info*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(struct acpi_gpe_event_info *VAR_3, u8 VAR_4)
{
 acpi_status VAR_5;

 FUNC_0(VAR_2);



 switch (VAR_4) {
 case 129:
 case 130:
 case 128:
  break;

 default:
  FUNC_2(VAR_1);
 }



 VAR_5 = FUNC_1(VAR_3);



 VAR_3->flags &= ~VAR_0;
 VAR_3->flags |= VAR_4;
 FUNC_2(VAR_5);
}
