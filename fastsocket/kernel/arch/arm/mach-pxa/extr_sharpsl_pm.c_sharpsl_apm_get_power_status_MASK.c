
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct apm_power_info {int battery_status; int battery_flag; int battery_life; int ac_line_status; } ;
struct TYPE_3__ {int mainbat_status; int mainbat_percent; int ac_status; } ;
struct TYPE_4__ {scalar_t__ charge_mode; TYPE_1__ battstat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct apm_power_info *VAR_3)
{
 VAR_3->ac_line_status = VAR_2.battstat.ac_status;

 if (VAR_2.charge_mode == VAR_1)
  VAR_3->battery_status = VAR_0;
 else
  VAR_3->battery_status = VAR_2.battstat.mainbat_status;

 VAR_3->battery_flag = (1 << VAR_3->battery_status);
 VAR_3->battery_life = VAR_2.battstat.mainbat_percent;
}
