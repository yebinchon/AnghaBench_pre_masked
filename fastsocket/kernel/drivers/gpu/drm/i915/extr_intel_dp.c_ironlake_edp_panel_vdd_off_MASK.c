
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int want_panel_vdd; int panel_power_cycle_delay; int panel_vdd_work; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct intel_dp *VAR_0, bool VAR_1)
{
 if (!FUNC_3(VAR_0))
  return;

 FUNC_0("Turn eDP VDD off %d\n", VAR_0->want_panel_vdd);
 FUNC_1(!VAR_0->want_panel_vdd, "eDP VDD not forced on");

 VAR_0->want_panel_vdd = 0;

 if (VAR_1) {
  FUNC_2(VAR_0);
 } else {





  FUNC_5(&VAR_0->panel_vdd_work,
          FUNC_4(VAR_0->panel_power_cycle_delay * 5));
 }
}
