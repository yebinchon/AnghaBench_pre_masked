
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_framebuffer {struct drm_i915_gem_object* obj; } ;
struct intel_crtc {int plane; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int fence_reg; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {unsigned long y; struct drm_framebuffer* fb; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 struct intel_crtc* FUNC_3 (struct drm_crtc*) ;
 struct intel_framebuffer* FUNC_4 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_14, unsigned long VAR_15)
{
 struct drm_device *VAR_16 = VAR_14->dev;
 struct drm_i915_private *VAR_17 = VAR_16->dev_private;
 struct drm_framebuffer *VAR_18 = VAR_14->fb;
 struct intel_framebuffer *VAR_19 = FUNC_4(VAR_18);
 struct drm_i915_gem_object *VAR_20 = VAR_19->obj;
 struct intel_crtc *VAR_21 = FUNC_3(VAR_14);
 int VAR_22 = VAR_21->plane == 0 ? VAR_5 : VAR_6;
 unsigned long VAR_23 = 200;
 u32 VAR_24;

 VAR_24 = VAR_22 | VAR_13 | VAR_4;
 VAR_24 |= VAR_3 | VAR_20->fence_reg;
 FUNC_2(VAR_0, VAR_8);

 FUNC_2(VAR_9, VAR_10 |
     (VAR_23 << VAR_11) |
     (VAR_15 << VAR_12));
 FUNC_2(VAR_7, VAR_14->y);


 FUNC_2(VAR_1, FUNC_1(VAR_1) | VAR_2);

 FUNC_0("enabled fbc on plane %d\n", VAR_21->plane);
}
