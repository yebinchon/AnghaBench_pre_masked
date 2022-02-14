
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int smi_command; int xpm_timer_block; int xpm2_control_block; int xpm1b_control_block; int xpm1a_control_block; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int*,int *) ;
 int FUNC_4 (int*,int *,int *) ;
 int FUNC_5 (int ,int*,int) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(u32 VAR_9, u32 * VAR_10)
{
 u32 VAR_11 = 0;
 acpi_status VAR_12;

 FUNC_1(VAR_8);

 switch (VAR_9) {
 case 131:

  VAR_12 = FUNC_4(&VAR_11,
            &VAR_5,
            &VAR_7);
  break;

 case 132:

  VAR_12 = FUNC_4(&VAR_11,
            &VAR_4,
            &VAR_6);
  break;

 case 133:

  VAR_12 = FUNC_4(&VAR_11,
            &VAR_3.
            xpm1a_control_block,
            &VAR_3.
            xpm1b_control_block);






  VAR_11 &= ~VAR_0;
  break;

 case 130:

  VAR_12 =
      FUNC_3(&VAR_11, &VAR_3.xpm2_control_block);
  break;

 case 129:

  VAR_12 = FUNC_3(&VAR_11, &VAR_3.xpm_timer_block);
  break;

 case 128:

  VAR_12 =
      FUNC_5(VAR_3.smi_command, &VAR_11, 8);
  break;

 default:
  FUNC_0((VAR_2, "Unknown Register ID: %X", VAR_9));
  VAR_12 = VAR_1;
  break;
 }

 if (FUNC_2(VAR_12)) {
  *VAR_10 = VAR_11;
 }

 FUNC_6(VAR_12);
}
