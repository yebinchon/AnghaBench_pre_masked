
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 u32 VAR_4;


 if (FUNC_2(VAR_2))
  return -1;

 VAR_4 = FUNC_0(VAR_0);


 if ((VAR_4 & VAR_1) == 0)
  return -1;


 if (FUNC_1(VAR_2))
  return (VAR_4 >> 29) & 0x3;


 return 1;
}
