
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct drm_device *VAR_0, u16 VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_0->dev_private;

 FUNC_1(VAR_1, VAR_3);
 return FUNC_0(VAR_2);
}
