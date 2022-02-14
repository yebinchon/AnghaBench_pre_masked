
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int) ;

void FUNC_4(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;

 if (!FUNC_2(VAR_2))
  return;


 FUNC_3(VAR_2, 1);



 if (FUNC_0(VAR_0) & VAR_1)
  FUNC_1(VAR_0, 0);
}
