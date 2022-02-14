
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_framebuffer {struct drm_i915_gem_object* obj; } ;
struct intel_crtc {int plane; } ;
struct drm_i915_private {int cfb_size; } ;
struct drm_i915_gem_object {int fence_reg; } ;
struct drm_framebuffer {int* pitches; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int y; struct drm_framebuffer* fb; struct drm_device* dev; } ;


 int FUNC_0 (char*,int,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 struct intel_crtc* FUNC_3 (struct drm_crtc*) ;
 struct intel_framebuffer* FUNC_4 (struct drm_framebuffer*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_15, unsigned long VAR_16)
{
 struct drm_device *VAR_17 = VAR_15->dev;
 struct drm_i915_private *VAR_18 = VAR_17->dev_private;
 struct drm_framebuffer *VAR_19 = VAR_15->fb;
 struct intel_framebuffer *VAR_20 = FUNC_4(VAR_19);
 struct drm_i915_gem_object *VAR_21 = VAR_20->obj;
 struct intel_crtc *VAR_22 = FUNC_3(VAR_15);
 int VAR_23;
 int VAR_24, VAR_25;
 u32 VAR_26, VAR_27;

 VAR_23 = VAR_18->cfb_size / VAR_13;
 if (VAR_19->pitches[0] < VAR_23)
  VAR_23 = VAR_19->pitches[0];


 VAR_23 = (VAR_23 / 64) - 1;
 VAR_24 = VAR_22->plane == 0 ? VAR_9 : VAR_10;


 for (VAR_25 = 0; VAR_25 < (VAR_13 / 32) + 1; VAR_25++)
  FUNC_1(VAR_14 + (VAR_25 * 4), 0);


 VAR_27 = VAR_5 | VAR_6 | VAR_3;
 VAR_27 |= VAR_24;
 FUNC_1(VAR_1, VAR_27);
 FUNC_1(VAR_12, VAR_15->y);


 VAR_26 = VAR_4 | VAR_8;
 if (FUNC_2(VAR_17))
  VAR_26 |= VAR_2;
 VAR_26 |= (VAR_23 & 0xff) << VAR_11;
 VAR_26 |= (VAR_16 & 0x2fff) << VAR_7;
 VAR_26 |= VAR_21->fence_reg;
 FUNC_1(VAR_0, VAR_26);

 FUNC_0("enabled FBC, pitch %d, yoff %d, plane %d, ",
        VAR_23, VAR_15->y, VAR_22->plane);
}
