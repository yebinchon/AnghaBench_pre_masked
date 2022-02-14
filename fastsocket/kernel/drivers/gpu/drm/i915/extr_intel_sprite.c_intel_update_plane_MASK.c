
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_plane {int pipe; int max_downscale; int (* update_plane ) (struct drm_plane*,struct drm_framebuffer*,struct drm_i915_gem_object*,int,int,unsigned int,unsigned int,int,int,int,int) ;struct drm_i915_gem_object* obj; int can_scale; } ;
struct intel_framebuffer {struct drm_i915_gem_object* obj; } ;
struct intel_crtc {int pipe; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int tiling_mode; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {TYPE_1__ mode; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_device*,struct drm_i915_gem_object*,int *) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_device*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drm_plane*,struct drm_framebuffer*,struct drm_i915_gem_object*,int,int,unsigned int,unsigned int,int,int,int,int) ;
 struct intel_crtc* FUNC_11 (struct drm_crtc*) ;
 struct intel_framebuffer* FUNC_12 (struct drm_framebuffer*) ;
 struct intel_plane* FUNC_13 (struct drm_plane*) ;

__attribute__((used)) static int
FUNC_14(struct drm_plane *VAR_2, struct drm_crtc *VAR_3,
     struct drm_framebuffer *VAR_4, int VAR_5, int VAR_6,
     unsigned int VAR_7, unsigned int VAR_8,
     uint32_t VAR_9, uint32_t VAR_10,
     uint32_t VAR_11, uint32_t VAR_12)
{
 struct drm_device *VAR_13 = VAR_2->dev;
 struct drm_i915_private *VAR_14 = VAR_13->dev_private;
 struct intel_crtc *VAR_15 = FUNC_11(VAR_3);
 struct intel_plane *VAR_16 = FUNC_13(VAR_2);
 struct intel_framebuffer *VAR_17;
 struct drm_i915_gem_object *VAR_18, *VAR_19;
 int VAR_20 = VAR_16->pipe;
 enum transcoder VAR_21 = FUNC_5(VAR_14,
              VAR_20);
 int VAR_22 = 0;
 int VAR_23 = VAR_9 >> 16, VAR_24 = VAR_10 >> 16;
 int VAR_25 = VAR_3->mode.hdisplay, VAR_26 = VAR_3->mode.vdisplay;
 bool VAR_27 = 0;

 VAR_17 = FUNC_12(VAR_4);
 VAR_18 = VAR_17->obj;

 VAR_19 = VAR_16->obj;

 VAR_11 = VAR_11 >> 16;
 VAR_12 = VAR_12 >> 16;


 if (!(FUNC_0(FUNC_1(VAR_21)) & VAR_1))
  return -VAR_0;

 if (VAR_5 >= VAR_25 || VAR_6 >= VAR_26)
  return -VAR_0;


 if (VAR_16->pipe != VAR_15->pipe)
  return -VAR_0;


 switch (VAR_18->tiling_mode) {
  case 129:
  case 128:
   break;
  default:
   return -VAR_0;
 }






 if ((VAR_5 < 0) && ((VAR_5 + VAR_7) > 0)) {
  VAR_7 += VAR_5;
  VAR_5 = 0;
 }
 if ((VAR_5 + VAR_7) <= 0)
  goto out;
 if ((VAR_5 + VAR_7) > VAR_25)
  VAR_7 = VAR_25 - VAR_5;

 if ((VAR_6 < 0) && ((VAR_6 + VAR_8) > 0)) {
  VAR_8 += VAR_6;
  VAR_6 = 0;
 }
 if ((VAR_6 + VAR_8) <= 0)
  goto out;
 if (VAR_6 + VAR_8 > VAR_26)
  VAR_8 = VAR_26 - VAR_6;

 if (!VAR_7 || !VAR_8)
  goto out;




 if (!VAR_16->can_scale && (VAR_7 != VAR_11 || VAR_8 != VAR_12))
  return -VAR_0;





 if (((VAR_11 * VAR_12) / (VAR_7 * VAR_8)) > VAR_16->max_downscale)
  return -VAR_0;





 if ((VAR_5 == 0) && (VAR_6 == 0) &&
     (VAR_7 == VAR_25) && (VAR_8 == VAR_26))
  VAR_27 = 1;

 FUNC_8(&VAR_13->struct_mutex);

 VAR_22 = FUNC_4(VAR_13, VAR_18, ((void*)0));
 if (VAR_22)
  goto out_unlock;

 VAR_16->obj = VAR_18;





 if (!VAR_27)
  FUNC_3(VAR_3);

 VAR_16->update_plane(VAR_2, VAR_4, VAR_18, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_23, VAR_24, VAR_11, VAR_12);

 if (VAR_27)
  FUNC_2(VAR_3);


 if (VAR_19) {






  if (VAR_19 != VAR_18) {
   FUNC_9(&VAR_13->struct_mutex);
   FUNC_7(VAR_13, FUNC_11(VAR_3)->pipe);
   FUNC_8(&VAR_13->struct_mutex);
  }
  FUNC_6(VAR_19);
 }

out_unlock:
 FUNC_9(&VAR_13->struct_mutex);
out:
 return VAR_22;
}
