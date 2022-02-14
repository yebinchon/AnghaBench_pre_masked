
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct module {int dummy; } ;
typedef int acpi_status ;
struct TYPE_2__ {int smi_command; scalar_t__ pstate_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_8 ;
 int FUNC_4 (struct module*) ;
 int FUNC_5 (struct module*) ;

int FUNC_6(struct module *VAR_9)
{
 acpi_status VAR_10;
 static int VAR_11 = 0;


 if (!(VAR_8 & VAR_6))
  return -VAR_2;

 if (!FUNC_5(VAR_9))
  return -VAR_3;






 if (VAR_11 > 0) {
  FUNC_4(VAR_9);
  return 0;
 } else if (VAR_11 < 0) {
  FUNC_4(VAR_9);
  return VAR_11;
 }

 VAR_11 = -VAR_4;


 if ((!VAR_7.smi_command) || (!VAR_7.pstate_control)) {
  FUNC_0((VAR_0, "No SMI port or pstate_control\n"));
  FUNC_4(VAR_9);
  return 0;
 }

 FUNC_0((VAR_0,
     "Writing pstate_control [0x%x] to smi_command [0x%x]\n",
     VAR_7.pstate_control, VAR_7.smi_command));

 VAR_10 = FUNC_3(VAR_7.smi_command,
        (u32) VAR_7.pstate_control, 8);
 if (FUNC_2(VAR_10)) {
  FUNC_1((VAR_1, VAR_10,
    "Failed to write pstate_control [0x%x] to "
    "smi_command [0x%x]", VAR_7.pstate_control,
    VAR_7.smi_command));
  FUNC_4(VAR_9);
  return VAR_10;
 }



 VAR_11 = 1;

 if (!(VAR_8 & VAR_5))
  FUNC_4(VAR_9);

 return 0;
}
