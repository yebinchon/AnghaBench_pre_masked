
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef unsigned int u32 ;
struct intel_plane {int pipe; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; scalar_t__ gtt_offset; } ;
struct drm_framebuffer {int pixel_format; unsigned int* pitches; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 () ;






 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_9 (int ,scalar_t__) ;
 unsigned int FUNC_10 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (int ,unsigned int) ;
 scalar_t__ FUNC_12 (struct drm_device*) ;
 scalar_t__ FUNC_13 (struct drm_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int ) ;
 unsigned long FUNC_16 (unsigned int*,unsigned int*,scalar_t__,int,unsigned int) ;
 int FUNC_17 (struct drm_device*,int,unsigned int,int) ;
 struct intel_plane* FUNC_18 (struct drm_plane*) ;

__attribute__((used)) static void
FUNC_19(struct drm_plane *VAR_14, struct drm_framebuffer *VAR_15,
   struct drm_i915_gem_object *VAR_16, int VAR_17, int VAR_18,
   unsigned int VAR_19, unsigned int VAR_20,
   uint32_t VAR_21, uint32_t VAR_22,
   uint32_t VAR_23, uint32_t VAR_24)
{
 struct drm_device *VAR_25 = VAR_14->dev;
 struct drm_i915_private *VAR_26 = VAR_25->dev_private;
 struct intel_plane *VAR_27 = FUNC_18(VAR_14);
 int VAR_28 = VAR_27->pipe;
 unsigned long VAR_29, VAR_30;
 u32 VAR_31, VAR_32;
 int VAR_33 = FUNC_15(VAR_15->pixel_format, 0);

 VAR_31 = FUNC_10(FUNC_1(VAR_28));


 VAR_31 &= ~VAR_3;
 VAR_31 &= ~VAR_4;
 VAR_31 &= ~VAR_8;
 VAR_31 &= ~VAR_6;

 switch (VAR_15->pixel_format) {
 case 131:
  VAR_31 |= VAR_1 | VAR_4;
  break;
 case 130:
  VAR_31 |= VAR_1;
  break;
 case 129:
  VAR_31 |= VAR_2 | VAR_11;
  break;
 case 128:
  VAR_31 |= VAR_2 | VAR_12;
  break;
 case 133:
  VAR_31 |= VAR_2 | VAR_9;
  break;
 case 132:
  VAR_31 |= VAR_2 | VAR_10;
  break;
 default:
  FUNC_0();
 }

 if (VAR_16->tiling_mode != VAR_13)
  VAR_31 |= VAR_6;

 if (FUNC_13(VAR_25))
  VAR_31 |= VAR_7;
 VAR_31 |= VAR_0;


 VAR_23--;
 VAR_24--;
 VAR_19--;
 VAR_20--;

 FUNC_17(VAR_25, VAR_28, VAR_19, VAR_33);

 VAR_32 = 0;
 if (FUNC_12(VAR_25) || VAR_19 != VAR_23 || VAR_20 != VAR_24)
  VAR_32 = VAR_5 | (VAR_23 << 16) | VAR_24;

 FUNC_11(FUNC_6(VAR_28), VAR_15->pitches[0]);
 FUNC_11(FUNC_3(VAR_28), (VAR_18 << 16) | VAR_17);

 VAR_30 = VAR_22 * VAR_15->pitches[0] + VAR_21 * VAR_33;
 VAR_29 =
  FUNC_16(&VAR_21, &VAR_22, VAR_16->tiling_mode,
            VAR_33, VAR_15->pitches[0]);
 VAR_30 -= VAR_29;

 if (VAR_16->tiling_mode != VAR_13)
  FUNC_11(FUNC_8(VAR_28), (VAR_22 << 16) | VAR_21);
 else
  FUNC_11(FUNC_2(VAR_28), VAR_30);

 FUNC_11(FUNC_5(VAR_28), (VAR_20 << 16) | VAR_19);
 FUNC_11(FUNC_4(VAR_28), VAR_32);
 FUNC_11(FUNC_1(VAR_28), VAR_31);
 FUNC_9(FUNC_7(VAR_28), VAR_16->gtt_offset + VAR_29);
 FUNC_14(FUNC_7(VAR_28));
}
