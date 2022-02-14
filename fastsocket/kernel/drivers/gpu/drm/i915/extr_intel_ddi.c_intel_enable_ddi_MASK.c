
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_encoder {struct drm_device* dev; struct drm_crtc* crtc; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {int port_reversal; } ;
struct intel_crtc {int pipe; scalar_t__ eld_vld; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_digital_port* FUNC_3 (struct drm_encoder*) ;
 struct intel_dp* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct intel_encoder*) ;
 int FUNC_6 (struct intel_dp*) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_6)
{
 struct drm_encoder *VAR_7 = &VAR_6->base;
 struct drm_crtc *VAR_8 = VAR_7->crtc;
 struct intel_crtc *VAR_9 = FUNC_7(VAR_8);
 int VAR_10 = VAR_9->pipe;
 struct drm_device *VAR_11 = VAR_7->dev;
 struct drm_i915_private *VAR_12 = VAR_11->dev_private;
 enum port VAR_13 = FUNC_5(VAR_6);
 int VAR_14 = VAR_6->type;
 uint32_t VAR_15;

 if (VAR_14 == VAR_5) {
  struct intel_digital_port *VAR_16 =
   FUNC_3(VAR_7);





  FUNC_2(FUNC_0(VAR_13),
      VAR_16->port_reversal | VAR_2);
 } else if (VAR_14 == VAR_4) {
  struct intel_dp *VAR_17 = FUNC_4(VAR_7);

  FUNC_6(VAR_17);
 }

 if (VAR_9->eld_vld) {
  VAR_15 = FUNC_1(VAR_3);
  VAR_15 |= ((VAR_1 | VAR_0) << (VAR_10 * 4));
  FUNC_2(VAR_3, VAR_15);
 }
}
