
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * dev_private; } ;
typedef int drm_i915_private_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 () ;

void FUNC_5(struct drm_device * VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev_private;




 if (!VAR_2)
  return;

 if (FUNC_0(VAR_1, VAR_0)) {
  FUNC_3(VAR_1);
  FUNC_4();
  return;
 }

 FUNC_2(VAR_1);

 FUNC_1(VAR_1);
}
