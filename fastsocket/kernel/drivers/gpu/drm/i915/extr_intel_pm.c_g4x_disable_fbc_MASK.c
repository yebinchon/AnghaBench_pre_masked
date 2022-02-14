
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 & VAR_1) {
  VAR_4 &= ~VAR_1;
  FUNC_2(VAR_0, VAR_4);

  FUNC_0("disabled FBC\n");
 }
}
