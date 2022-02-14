
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_framebuffer {int base; struct drm_i915_gem_object* obj; } ;
struct drm_mode_fb_cmd2 {int* pitches; int pixel_format; scalar_t__* offsets; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; int stride; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int *,int *) ;
 int FUNC_4 (int *,struct drm_mode_fb_cmd2*) ;
 int VAR_3 ;

int FUNC_5(struct drm_device *VAR_4,
      struct intel_framebuffer *VAR_5,
      struct drm_mode_fb_cmd2 *VAR_6,
      struct drm_i915_gem_object *VAR_7)
{
 int VAR_8;

 if (VAR_7->tiling_mode == VAR_2) {
  FUNC_0("hardware does not support tiling Y\n");
  return -VAR_0;
 }

 if (VAR_6->pitches[0] & 63) {
  FUNC_0("pitch (%d) must be at least 64 byte aligned\n",
     VAR_6->pitches[0]);
  return -VAR_0;
 }


 if (VAR_6->pitches[0] > 32768) {
  FUNC_0("pitch (%d) must be at less than 32768\n",
     VAR_6->pitches[0]);
  return -VAR_0;
 }

 if (VAR_7->tiling_mode != VAR_1 &&
     VAR_6->pitches[0] != VAR_7->stride) {
  FUNC_0("pitch (%d) must match tiling stride (%d)\n",
     VAR_6->pitches[0], VAR_7->stride);
  return -VAR_0;
 }


 switch (VAR_6->pixel_format) {
 case 138:
 case 137:
 case 130:
 case 139:
  break;
 case 132:
 case 141:
  if (FUNC_2(VAR_4)->gen > 3) {
   FUNC_0("invalid format: 0x%08x\n", VAR_6->pixel_format);
   return -VAR_0;
  }
  break;
 case 133:
 case 142:
 case 131:
 case 140:
 case 134:
 case 143:
  if (FUNC_2(VAR_4)->gen < 4) {
   FUNC_0("invalid format: 0x%08x\n", VAR_6->pixel_format);
   return -VAR_0;
  }
  break;
 case 129:
 case 136:
 case 128:
 case 135:
  if (FUNC_2(VAR_4)->gen < 5) {
   FUNC_0("invalid format: 0x%08x\n", VAR_6->pixel_format);
   return -VAR_0;
  }
  break;
 default:
  FUNC_0("unsupported pixel format 0x%08x\n", VAR_6->pixel_format);
  return -VAR_0;
 }


 if (VAR_6->offsets[0] != 0)
  return -VAR_0;

 FUNC_4(&VAR_5->base, VAR_6);
 VAR_5->obj = VAR_7;

 VAR_8 = FUNC_3(VAR_4, &VAR_5->base, &VAR_3);
 if (VAR_8) {
  FUNC_1("framebuffer init failed %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
