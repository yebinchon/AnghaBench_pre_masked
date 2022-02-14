
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_i915_private_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(struct drm_device *VAR_0, int VAR_1)
{
 drm_i915_private_t *VAR_2 = (drm_i915_private_t *) VAR_0->dev_private;
 int VAR_3 = FUNC_2(VAR_1);

 if (!FUNC_3(VAR_0, VAR_1)) {
  FUNC_0("trying to get vblank count for disabled "
     "pipe %c\n", FUNC_4(VAR_1));
  return 0;
 }

 return FUNC_1(VAR_3);
}
