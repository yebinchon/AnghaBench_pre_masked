
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int cpu_transcoder; } ;
struct drm_i915_private {struct drm_crtc** pipe_to_crtc_mapping; } ;
struct drm_crtc {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 struct intel_crtc* FUNC_0 (struct drm_crtc*) ;

enum transcoder FUNC_1(struct drm_i915_private *VAR_0,
          enum pipe VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->pipe_to_crtc_mapping[VAR_1];
 struct intel_crtc *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->cpu_transcoder;
}
