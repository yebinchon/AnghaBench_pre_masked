
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int enabled; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int * pipe_to_crtc_mapping; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_crtc *VAR_7 =
  FUNC_5(VAR_6->pipe_to_crtc_mapping[VAR_2]);
 struct intel_crtc *VAR_8 =
  FUNC_5(VAR_6->pipe_to_crtc_mapping[VAR_3]);
 uint32_t VAR_9;




 if (!VAR_7->base.enabled && !VAR_8->base.enabled) {
  FUNC_4(FUNC_2(FUNC_1(VAR_2)) & VAR_1);
  FUNC_4(FUNC_2(FUNC_1(VAR_3)) & VAR_1);

  VAR_9 = FUNC_2(VAR_4);
  VAR_9 &= ~VAR_0;
  FUNC_0("disabling fdi C rx\n");
  FUNC_3(VAR_4, VAR_9);
 }
}
