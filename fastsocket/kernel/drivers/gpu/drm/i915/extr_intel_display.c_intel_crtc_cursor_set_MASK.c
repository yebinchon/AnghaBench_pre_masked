
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_crtc {scalar_t__ pipe; int cursor_addr; int cursor_width; int cursor_height; struct drm_i915_gem_object* cursor_bo; } ;
struct drm_i915_private {TYPE_3__* info; } ;
struct TYPE_9__ {int size; } ;
struct drm_i915_gem_object {int gtt_offset; TYPE_4__ base; TYPE_2__* phys_obj; scalar_t__ tiling_mode; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_8__ {scalar_t__ cursor_needs_physical; } ;
struct TYPE_7__ {TYPE_1__* handle; } ;
struct TYPE_6__ {int busaddr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,struct drm_file*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct drm_device*,struct drm_i915_gem_object*,int ,int) ;
 int FUNC_9 (struct drm_device*,struct drm_i915_gem_object*) ;
 int FUNC_10 (struct drm_i915_gem_object*,int ,int *) ;
 int FUNC_11 (struct drm_i915_gem_object*) ;
 int FUNC_12 (struct drm_i915_gem_object*) ;
 int FUNC_13 (struct drm_crtc*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct drm_i915_gem_object* FUNC_16 (int ) ;
 struct intel_crtc* FUNC_17 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_18(struct drm_crtc *VAR_6,
     struct drm_file *VAR_7,
     uint32_t VAR_8,
     uint32_t VAR_9, uint32_t VAR_10)
{
 struct drm_device *VAR_11 = VAR_6->dev;
 struct drm_i915_private *VAR_12 = VAR_11->dev_private;
 struct intel_crtc *VAR_13 = FUNC_17(VAR_6);
 struct drm_i915_gem_object *VAR_14;
 uint32_t VAR_15;
 int VAR_16;


 if (!VAR_8) {
  FUNC_0("cursor off\n");
  VAR_15 = 0;
  VAR_14 = ((void*)0);
  FUNC_14(&VAR_11->struct_mutex);
  goto finish;
 }


 if (VAR_9 != 64 || VAR_10 != 64) {
  FUNC_1("we currently only support 64x64 cursors\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_16(FUNC_5(VAR_11, VAR_7, VAR_8));
 if (&VAR_14->base == ((void*)0))
  return -VAR_2;

 if (VAR_14->base.size < VAR_9 * VAR_10 * 4) {
  FUNC_1("buffer is to small\n");
  VAR_16 = -VAR_3;
  goto fail;
 }


 FUNC_14(&VAR_11->struct_mutex);
 if (!VAR_12->info->cursor_needs_physical) {
  if (VAR_14->tiling_mode) {
   FUNC_1("cursor cannot be tiled\n");
   VAR_16 = -VAR_1;
   goto fail_locked;
  }

  VAR_16 = FUNC_10(VAR_14, 0, ((void*)0));
  if (VAR_16) {
   FUNC_1("failed to move cursor bo into the GTT\n");
   goto fail_locked;
  }

  VAR_16 = FUNC_11(VAR_14);
  if (VAR_16) {
   FUNC_1("failed to release fence for cursor");
   goto fail_unpin;
  }

  VAR_15 = VAR_14->gtt_offset;
 } else {
  int VAR_17 = FUNC_4(VAR_11) ? 16 * 1024 : 256;
  VAR_16 = FUNC_8(VAR_11, VAR_14,
        (VAR_13->pipe == 0) ? VAR_4 : VAR_5,
        VAR_17);
  if (VAR_16) {
   FUNC_1("failed to attach phys object\n");
   goto fail_locked;
  }
  VAR_15 = VAR_14->phys_obj->handle->busaddr;
 }

 if (FUNC_3(VAR_11))
  FUNC_2(VAR_0, (VAR_10 << 12) | VAR_9);

 finish:
 if (VAR_13->cursor_bo) {
  if (VAR_12->info->cursor_needs_physical) {
   if (VAR_13->cursor_bo != VAR_14)
    FUNC_9(VAR_11, VAR_13->cursor_bo);
  } else
   FUNC_12(VAR_13->cursor_bo);
  FUNC_6(&VAR_13->cursor_bo->base);
 }

 FUNC_15(&VAR_11->struct_mutex);

 VAR_13->cursor_addr = VAR_15;
 VAR_13->cursor_bo = VAR_14;
 VAR_13->cursor_width = VAR_9;
 VAR_13->cursor_height = VAR_10;

 FUNC_13(VAR_6, 1);

 return 0;
fail_unpin:
 FUNC_12(VAR_14);
fail_locked:
 FUNC_15(&VAR_11->struct_mutex);
fail:
 FUNC_7(&VAR_14->base);
 return VAR_16;
}
