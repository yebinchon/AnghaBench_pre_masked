
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_crtc*,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 int VAR_6 = 27000;

 return 100000;

 if (FUNC_1(VAR_3, VAR_0)) {
  VAR_6 = 96000;
 } else if (FUNC_1(VAR_3, VAR_2)) {
  if (FUNC_0(VAR_5))
   VAR_6 = 100000;
  else
   VAR_6 = 96000;
 } else if (FUNC_1(VAR_3, VAR_1)) {
  VAR_6 = 100000;
 }

 return VAR_6;
}
