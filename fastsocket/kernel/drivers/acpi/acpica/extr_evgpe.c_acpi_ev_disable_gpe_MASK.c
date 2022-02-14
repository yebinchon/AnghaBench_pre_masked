
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_event_info {int flags; } ;
typedef int acpi_status ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_3 (struct acpi_gpe_event_info*,int ) ;
 int FUNC_4 (struct acpi_gpe_event_info*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

acpi_status FUNC_6(struct acpi_gpe_event_info *VAR_5)
{
 acpi_status VAR_6;

 FUNC_2(VAR_4);



 VAR_6 =
     FUNC_3(VAR_5, VAR_0);
 if (FUNC_1(VAR_6)) {
  FUNC_5(VAR_6);
 }



 switch (VAR_5->flags & VAR_2) {
 case 129:
  FUNC_0(VAR_5->flags, VAR_3);
  break;

 case 128:
  FUNC_0(VAR_5->flags, VAR_3);



 case 130:



  FUNC_0(VAR_5->flags, VAR_1);
  break;

 default:
  break;
 }
 VAR_6 = FUNC_4(VAR_5);
 FUNC_5(VAR_6);
}
