
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct drm_crtc*) ;
 struct intel_crtc* FUNC_12 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_13(struct drm_crtc *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->dev;
 struct drm_i915_private *VAR_10 = VAR_9->dev_private;
 struct intel_crtc *VAR_11 = FUNC_12(VAR_8);
 enum transcoder VAR_12 = VAR_11->cpu_transcoder;

 FUNC_9(VAR_10, VAR_0);

 FUNC_11(VAR_8);


 FUNC_4(VAR_3, FUNC_3(FUNC_2(VAR_12)));
 FUNC_4(VAR_1, FUNC_3(FUNC_0(VAR_12)));
 FUNC_4(VAR_2, FUNC_3(FUNC_1(VAR_12)));

 FUNC_4(VAR_7, FUNC_3(FUNC_8(VAR_12)));
 FUNC_4(VAR_4, FUNC_3(FUNC_5(VAR_12)));
 FUNC_4(VAR_6, FUNC_3(FUNC_6(VAR_12)));
 FUNC_4(VAR_5, FUNC_3(FUNC_7(VAR_12)));

 FUNC_10(VAR_10, VAR_12);
}
