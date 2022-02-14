
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int primary_disabled; int plane; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct drm_device*) ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_5(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 struct intel_crtc *VAR_4 = FUNC_4(VAR_1);
 int VAR_5 = FUNC_0(VAR_4->plane);

 if (VAR_4->primary_disabled)
  return;

 FUNC_2(VAR_5, FUNC_1(VAR_5) & ~VAR_0);

 VAR_4->primary_disabled = 1;
 FUNC_3(VAR_2);
}
