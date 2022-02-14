
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vbat_charge_start; scalar_t__ vbat_charge_stop; scalar_t__ vbat_charge_restart; scalar_t__ vbat_low; scalar_t__ vcharge_max; scalar_t__ vcharge_min; scalar_t__ tbat_high; scalar_t__ tbat_low; } ;
struct TYPE_3__ {scalar_t__ vbat_res; scalar_t__ vchmax_res; scalar_t__ vchmin_res; scalar_t__ tbat_res; } ;
struct da9030_charger {TYPE_2__ thresholds; TYPE_1__ adc; int master; scalar_t__ chdet; int is_on; } ;


 int VAR_0 ;
 int FUNC_0 (struct da9030_charger*) ;
 int FUNC_1 (struct da9030_charger*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct da9030_charger *VAR_1)
{
 FUNC_0(VAR_1);


 if (!VAR_1->is_on) {
  if ((VAR_1->chdet) &&
      (VAR_1->adc.vbat_res <
       VAR_1->thresholds.vbat_charge_start)) {
   FUNC_1(VAR_1, 1);
  }
 } else {

  if (!VAR_1->chdet) {
   FUNC_1(VAR_1, 0);
   return;
  }

  if (VAR_1->adc.vbat_res >=
      VAR_1->thresholds.vbat_charge_stop) {
   FUNC_1(VAR_1, 0);
   FUNC_2(VAR_1->master, VAR_0,
           VAR_1->thresholds.vbat_charge_restart);
  } else if (VAR_1->adc.vbat_res >
      VAR_1->thresholds.vbat_low) {



   FUNC_2(VAR_1->master, VAR_0,
         VAR_1->thresholds.vbat_low);
  }
  if (VAR_1->adc.vchmax_res > VAR_1->thresholds.vcharge_max ||
      VAR_1->adc.vchmin_res < VAR_1->thresholds.vcharge_min ||

      VAR_1->adc.tbat_res < VAR_1->thresholds.tbat_high ||
      VAR_1->adc.tbat_res > VAR_1->thresholds.tbat_low) {

   FUNC_1(VAR_1, 0);
  }
 }
}
