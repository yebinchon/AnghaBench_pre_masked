
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dvo_reg; } ;
struct intel_dvo {TYPE_1__ dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int flags; int type; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct intel_dvo* FUNC_1 (struct drm_connector*) ;
 struct drm_display_mode* FUNC_2 (struct drm_device*,struct drm_crtc*) ;
 struct drm_crtc* FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static struct drm_display_mode *
FUNC_4(struct drm_connector *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->dev;
 struct drm_i915_private *VAR_9 = VAR_8->dev_private;
 struct intel_dvo *VAR_10 = FUNC_1(VAR_7);
 uint32_t VAR_11 = FUNC_0(VAR_10->dev.dvo_reg);
 struct drm_display_mode *VAR_12 = ((void*)0);




 if (VAR_11 & VAR_3) {
  struct drm_crtc *VAR_13;
  int VAR_14 = (VAR_11 & VAR_5) ? 1 : 0;

  VAR_13 = FUNC_3(VAR_8, VAR_14);
  if (VAR_13) {
   VAR_12 = FUNC_2(VAR_8, VAR_13);
   if (VAR_12) {
    VAR_12->type |= VAR_2;
    if (VAR_11 & VAR_4)
     VAR_12->flags |= VAR_0;
    if (VAR_11 & VAR_6)
     VAR_12->flags |= VAR_1;
   }
  }
 }

 return VAR_12;
}
