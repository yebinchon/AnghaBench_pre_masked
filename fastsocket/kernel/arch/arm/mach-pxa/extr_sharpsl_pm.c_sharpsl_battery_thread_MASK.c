
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_7__ {scalar_t__ ac_status; int mainbat_percent; int mainbat_voltage; int mainbat_status; } ;
struct TYPE_8__ {scalar_t__ charge_mode; int flags; int dev; TYPE_3__ battstat; TYPE_2__* machinfo; scalar_t__ charge_start_time; } ;
struct TYPE_6__ {int (* read_devdata ) (int ) ;int (* backlight_limit ) (int) ;TYPE_1__* bat_levels_noac; int batfull_irq; } ;
struct TYPE_5__ {int voltage; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_13(struct work_struct *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21 = 0;

 if (!VAR_15.machinfo)
  return;

 VAR_15.battstat.ac_status = (VAR_15.machinfo->read_devdata(VAR_12) ? VAR_1 : VAR_0);


 if (!VAR_15.machinfo->batfull_irq && (VAR_15.charge_mode == VAR_6)
   && FUNC_12(VAR_13, VAR_15.charge_start_time + VAR_11))
  FUNC_6(&VAR_16, 0);

 while(1) {
  VAR_18 = VAR_15.machinfo->read_devdata(VAR_9);

  if (VAR_18 > 0) break;
  if (VAR_21++ > 5) {
   VAR_18 = VAR_15.machinfo->bat_levels_noac[0].voltage;
   FUNC_3(VAR_15.dev, "Warning: Cannot read main battery!\n");
   break;
  }
 }

 VAR_18 = FUNC_7(VAR_18);
 VAR_20 = FUNC_4(VAR_18);
 VAR_19 = FUNC_5(VAR_18);



 if ((VAR_15.battstat.ac_status == VAR_1) || (VAR_20 == VAR_3) || VAR_19 <= VAR_15.battstat.mainbat_percent) {
  VAR_15.battstat.mainbat_voltage = VAR_18;
  VAR_15.battstat.mainbat_status = VAR_20;
  VAR_15.battstat.mainbat_percent = VAR_19;
 }

 FUNC_1(VAR_15.dev, "Battery: voltage: %d, status: %d, percentage: %d, time: %ld\n", VAR_18,
   VAR_15.battstat.mainbat_status, VAR_15.battstat.mainbat_percent, VAR_13);
 if ((VAR_15.battstat.ac_status != VAR_1)
   && (VAR_15.battstat.mainbat_status == VAR_2)
   && !(VAR_15.flags & VAR_7)) {
  VAR_15.flags |= VAR_7;
  FUNC_2(VAR_15.dev, "Fatal Off\n");
  FUNC_0(VAR_5);
 }

 FUNC_6(&VAR_14, VAR_8);
}
