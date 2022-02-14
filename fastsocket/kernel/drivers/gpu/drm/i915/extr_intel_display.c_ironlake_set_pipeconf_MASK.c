
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_crtc {int pipe; int bpp; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int flags; int private_flags; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 struct intel_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_14,
      struct drm_display_mode *VAR_15,
      bool VAR_16)
{
 struct drm_i915_private *VAR_17 = VAR_14->dev->dev_private;
 struct intel_crtc *VAR_18 = FUNC_5(VAR_14);
 int VAR_19 = VAR_18->pipe;
 uint32_t VAR_20;

 VAR_20 = FUNC_1(FUNC_3(VAR_19));

 VAR_20 &= ~VAR_6;
 switch (VAR_18->bpp) {
 case 18:
  VAR_20 |= VAR_4;
  break;
 case 24:
  VAR_20 |= VAR_5;
  break;
 case 30:
  VAR_20 |= VAR_2;
  break;
 case 36:
  VAR_20 |= VAR_3;
  break;
 default:

  FUNC_0();
 }

 VAR_20 &= ~(VAR_8 | VAR_9);
 if (VAR_16)
  VAR_20 |= (VAR_8 | VAR_10);

 VAR_20 &= ~VAR_12;
 if (VAR_15->flags & VAR_0)
  VAR_20 |= VAR_11;
 else
  VAR_20 |= VAR_13;

 if (VAR_15->private_flags & VAR_1)
  VAR_20 |= VAR_7;
 else
  VAR_20 &= ~VAR_7;

 FUNC_2(FUNC_3(VAR_19), VAR_20);
 FUNC_4(FUNC_3(VAR_19));
}
