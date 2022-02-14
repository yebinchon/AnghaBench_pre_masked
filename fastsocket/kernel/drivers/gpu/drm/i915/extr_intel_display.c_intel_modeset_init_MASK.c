
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mappable_base; } ;
struct drm_i915_private {int num_pipe; TYPE_2__ gtt; } ;
struct TYPE_3__ {int preferred_depth; int prefer_shadow; int max_width; int max_height; int fb_base; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*,int) ;
 int FUNC_13 (struct drm_device*) ;

void FUNC_14(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 int VAR_3, VAR_4;

 FUNC_3(VAR_1);

 VAR_1->mode_config.min_width = 0;
 VAR_1->mode_config.min_height = 0;

 VAR_1->mode_config.preferred_depth = 24;
 VAR_1->mode_config.prefer_shadow = 1;

 VAR_1->mode_config.funcs = &VAR_0;

 FUNC_10(VAR_1);

 FUNC_9(VAR_1);

 FUNC_8(VAR_1);

 if (FUNC_1(VAR_1)) {
  VAR_1->mode_config.max_width = 2048;
  VAR_1->mode_config.max_height = 2048;
 } else if (FUNC_2(VAR_1)) {
  VAR_1->mode_config.max_width = 4096;
  VAR_1->mode_config.max_height = 4096;
 } else {
  VAR_1->mode_config.max_width = 8192;
  VAR_1->mode_config.max_height = 8192;
 }
 VAR_1->mode_config.fb_base = VAR_2->gtt.mappable_base;

 FUNC_0("%d display pipe%s available.\n",
        VAR_2->num_pipe, VAR_2->num_pipe > 1 ? "s" : "");

 for (VAR_3 = 0; VAR_3 < VAR_2->num_pipe; VAR_3++) {
  FUNC_6(VAR_1, VAR_3);
  VAR_4 = FUNC_12(VAR_1, VAR_3);
  if (VAR_4)
   FUNC_0("plane %d init failed: %d\n", VAR_3, VAR_4);
 }

 FUNC_5(VAR_1);
 FUNC_11(VAR_1);


 FUNC_4(VAR_1);
 FUNC_13(VAR_1);


 FUNC_7(VAR_1);
}
