
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dvo_reg; TYPE_1__* dev_ops; } ;
struct intel_dvo {TYPE_2__ dev; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; int hdisplay; int vdisplay; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_3__ {int (* mode_set ) (TYPE_2__*,struct drm_display_mode*,struct drm_display_mode*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 struct intel_dvo* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (TYPE_2__*,struct drm_display_mode*,struct drm_display_mode*) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_17,
          struct drm_display_mode *VAR_18,
          struct drm_display_mode *VAR_19)
{
 struct drm_device *VAR_20 = VAR_17->dev;
 struct drm_i915_private *VAR_21 = VAR_20->dev_private;
 struct intel_crtc *VAR_22 = FUNC_5(VAR_17->crtc);
 struct intel_dvo *VAR_23 = FUNC_3(VAR_17);
 int VAR_24 = VAR_22->pipe;
 u32 VAR_25;
 u32 VAR_26 = VAR_23->dev.dvo_reg, VAR_27;
 int VAR_28 = FUNC_0(VAR_24);

 switch (VAR_26) {
 case 130:
 default:
  VAR_27 = VAR_3;
  break;
 case 129:
  VAR_27 = VAR_4;
  break;
 case 128:
  VAR_27 = VAR_5;
  break;
 }

 VAR_23->dev.dev_ops->mode_set(&VAR_23->dev, VAR_18, VAR_19);


 VAR_25 = FUNC_1(VAR_26) &
    (VAR_13 | VAR_9);
 VAR_25 |= VAR_8 | VAR_7 |
     VAR_6;

 if (VAR_24 == 1)
  VAR_25 |= VAR_11;
 VAR_25 |= VAR_12;
 if (VAR_19->flags & VAR_1)
  VAR_25 |= VAR_10;
 if (VAR_19->flags & VAR_2)
  VAR_25 |= VAR_16;

 FUNC_2(VAR_28, FUNC_1(VAR_28) | VAR_0);




 FUNC_2(VAR_27,
     (VAR_19->hdisplay << VAR_14) |
     (VAR_19->vdisplay << VAR_15));

 FUNC_2(VAR_26, VAR_25);
}
