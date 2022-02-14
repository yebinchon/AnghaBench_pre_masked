
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct put_image_params {int dst_y; int dst_h; scalar_t__ src_w; scalar_t__ src_h; scalar_t__ src_scan_w; scalar_t__ src_scan_h; int format; int offset_V; int offset_U; int offset_Y; int stride_UV; int stride_Y; int dst_w; int dst_x; } ;
struct intel_overlay {int pfit_active; int pfit_vscale_ratio; struct intel_crtc* crtc; } ;
struct drm_display_mode {int hdisplay; } ;
struct TYPE_3__ {struct drm_display_mode mode; } ;
struct intel_crtc {scalar_t__ pipe; struct intel_overlay* overlay; TYPE_1__ base; } ;
struct drm_mode_object {int dummy; } ;
struct drm_intel_overlay_put_image {int flags; int dst_y; int dst_height; scalar_t__ src_width; scalar_t__ src_height; scalar_t__ src_scan_width; scalar_t__ src_scan_height; int offset_V; int offset_U; int offset_Y; int stride_UV; int stride_Y; int dst_width; int dst_x; int bo_handle; int crtc_id; } ;
struct drm_i915_gem_object {int base; scalar_t__ tiling_mode; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_2__* dev_private; } ;
struct TYPE_4__ {struct intel_overlay* overlay; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct intel_overlay*,struct drm_intel_overlay_put_image*) ;
 int FUNC_3 (struct intel_overlay*,struct intel_crtc*) ;
 int FUNC_4 (struct put_image_params*) ;
 int FUNC_5 (struct drm_device*,struct drm_intel_overlay_put_image*,struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_7 (int *) ;
 struct drm_mode_object* FUNC_8 (struct drm_device*,int ,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct intel_overlay*,struct drm_i915_gem_object*,struct put_image_params*) ;
 int FUNC_12 (struct intel_overlay*) ;
 int FUNC_13 (struct intel_overlay*) ;
 scalar_t__ FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct put_image_params*) ;
 struct put_image_params* FUNC_16 (int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct drm_mode_object*) ;
 struct drm_i915_gem_object* FUNC_20 (int ) ;
 struct intel_crtc* FUNC_21 (int ) ;
 int FUNC_22 (struct intel_overlay*) ;

int FUNC_23(struct drm_device *VAR_8, void *VAR_9,
       struct drm_file *VAR_10)
{
 struct drm_intel_overlay_put_image *VAR_11 = VAR_9;
 drm_i915_private_t *VAR_12 = VAR_8->dev_private;
 struct intel_overlay *VAR_13;
 struct drm_mode_object *VAR_14;
 struct intel_crtc *VAR_15;
 struct drm_i915_gem_object *VAR_16;
 struct put_image_params *VAR_17;
 int VAR_18;


 VAR_13 = VAR_12->overlay;
 if (!VAR_13) {
  FUNC_0("userspace bug: no overlay\n");
  return -VAR_2;
 }

 if (!(VAR_11->flags & VAR_6)) {
  FUNC_9(VAR_8);
  FUNC_17(&VAR_8->struct_mutex);

  VAR_18 = FUNC_13(VAR_13);

  FUNC_18(&VAR_8->struct_mutex);
  FUNC_10(VAR_8);

  return VAR_18;
 }

 VAR_17 = FUNC_16(sizeof(struct put_image_params), VAR_5);
 if (!VAR_17)
  return -VAR_4;

 VAR_14 = FUNC_8(VAR_8, VAR_11->crtc_id,
        VAR_0);
 if (!VAR_14) {
  VAR_18 = -VAR_3;
  goto out_free;
 }
 VAR_15 = FUNC_21(FUNC_19(VAR_14));

 VAR_16 = FUNC_20(FUNC_6(VAR_8, VAR_10,
         VAR_11->bo_handle));
 if (&VAR_16->base == ((void*)0)) {
  VAR_18 = -VAR_3;
  goto out_free;
 }

 FUNC_9(VAR_8);
 FUNC_17(&VAR_8->struct_mutex);

 if (VAR_16->tiling_mode) {
  FUNC_1("buffer used for overlay image can not be tiled\n");
  VAR_18 = -VAR_1;
  goto out_unlock;
 }

 VAR_18 = FUNC_12(VAR_13);
 if (VAR_18 != 0)
  goto out_unlock;

 if (VAR_13->crtc != VAR_15) {
  struct drm_display_mode *VAR_19 = &VAR_15->base.mode;
  VAR_18 = FUNC_13(VAR_13);
  if (VAR_18 != 0)
   goto out_unlock;

  VAR_18 = FUNC_3(VAR_13, VAR_15);
  if (VAR_18 != 0)
   goto out_unlock;

  VAR_13->crtc = VAR_15;
  VAR_15->overlay = VAR_13;


  if (VAR_19->hdisplay > 1024 &&
      FUNC_14(VAR_8) == VAR_15->pipe) {
   VAR_13->pfit_active = 1;
   FUNC_22(VAR_13);
  } else
   VAR_13->pfit_active = 0;
 }

 VAR_18 = FUNC_2(VAR_13, VAR_11);
 if (VAR_18 != 0)
  goto out_unlock;

 if (VAR_13->pfit_active) {
  VAR_17->dst_y = ((((u32)VAR_11->dst_y) << 12) /
     VAR_13->pfit_vscale_ratio);

  VAR_17->dst_h = ((((u32)VAR_11->dst_height) << 12) /
     VAR_13->pfit_vscale_ratio) + 1;
 } else {
  VAR_17->dst_y = VAR_11->dst_y;
  VAR_17->dst_h = VAR_11->dst_height;
 }
 VAR_17->dst_x = VAR_11->dst_x;
 VAR_17->dst_w = VAR_11->dst_width;

 VAR_17->src_w = VAR_11->src_width;
 VAR_17->src_h = VAR_11->src_height;
 VAR_17->src_scan_w = VAR_11->src_scan_width;
 VAR_17->src_scan_h = VAR_11->src_scan_height;
 if (VAR_17->src_scan_h > VAR_17->src_h ||
     VAR_17->src_scan_w > VAR_17->src_w) {
  VAR_18 = -VAR_1;
  goto out_unlock;
 }

 VAR_18 = FUNC_5(VAR_8, VAR_11, VAR_16);
 if (VAR_18 != 0)
  goto out_unlock;
 VAR_17->format = VAR_11->flags & ~VAR_7;
 VAR_17->stride_Y = VAR_11->stride_Y;
 VAR_17->stride_UV = VAR_11->stride_UV;
 VAR_17->offset_Y = VAR_11->offset_Y;
 VAR_17->offset_U = VAR_11->offset_U;
 VAR_17->offset_V = VAR_11->offset_V;


 VAR_18 = FUNC_4(VAR_17);
 if (VAR_18 != 0)
  goto out_unlock;

 VAR_18 = FUNC_11(VAR_13, VAR_16, VAR_17);
 if (VAR_18 != 0)
  goto out_unlock;

 FUNC_18(&VAR_8->struct_mutex);
 FUNC_10(VAR_8);

 FUNC_15(VAR_17);

 return 0;

out_unlock:
 FUNC_18(&VAR_8->struct_mutex);
 FUNC_10(VAR_8);
 FUNC_7(&VAR_16->base);
out_free:
 FUNC_15(VAR_17);

 return VAR_18;
}
