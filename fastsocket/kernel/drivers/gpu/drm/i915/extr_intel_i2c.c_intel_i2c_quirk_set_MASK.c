
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2, bool VAR_3)
{
 u32 VAR_4;


 if (!FUNC_2(VAR_2->dev))
  return;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_1(VAR_1, VAR_4);
}
