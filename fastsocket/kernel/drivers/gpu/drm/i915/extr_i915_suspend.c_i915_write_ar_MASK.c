
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_2, u16 VAR_3, u8 VAR_4, u8 VAR_5, u16 VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_2->dev_private;

 FUNC_0(VAR_3);
 FUNC_1(VAR_1, VAR_6 | VAR_4);
 FUNC_1(VAR_0, VAR_5);
}
