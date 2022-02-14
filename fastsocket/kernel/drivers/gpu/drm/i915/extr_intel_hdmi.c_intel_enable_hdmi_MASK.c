
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int sdvox_reg; scalar_t__ has_audio; } ;
struct TYPE_4__ {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {int pipe; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct intel_hdmi* FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_hdmi *VAR_7 = FUNC_5(&VAR_4->base);
 u32 VAR_8;
 u32 VAR_9 = VAR_2;

 if (VAR_7->has_audio)
  VAR_9 |= VAR_1;

 VAR_8 = FUNC_2(VAR_7->sdvox_reg);



 if (FUNC_0(VAR_5)) {
  struct drm_crtc *VAR_10 = VAR_4->base.crtc;
  int VAR_11 = VAR_10 ? FUNC_6(VAR_10)->pipe : -1;


  if (VAR_11 == VAR_0)
   VAR_9 |= VAR_3;
 }




 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_7->sdvox_reg, VAR_8 & ~VAR_2);
  FUNC_4(VAR_7->sdvox_reg);
 }

 VAR_8 |= VAR_9;

 FUNC_3(VAR_7->sdvox_reg, VAR_8);
 FUNC_4(VAR_7->sdvox_reg);




 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_7->sdvox_reg, VAR_8);
  FUNC_4(VAR_7->sdvox_reg);
 }
}
