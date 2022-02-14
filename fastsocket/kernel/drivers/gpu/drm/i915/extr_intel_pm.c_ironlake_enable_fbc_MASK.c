
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_framebuffer {struct drm_i915_gem_object* obj; } ;
struct intel_crtc {int plane; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int fence_reg; int gtt_offset; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int y; struct drm_framebuffer* fb; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct drm_device*) ;
 struct intel_crtc* FUNC_5 (struct drm_crtc*) ;
 struct intel_framebuffer* FUNC_6 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_20, unsigned long VAR_21)
{
 struct drm_device *VAR_22 = VAR_20->dev;
 struct drm_i915_private *VAR_23 = VAR_22->dev_private;
 struct drm_framebuffer *VAR_24 = VAR_20->fb;
 struct intel_framebuffer *VAR_25 = FUNC_6(VAR_24);
 struct drm_i915_gem_object *VAR_26 = VAR_25->obj;
 struct intel_crtc *VAR_27 = FUNC_5(VAR_20);
 int VAR_28 = VAR_27->plane == 0 ? VAR_5 : VAR_6;
 unsigned long VAR_29 = 200;
 u32 VAR_30;

 VAR_30 = FUNC_1(VAR_13);
 VAR_30 &= VAR_11;
 VAR_30 |= (VAR_28 | VAR_3);

 VAR_30 |= VAR_4;
 VAR_30 |= (VAR_2 | VAR_26->fence_reg);
 FUNC_2(VAR_12, VAR_7);

 FUNC_2(VAR_15, VAR_8 |
     (VAR_29 << VAR_9) |
     (VAR_21 << VAR_10));
 FUNC_2(VAR_14, VAR_20->y);
 FUNC_2(VAR_16, VAR_26->gtt_offset | VAR_17);

 FUNC_2(VAR_13, VAR_30 | VAR_1);

 if (FUNC_3(VAR_22)) {
  FUNC_2(VAR_19,
      VAR_18 | VAR_26->fence_reg);
  FUNC_2(VAR_0, VAR_20->y);
  FUNC_4(VAR_22);
 }

 FUNC_0("enabled fbc on plane %d\n", VAR_27->plane);
}
