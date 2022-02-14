
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apm_power_info {int battery_life; int time; int battery_flag; int battery_status; void* ac_line_status; int units; } ;
struct TYPE_2__ {int flags; int charge; int max_charge; scalar_t__ amperage; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_0(struct apm_power_info *VAR_23)
{
 int VAR_24 = -1;
 int VAR_25 = 0;
 int VAR_26 = -1;
 int VAR_27 = 0;
 int VAR_28;
 char VAR_29 = 0;
 long VAR_30 = -1;
 long VAR_31 = 0;
 unsigned long VAR_32 = 0;

 VAR_23->battery_status = VAR_11;
 VAR_23->battery_flag = VAR_6;
 VAR_23->units = VAR_14;

 if (VAR_22 & VAR_19)
  VAR_23->ac_line_status = VAR_1;
 else
  VAR_23->ac_line_status = VAR_0;

 for (VAR_28=0; VAR_28<VAR_21; VAR_28++) {
  if (VAR_20[VAR_28].flags & VAR_16) {
   VAR_25++;
   if (VAR_24 < 0)
    VAR_24 = 0;
   if (VAR_30 < 0)
    VAR_30 = 0;
   VAR_24 += (VAR_20[VAR_28].charge * 100) /
    VAR_20[VAR_28].max_charge;
   VAR_30 += VAR_20[VAR_28].charge;
   VAR_31 += VAR_20[VAR_28].amperage;
   if (VAR_32 == 0)
    VAR_32 = (VAR_20[VAR_28].flags & VAR_17);
   VAR_27++;
   if ((VAR_20[VAR_28].flags & VAR_15))
    VAR_29++;
  }
 }
 if (VAR_25 == 0)
  VAR_23->ac_line_status = VAR_1;

 if (VAR_27) {
  if (VAR_31 < 0) {
   if (VAR_32 == VAR_18)
    VAR_26 = (VAR_30 * 59) / (VAR_31 * -1);
   else
    VAR_26 = (VAR_30 * 16440) / (VAR_31 * -60);
  }
  VAR_24 /= VAR_27;
  if (VAR_29 > 0) {
   VAR_23->battery_status = VAR_7;
   VAR_23->battery_flag = VAR_2;
  } else if (VAR_24 <= VAR_12) {
   VAR_23->battery_status = VAR_8;
   VAR_23->battery_flag = VAR_3;
  } else if (VAR_24 <= VAR_13) {
   VAR_23->battery_status = VAR_10;
   VAR_23->battery_flag = VAR_5;
  } else {
   VAR_23->battery_status = VAR_9;
   VAR_23->battery_flag = VAR_4;
  }
 }

 VAR_23->battery_life = VAR_24;
 VAR_23->time = VAR_26;
}
