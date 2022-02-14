
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int lvds_dither; int int_tv_support; int int_crt_support; int lvds_use_ssc; int lvds_ssc_freq; int * sdvo_lvds_vbt_mode; scalar_t__ lvds_vbt; int crt_ddc_pin; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_private *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;

 VAR_1->crt_ddc_pin = VAR_0;


 VAR_1->lvds_dither = 1;
 VAR_1->lvds_vbt = 0;


 VAR_1->sdvo_lvds_vbt_mode = ((void*)0);


 VAR_1->int_tv_support = 1;
 VAR_1->int_crt_support = 1;


 VAR_1->lvds_use_ssc = 1;
 VAR_1->lvds_ssc_freq = FUNC_1(VAR_2, 1);
 FUNC_0("Set default to SSC at %dMHz\n", VAR_1->lvds_ssc_freq);
}
