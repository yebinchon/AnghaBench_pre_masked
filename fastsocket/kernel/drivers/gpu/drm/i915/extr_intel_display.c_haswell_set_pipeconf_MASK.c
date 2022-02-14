
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_crtc {int cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_7,
     struct drm_display_mode *VAR_8,
     bool VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_7->dev->dev_private;
 struct intel_crtc *VAR_11 = FUNC_4(VAR_7);
 enum transcoder VAR_12 = VAR_11->cpu_transcoder;
 uint32_t VAR_13;

 VAR_13 = FUNC_0(FUNC_2(VAR_12));

 VAR_13 &= ~(VAR_1 | VAR_2);
 if (VAR_9)
  VAR_13 |= (VAR_1 | VAR_3);

 VAR_13 &= ~VAR_5;
 if (VAR_8->flags & VAR_0)
  VAR_13 |= VAR_4;
 else
  VAR_13 |= VAR_6;

 FUNC_1(FUNC_2(VAR_12), VAR_13);
 FUNC_3(FUNC_2(VAR_12));
}
