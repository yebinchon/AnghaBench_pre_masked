
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* get_fifo_size; void* init_clock_gating; int * update_wm; int update_linetime_wm; void* update_sprite_wm; int disable_fbc; int enable_fbc; int fbc_enabled; } ;
struct drm_i915_private {int is_ddr3; TYPE_1__ display; int mem_freq; int fsb_freq; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
 scalar_t__ FUNC_9 (struct drm_device*) ;
 scalar_t__ FUNC_10 (struct drm_device*) ;
 scalar_t__ FUNC_11 (struct drm_device*) ;
 scalar_t__ FUNC_12 (struct drm_device*) ;
 scalar_t__ FUNC_13 (struct drm_device*) ;
 scalar_t__ FUNC_14 (struct drm_device*) ;
 scalar_t__ FUNC_15 (struct drm_device*) ;
 scalar_t__ FUNC_16 (struct drm_device*) ;
 scalar_t__ FUNC_17 (struct drm_device*) ;
 scalar_t__ FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_device*) ;
 scalar_t__ FUNC_20 (struct drm_device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_21 () ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int * VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_22 (struct drm_device*) ;
 int FUNC_23 (struct drm_device*) ;
 int * VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int FUNC_24 (int ,int,int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int * VAR_29 ;
 void* VAR_30 ;
 int * VAR_31 ;
 int FUNC_25 (struct drm_device*) ;
 int * VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 int * VAR_36 ;

void FUNC_26(struct drm_device *VAR_37)
{
 struct drm_i915_private *VAR_38 = VAR_37->dev_private;

 if (FUNC_3(VAR_37)) {
  if (FUNC_2(VAR_37)) {
   VAR_38->display.fbc_enabled = VAR_27;
   VAR_38->display.enable_fbc = VAR_26;
   VAR_38->display.disable_fbc = VAR_25;
  } else if (FUNC_13(VAR_37)) {
   VAR_38->display.fbc_enabled = VAR_6;
   VAR_38->display.enable_fbc = VAR_5;
   VAR_38->display.disable_fbc = VAR_4;
  } else if (FUNC_7(VAR_37)) {
   VAR_38->display.fbc_enabled = VAR_21;
   VAR_38->display.enable_fbc = VAR_20;
   VAR_38->display.disable_fbc = VAR_19;
  }

 }


 if (FUNC_18(VAR_37))
  FUNC_23(VAR_37);
 else if (FUNC_11(VAR_37))
  FUNC_22(VAR_37);


 if (FUNC_2(VAR_37)) {
  if (FUNC_11(VAR_37)) {
   if (FUNC_4(VAR_1) & VAR_0)
    VAR_38->display.update_wm = VAR_29;
   else {
    FUNC_0("Failed to get proper latency. "
           "Disable CxSR\n");
    VAR_38->display.update_wm = ((void*)0);
   }
   VAR_38->display.init_clock_gating = VAR_28;
  } else if (FUNC_12(VAR_37)) {
   if (FUNC_21()) {
    VAR_38->display.update_wm = VAR_34;
    VAR_38->display.update_sprite_wm = VAR_33;
   } else {
    FUNC_0("Failed to read display plane latency. "
           "Disable CxSR\n");
    VAR_38->display.update_wm = ((void*)0);
   }
   VAR_38->display.init_clock_gating = VAR_10;
  } else if (FUNC_17(VAR_37)) {

   if (FUNC_21()) {
    VAR_38->display.update_wm = VAR_31;
    VAR_38->display.update_sprite_wm = VAR_33;
   } else {
    FUNC_0("Failed to read display plane latency. "
           "Disable CxSR\n");
    VAR_38->display.update_wm = ((void*)0);
   }
   VAR_38->display.init_clock_gating = VAR_30;
  } else if (FUNC_14(VAR_37)) {
   if (FUNC_21()) {
    VAR_38->display.update_wm = VAR_34;
    VAR_38->display.update_sprite_wm = VAR_33;
    VAR_38->display.update_linetime_wm = VAR_12;
   } else {
    FUNC_0("Failed to read display plane latency. "
           "Disable CxSR\n");
    VAR_38->display.update_wm = ((void*)0);
   }
   VAR_38->display.init_clock_gating = VAR_11;
  } else
   VAR_38->display.update_wm = ((void*)0);
 } else if (FUNC_20(VAR_37)) {
  VAR_38->display.update_wm = VAR_36;
  VAR_38->display.init_clock_gating =
   VAR_35;
 } else if (FUNC_18(VAR_37)) {
  if (!FUNC_24(FUNC_19(VAR_37),
         VAR_38->is_ddr3,
         VAR_38->fsb_freq,
         VAR_38->mem_freq)) {
   FUNC_1("failed to find known CxSR latency "
     "(found ddr%s fsb freq %d, mem freq %d), "
     "disabling CxSR\n",
     (VAR_38->is_ddr3 == 1) ? "3" : "2",
     VAR_38->fsb_freq, VAR_38->mem_freq);

   FUNC_25(VAR_37);
   VAR_38->display.update_wm = ((void*)0);
  } else
   VAR_38->display.update_wm = VAR_32;
  VAR_38->display.init_clock_gating = VAR_9;
 } else if (FUNC_8(VAR_37)) {
  VAR_38->display.update_wm = VAR_8;
  VAR_38->display.init_clock_gating = VAR_7;
 } else if (FUNC_10(VAR_37)) {
  VAR_38->display.update_wm = VAR_22;
  if (FUNC_7(VAR_37))
   VAR_38->display.init_clock_gating = VAR_3;
  else if (FUNC_6(VAR_37))
   VAR_38->display.init_clock_gating = VAR_2;
 } else if (FUNC_9(VAR_37)) {
  VAR_38->display.update_wm = VAR_24;
  VAR_38->display.get_fifo_size = VAR_23;
  VAR_38->display.init_clock_gating = VAR_9;
 } else if (FUNC_16(VAR_37)) {
  VAR_38->display.update_wm = VAR_15;
  VAR_38->display.init_clock_gating = VAR_18;
  VAR_38->display.get_fifo_size = VAR_13;
 } else if (FUNC_15(VAR_37)) {
  VAR_38->display.update_wm = VAR_24;
  VAR_38->display.get_fifo_size = VAR_17;
  VAR_38->display.init_clock_gating = VAR_18;
 } else {
  VAR_38->display.update_wm = VAR_15;
  VAR_38->display.init_clock_gating = VAR_14;
  if (FUNC_5(VAR_37))
   VAR_38->display.get_fifo_size = VAR_16;
  else
   VAR_38->display.get_fifo_size = VAR_13;
 }
}
