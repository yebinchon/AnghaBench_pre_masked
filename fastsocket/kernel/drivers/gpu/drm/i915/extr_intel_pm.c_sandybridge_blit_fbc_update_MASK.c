
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5;


 FUNC_3(VAR_4);
 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= VAR_1 <<
  VAR_2;
 FUNC_1(VAR_0, VAR_5);
 VAR_5 |= VAR_1;
 FUNC_1(VAR_0, VAR_5);
 VAR_5 &= ~(VAR_1 <<
    VAR_2);
 FUNC_1(VAR_0, VAR_5);
 FUNC_2(VAR_0);
 FUNC_4(VAR_4);
}
