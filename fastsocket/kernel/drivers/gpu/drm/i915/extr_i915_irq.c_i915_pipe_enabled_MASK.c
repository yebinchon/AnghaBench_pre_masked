
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ dev_private; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef int drm_i915_private_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_1, int VAR_2)
{
 drm_i915_private_t *VAR_3 = (drm_i915_private_t *) VAR_1->dev_private;
 enum transcoder VAR_4 = FUNC_2(VAR_3,
              VAR_2);

 return FUNC_0(FUNC_1(VAR_4)) & VAR_0;
}
