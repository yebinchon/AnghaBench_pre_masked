
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {void* backlight_off_delay; void* backlight_on_delay; void* panel_power_cycle_delay; void* panel_power_down_delay; void* panel_power_up_delay; } ;
struct edp_power_seq {int t1_t3; int t8; int t9; int t10; int t11_t12; } ;
struct TYPE_2__ {struct edp_power_seq pps; } ;
struct drm_i915_private {TYPE_1__ edp; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_19,
        struct intel_dp *VAR_20,
        struct edp_power_seq *VAR_21)
{
 struct drm_i915_private *VAR_22 = VAR_19->dev_private;
 struct edp_power_seq VAR_23, VAR_24, VAR_25, VAR_26;
 u32 VAR_27, VAR_28, VAR_29, VAR_30;



 VAR_30 = FUNC_5(VAR_22);
 FUNC_2(VAR_10, VAR_30);

 VAR_27 = FUNC_1(VAR_13);
 VAR_28 = FUNC_1(VAR_12);
 VAR_29 = FUNC_1(VAR_11);


 VAR_23.t1_t3 = (VAR_27 & VAR_8) >>
  VAR_9;

 VAR_23.t8 = (VAR_27 & VAR_2) >>
  VAR_3;

 VAR_23.t9 = (VAR_28 & VAR_0) >>
  VAR_1;

 VAR_23.t10 = (VAR_28 & VAR_6) >>
  VAR_7;

 VAR_23.t11_t12 = ((VAR_29 & VAR_4) >>
         VAR_5) * 1000;

 FUNC_0("cur t1_t3 %d t8 %d t9 %d t10 %d t11_t12 %d\n",
        VAR_23.t1_t3, VAR_23.t8, VAR_23.t9, VAR_23.t10, VAR_23.t11_t12);

 VAR_24 = VAR_22->edp.pps;



 VAR_25.t1_t3 = 210 * 10;
 VAR_25.t8 = 50 * 10;
 VAR_25.t9 = 50 * 10;
 VAR_25.t10 = 500 * 10;




 VAR_25.t11_t12 = (510 + 100) * 10;

 FUNC_0("vbt t1_t3 %d t8 %d t9 %d t10 %d t11_t12 %d\n",
        VAR_24.t1_t3, VAR_24.t8, VAR_24.t9, VAR_24.t10, VAR_24.t11_t12);






 VAR_26.t1_t3 = (FUNC_0(VAR_23.t1_t3, VAR_24.t1_t3) == 0 ? VAR_25.t1_t3 : FUNC_0(VAR_23.t1_t3, VAR_24.t1_t3));
 VAR_26.t8 = (FUNC_0(VAR_23.t8, VAR_24.t8) == 0 ? VAR_25.t8 : FUNC_0(VAR_23.t8, VAR_24.t8));
 VAR_26.t9 = (FUNC_0(VAR_23.t9, VAR_24.t9) == 0 ? VAR_25.t9 : FUNC_0(VAR_23.t9, VAR_24.t9));
 VAR_26.t10 = (FUNC_0(VAR_23.t10, VAR_24.t10) == 0 ? VAR_25.t10 : FUNC_0(VAR_23.t10, VAR_24.t10));
 VAR_26.t11_t12 = (FUNC_0(VAR_23.t11_t12, VAR_24.t11_t12) == 0 ? VAR_25.t11_t12 : FUNC_0(VAR_23.t11_t12, VAR_24.t11_t12));



 VAR_20->panel_power_up_delay = (FUNC_0(VAR_26.t1_t3, 10));
 VAR_20->backlight_on_delay = (FUNC_0(VAR_26.t8, 10));
 VAR_20->backlight_off_delay = (FUNC_0(VAR_26.t9, 10));
 VAR_20->panel_power_down_delay = (FUNC_0(VAR_26.t10, 10));
 VAR_20->panel_power_cycle_delay = (FUNC_0(VAR_26.t11_t12, 10));


 FUNC_0("panel power up delay %d, power down delay %d, power cycle delay %d\n",
        VAR_20->panel_power_up_delay, VAR_20->panel_power_down_delay,
        VAR_20->panel_power_cycle_delay);

 FUNC_0("backlight on delay %d, off delay %d\n",
        VAR_20->backlight_on_delay, VAR_20->backlight_off_delay);

 if (VAR_21)
  *VAR_21 = VAR_26;
}
