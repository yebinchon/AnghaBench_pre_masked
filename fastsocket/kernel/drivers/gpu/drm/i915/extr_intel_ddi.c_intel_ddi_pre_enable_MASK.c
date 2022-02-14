
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {TYPE_1__* dev; struct drm_crtc* crtc; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_dp {int dummy; } ;
struct intel_crtc {scalar_t__ ddi_pll_sel; } ;
struct drm_i915_private {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 struct intel_dp* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct intel_encoder*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*,int ) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*,int) ;
 int FUNC_10 (struct intel_dp*) ;
 struct intel_crtc* FUNC_11 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_12(struct intel_encoder *VAR_4)
{
 struct drm_encoder *VAR_5 = &VAR_4->base;
 struct drm_crtc *VAR_6 = VAR_5->crtc;
 struct drm_i915_private *VAR_7 = VAR_5->dev->dev_private;
 struct intel_crtc *VAR_8 = FUNC_11(VAR_6);
 enum port VAR_9 = FUNC_4(VAR_4);
 int VAR_10 = VAR_4->type;

 if (VAR_10 == VAR_2) {
  struct intel_dp *VAR_11 = FUNC_3(VAR_5);
  FUNC_10(VAR_11);
  FUNC_8(VAR_11);
  FUNC_9(VAR_11, 1);
 }

 FUNC_2(VAR_8->ddi_pll_sel == VAR_3);
 FUNC_0(FUNC_1(VAR_9), VAR_8->ddi_pll_sel);

 if (VAR_10 == VAR_1 || VAR_10 == VAR_2) {
  struct intel_dp *VAR_12 = FUNC_3(VAR_5);

  FUNC_6(VAR_12, VAR_0);
  FUNC_7(VAR_12);
  FUNC_5(VAR_12);
 }
}
