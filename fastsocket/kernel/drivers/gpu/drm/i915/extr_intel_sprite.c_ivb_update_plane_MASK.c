
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef unsigned int u32 ;
struct intel_plane {int pipe; scalar_t__ can_scale; } ;
struct drm_plane {struct drm_device* dev; } ;
struct drm_i915_private {int sprite_scaling_enabled; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; scalar_t__ gtt_offset; } ;
struct drm_framebuffer {int pixel_format; unsigned int* pitches; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 () ;






 int FUNC_1 (int ,scalar_t__) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
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
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int ) ;
 unsigned long FUNC_16 (unsigned int*,unsigned int*,scalar_t__,int,unsigned int) ;
 int FUNC_17 (struct drm_device*,int,unsigned int,int) ;
 int FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_device*,int) ;
 struct intel_plane* FUNC_20 (struct drm_plane*) ;

__attribute__((used)) static void
FUNC_21(struct drm_plane *VAR_15, struct drm_framebuffer *VAR_16,
   struct drm_i915_gem_object *VAR_17, int VAR_18, int VAR_19,
   unsigned int VAR_20, unsigned int VAR_21,
   uint32_t VAR_22, uint32_t VAR_23,
   uint32_t VAR_24, uint32_t VAR_25)
{
 struct drm_device *VAR_26 = VAR_15->dev;
 struct drm_i915_private *VAR_27 = VAR_26->dev_private;
 struct intel_plane *VAR_28 = FUNC_20(VAR_15);
 int VAR_29 = VAR_28->pipe;
 u32 VAR_30, VAR_31 = 0;
 unsigned long VAR_32, VAR_33;
 int VAR_34 = FUNC_15(VAR_16->pixel_format, 0);
 bool VAR_35 = VAR_27->sprite_scaling_enabled;

 VAR_30 = FUNC_2(FUNC_6(VAR_29));


 VAR_30 &= ~VAR_5;
 VAR_30 &= ~VAR_6;
 VAR_30 &= ~VAR_10;
 VAR_30 &= ~VAR_8;

 switch (VAR_16->pixel_format) {
 case 131:
  VAR_30 |= VAR_2 | VAR_6;
  break;
 case 130:
  VAR_30 |= VAR_2;
  break;
 case 129:
  VAR_30 |= VAR_3 | VAR_13;
  break;
 case 128:
  VAR_30 |= VAR_3 | VAR_14;
  break;
 case 133:
  VAR_30 |= VAR_3 | VAR_11;
  break;
 case 132:
  VAR_30 |= VAR_3 | VAR_12;
  break;
 default:
  FUNC_0();
 }

 if (VAR_17->tiling_mode != VAR_0)
  VAR_30 |= VAR_8;


 VAR_30 |= VAR_9;
 VAR_30 |= VAR_1;

 if (FUNC_4(VAR_26))
  VAR_30 |= VAR_4;


 VAR_24--;
 VAR_25--;
 VAR_20--;
 VAR_21--;

 FUNC_17(VAR_26, VAR_29, VAR_20, VAR_34);






 if (VAR_20 != VAR_24 || VAR_21 != VAR_25) {
  VAR_27->sprite_scaling_enabled |= 1 << VAR_29;

  if (!VAR_35) {
   FUNC_18(VAR_26);
   FUNC_19(VAR_26, VAR_29);
  }
  VAR_31 = VAR_7 | (VAR_24 << 16) | VAR_25;
 } else
  VAR_27->sprite_scaling_enabled &= ~(1 << VAR_29);

 FUNC_3(FUNC_12(VAR_29), VAR_16->pitches[0]);
 FUNC_3(FUNC_9(VAR_29), (VAR_19 << 16) | VAR_18);

 VAR_33 = VAR_23 * VAR_16->pitches[0] + VAR_22 * VAR_34;
 VAR_32 =
  FUNC_16(&VAR_22, &VAR_23, VAR_17->tiling_mode,
            VAR_34, VAR_16->pitches[0]);
 VAR_33 -= VAR_32;



 if (FUNC_4(VAR_26))
  FUNC_3(FUNC_8(VAR_29), (VAR_23 << 16) | VAR_22);
 else if (VAR_17->tiling_mode != VAR_0)
  FUNC_3(FUNC_14(VAR_29), (VAR_23 << 16) | VAR_22);
 else
  FUNC_3(FUNC_7(VAR_29), VAR_33);

 FUNC_3(FUNC_11(VAR_29), (VAR_21 << 16) | VAR_20);
 if (VAR_28->can_scale)
  FUNC_3(FUNC_10(VAR_29), VAR_31);
 FUNC_3(FUNC_6(VAR_29), VAR_30);
 FUNC_1(FUNC_13(VAR_29), VAR_17->gtt_offset + VAR_32);
 FUNC_5(FUNC_13(VAR_29));


 if (VAR_35 && !VAR_27->sprite_scaling_enabled)
  FUNC_18(VAR_26);
}
