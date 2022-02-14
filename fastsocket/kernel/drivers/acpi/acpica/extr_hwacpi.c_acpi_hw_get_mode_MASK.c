
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int smi_command; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;

u32 FUNC_4(void)
{
 acpi_status VAR_5;
 u32 VAR_6;

 FUNC_1(VAR_4);





 if (!VAR_3.smi_command) {
  FUNC_3(VAR_1);
 }

 VAR_5 = FUNC_2(VAR_0, &VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_2);
 }

 if (VAR_6) {
  FUNC_3(VAR_1);
 } else {
  FUNC_3(VAR_2);
 }
}
