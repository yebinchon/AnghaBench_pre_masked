
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int acpi_disable; int smi_command; int acpi_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;

acpi_status FUNC_9(u32 VAR_7)
{

 acpi_status VAR_8;
 u32 VAR_9;

 FUNC_4(VAR_6);





 if (!VAR_5.smi_command) {
  FUNC_1((VAR_2,
       "No SMI_CMD in FADT, mode transition failed"));
  FUNC_8(VAR_3);
 }
 if (!VAR_5.acpi_enable && !VAR_5.acpi_disable) {
  FUNC_1((VAR_2,
       "No ACPI mode transition supported in this system "
       "(enable/disable both zero)"));
  FUNC_8(VAR_4);
 }

 switch (VAR_7) {
 case 129:



  VAR_8 = FUNC_6(VAR_5.smi_command,
         (u32) VAR_5.acpi_enable, 8);
  FUNC_0((VAR_0,
      "Attempting to enable ACPI mode\n"));
  break;

 case 128:





  VAR_8 = FUNC_6(VAR_5.smi_command,
         (u32) VAR_5.acpi_disable,
         8);
  FUNC_0((VAR_0,
      "Attempting to enable Legacy (non-ACPI) mode\n"));
  break;

 default:
  FUNC_8(VAR_1);
 }

 if (FUNC_3(VAR_8)) {
  FUNC_2((VAR_2, VAR_8,
    "Could not write ACPI mode change"));
  FUNC_8(VAR_8);
 }





 VAR_9 = 3000;
 while (VAR_9) {
  if (FUNC_5() == VAR_7) {
   FUNC_0((VAR_0,
       "Mode %X successfully enabled\n",
       VAR_7));
   FUNC_8(VAR_4);
  }
  FUNC_7(1000);
  VAR_9--;
 }

 FUNC_1((VAR_2, "Hardware did not change modes"));
 FUNC_8(VAR_3);
}
