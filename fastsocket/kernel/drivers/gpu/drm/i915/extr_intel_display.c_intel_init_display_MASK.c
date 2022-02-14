
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue_flip; void* write_eld; int modeset_global_resources; int fdi_link_train; int get_display_clock_speed; void* update_plane; int off; int crtc_disable; int crtc_enable; int crtc_mode_set; } ;
struct drm_i915_private {TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 TYPE_2__* FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
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
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static void FUNC_18(struct drm_device *VAR_37)
{
 struct drm_i915_private *VAR_38 = VAR_37->dev_private;


 if (FUNC_0(VAR_37)) {
  VAR_38->display.crtc_mode_set = VAR_4;
  VAR_38->display.crtc_enable = VAR_3;
  VAR_38->display.crtc_disable = VAR_2;
  VAR_38->display.off = VAR_5;
  VAR_38->display.update_plane = VAR_32;
 } else if (FUNC_1(VAR_37)) {
  VAR_38->display.crtc_mode_set = VAR_29;
  VAR_38->display.crtc_enable = VAR_28;
  VAR_38->display.crtc_disable = VAR_27;
  VAR_38->display.off = VAR_30;
  VAR_38->display.update_plane = VAR_32;
 } else {
  VAR_38->display.crtc_mode_set = VAR_17;
  VAR_38->display.crtc_enable = VAR_16;
  VAR_38->display.crtc_disable = VAR_15;
  VAR_38->display.off = VAR_18;
  VAR_38->display.update_plane = VAR_20;
 }


 if (FUNC_17(VAR_37))
  VAR_38->display.get_display_clock_speed =
   VAR_36;
 else if (FUNC_13(VAR_37) || (FUNC_4(VAR_37) && !FUNC_16(VAR_37)))
  VAR_38->display.get_display_clock_speed =
   VAR_14;
 else if (FUNC_11(VAR_37))
  VAR_38->display.get_display_clock_speed =
   VAR_12;
 else if (FUNC_14(VAR_37) || FUNC_3(VAR_37) || FUNC_16(VAR_37))
  VAR_38->display.get_display_clock_speed =
   VAR_19;
 else if (FUNC_12(VAR_37))
  VAR_38->display.get_display_clock_speed =
   VAR_13;
 else if (FUNC_10(VAR_37))
  VAR_38->display.get_display_clock_speed =
   VAR_11;
 else if (FUNC_9(VAR_37))
  VAR_38->display.get_display_clock_speed =
   VAR_10;
 else
  VAR_38->display.get_display_clock_speed =
   VAR_9;

 if (FUNC_1(VAR_37)) {
  if (FUNC_6(VAR_37)) {
   VAR_38->display.fdi_link_train = VAR_31;
   VAR_38->display.write_eld = VAR_33;
  } else if (FUNC_7(VAR_37)) {
   VAR_38->display.fdi_link_train = VAR_1;
   VAR_38->display.write_eld = VAR_33;
  } else if (FUNC_15(VAR_37)) {

   VAR_38->display.fdi_link_train = VAR_34;
   VAR_38->display.write_eld = VAR_33;
   VAR_38->display.modeset_global_resources =
    VAR_35;
  } else if (FUNC_8(VAR_37)) {
   VAR_38->display.fdi_link_train = VAR_8;
   VAR_38->display.write_eld = VAR_7;
   VAR_38->display.modeset_global_resources =
    VAR_6;
  }
 } else if (FUNC_5(VAR_37)) {
  VAR_38->display.write_eld = VAR_0;
 }


 VAR_38->display.queue_flip = VAR_21;

 switch (FUNC_2(VAR_37)->gen) {
 case 2:
  VAR_38->display.queue_flip = VAR_22;
  break;

 case 3:
  VAR_38->display.queue_flip = VAR_23;
  break;

 case 4:
 case 5:
  VAR_38->display.queue_flip = VAR_24;
  break;

 case 6:
  VAR_38->display.queue_flip = VAR_25;
  break;
 case 7:
  VAR_38->display.queue_flip = VAR_26;
  break;
 }
}
