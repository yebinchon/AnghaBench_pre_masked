
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct intel_framebuffer {struct drm_i915_gem_object* obj; } ;
struct intel_crtc {int plane; scalar_t__ dspaddr_offset; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; scalar_t__ gtt_offset; } ;
struct drm_framebuffer {int pixel_format; int* pitches; int bits_per_pixel; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (char*,scalar_t__,unsigned long,int,int,int) ;
 int FUNC_1 (char*,int) ;
 unsigned long FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 unsigned long FUNC_4 (int) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned long FUNC_7 (int) ;
 int VAR_9 ;
 int FUNC_8 (int ,scalar_t__) ;
 unsigned long FUNC_9 (unsigned long) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_11 (struct drm_device*) ;
 int FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 (int*,int*,scalar_t__,int,int) ;
 struct intel_crtc* FUNC_14 (struct drm_crtc*) ;
 struct intel_framebuffer* FUNC_15 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_16(struct drm_crtc *VAR_11,
     struct drm_framebuffer *VAR_12, int VAR_13, int VAR_14)
{
 struct drm_device *VAR_15 = VAR_11->dev;
 struct drm_i915_private *VAR_16 = VAR_15->dev_private;
 struct intel_crtc *VAR_17 = FUNC_14(VAR_11);
 struct intel_framebuffer *VAR_18;
 struct drm_i915_gem_object *VAR_19;
 int VAR_20 = VAR_17->plane;
 unsigned long VAR_21;
 u32 VAR_22;
 u32 VAR_23;

 switch (VAR_20) {
 case 0:
 case 1:
 case 2:
  break;
 default:
  FUNC_1("Can't update plane %d in SAREA\n", VAR_20);
  return -VAR_9;
 }

 VAR_18 = FUNC_15(VAR_12);
 VAR_19 = VAR_18->obj;

 VAR_23 = FUNC_2(VAR_20);
 VAR_22 = FUNC_9(VAR_23);

 VAR_22 &= ~VAR_4;
 switch (VAR_12->pixel_format) {
 case 133:
  VAR_22 |= VAR_0;
  break;
 case 132:
  VAR_22 |= VAR_2;
  break;
 case 128:
 case 134:
  VAR_22 |= VAR_3;
  break;
 case 130:
 case 136:
  VAR_22 |= VAR_6;
  break;
 case 129:
 case 135:
  VAR_22 |= VAR_1;
  break;
 case 131:
 case 137:
  VAR_22 |= VAR_5;
  break;
 default:
  FUNC_1("Unknown pixel format 0x%08x\n", VAR_12->pixel_format);
  return -VAR_9;
 }

 if (VAR_19->tiling_mode != VAR_10)
  VAR_22 |= VAR_7;
 else
  VAR_22 &= ~VAR_7;


 VAR_22 |= VAR_8;

 FUNC_10(VAR_23, VAR_22);

 VAR_21 = VAR_14 * VAR_12->pitches[0] + VAR_13 * (VAR_12->bits_per_pixel / 8);
 VAR_17->dspaddr_offset =
  FUNC_13(&VAR_13, &VAR_14, VAR_19->tiling_mode,
            VAR_12->bits_per_pixel / 8,
            VAR_12->pitches[0]);
 VAR_21 -= VAR_17->dspaddr_offset;

 FUNC_0("Writing base %08X %08lX %d %d %d\n",
        VAR_19->gtt_offset, VAR_21, VAR_13, VAR_14, VAR_12->pitches[0]);
 FUNC_10(FUNC_5(VAR_20), VAR_12->pitches[0]);
 FUNC_8(FUNC_6(VAR_20),
        VAR_19->gtt_offset + VAR_17->dspaddr_offset);
 if (FUNC_11(VAR_15)) {
  FUNC_10(FUNC_4(VAR_20), (VAR_14 << 16) | VAR_13);
 } else {
  FUNC_10(FUNC_7(VAR_20), (VAR_14 << 16) | VAR_13);
  FUNC_10(FUNC_3(VAR_20), VAR_21);
 }
 FUNC_12(VAR_23);

 return 0;
}
