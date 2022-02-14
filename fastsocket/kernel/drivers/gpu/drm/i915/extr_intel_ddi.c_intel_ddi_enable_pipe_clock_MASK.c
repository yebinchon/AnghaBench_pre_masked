
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct intel_crtc {int cpu_transcoder; struct drm_crtc base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct intel_encoder* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct intel_encoder*) ;

void FUNC_5(struct intel_crtc *VAR_1)
{
 struct drm_crtc *VAR_2 = &VAR_1->base;
 struct drm_i915_private *VAR_3 = VAR_2->dev->dev_private;
 struct intel_encoder *VAR_4 = FUNC_3(VAR_2);
 enum port VAR_5 = FUNC_4(VAR_4);
 enum transcoder VAR_6 = VAR_1->cpu_transcoder;

 if (VAR_6 != VAR_0)
  FUNC_0(FUNC_1(VAR_6),
      FUNC_2(VAR_5));
}
