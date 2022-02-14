
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nouveau_drm {int device; struct nouveau_display* display; } ;
struct nouveau_display {int (* dtor ) (struct drm_device*) ;void* color_vibrance_property; void* vibrant_hue_property; void* underscan_vborder_property; void* underscan_hborder_property; int underscan_property; int dithering_depth; int dithering_mode; } ;
struct TYPE_4__ {int max_width; int max_height; int preferred_depth; int prefer_shadow; scalar_t__ num_crtc; scalar_t__ min_height; scalar_t__ min_width; int fb_base; int * funcs; } ;
struct drm_device {TYPE_1__ mode_config; TYPE_2__* pdev; } ;
struct TYPE_6__ {scalar_t__ card_type; } ;
struct TYPE_5__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 void* FUNC_8 (struct drm_device*,int ,char*,int ,int) ;
 int FUNC_9 (struct drm_device*,scalar_t__) ;
 struct nouveau_display* FUNC_10 (int,int ) ;
 int FUNC_11 (struct drm_device*) ;
 struct nouveau_drm* FUNC_12 (struct drm_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 TYPE_3__* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (struct drm_device*) ;
 int VAR_10 ;

int
FUNC_18(struct drm_device *VAR_11)
{
 struct nouveau_drm *VAR_12 = FUNC_12(VAR_11);
 struct nouveau_display *VAR_13;
 u32 VAR_14 = VAR_11->pdev->class >> 8;
 int VAR_15, VAR_16;

 VAR_13 = VAR_12->display = FUNC_10(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_5(VAR_11);
 FUNC_7(VAR_11);
 FUNC_6(VAR_11);

 if (FUNC_15(VAR_12->device)->card_type < VAR_3)
  VAR_16 = 0;
 else
 if (FUNC_15(VAR_12->device)->card_type < VAR_4)
  VAR_16 = 1;
 else
  VAR_16 = 2;

 FUNC_0(VAR_13->dithering_mode, VAR_16, "dithering mode", VAR_7);
 FUNC_0(VAR_13->dithering_depth, VAR_16, "dithering depth", VAR_6);
 FUNC_0(VAR_13->underscan_property, VAR_16, "underscan", VAR_10);

 VAR_13->underscan_hborder_property =
  FUNC_8(VAR_11, 0, "underscan hborder", 0, 128);

 VAR_13->underscan_vborder_property =
  FUNC_8(VAR_11, 0, "underscan vborder", 0, 128);

 if (VAR_16 >= 1) {

  VAR_13->vibrant_hue_property =
   FUNC_8(VAR_11, 0, "vibrant hue", 0, 180);


  VAR_13->color_vibrance_property =
   FUNC_8(VAR_11, 0, "color vibrance", 0, 200);
 }

 VAR_11->mode_config.funcs = &VAR_8;
 VAR_11->mode_config.fb_base = FUNC_16(VAR_11->pdev, 1);

 VAR_11->mode_config.min_width = 0;
 VAR_11->mode_config.min_height = 0;
 if (FUNC_15(VAR_12->device)->card_type < VAR_2) {
  VAR_11->mode_config.max_width = 2048;
  VAR_11->mode_config.max_height = 2048;
 } else
 if (FUNC_15(VAR_12->device)->card_type < VAR_3) {
  VAR_11->mode_config.max_width = 4096;
  VAR_11->mode_config.max_height = 4096;
 } else {
  VAR_11->mode_config.max_width = 8192;
  VAR_11->mode_config.max_height = 8192;
 }

 VAR_11->mode_config.preferred_depth = 24;
 VAR_11->mode_config.prefer_shadow = 1;

 FUNC_3(VAR_11);
 FUNC_1(VAR_11);

 if (VAR_9 == 1 ||
     (VAR_9 < 0 && VAR_14 == VAR_5)) {
  if (FUNC_15(VAR_12->device)->card_type < VAR_3)
   VAR_15 = FUNC_13(VAR_11);
  else
   VAR_15 = FUNC_14(VAR_11);
  if (VAR_15)
   goto disp_create_err;

  if (VAR_11->mode_config.num_crtc) {
   VAR_15 = FUNC_9(VAR_11, VAR_11->mode_config.num_crtc);
   if (VAR_15)
    goto vblank_err;
  }

  FUNC_11(VAR_11);
 }

 return 0;

vblank_err:
 VAR_13->dtor(VAR_11);
disp_create_err:
 FUNC_2(VAR_11);
 FUNC_4(VAR_11);
 return VAR_15;
}
