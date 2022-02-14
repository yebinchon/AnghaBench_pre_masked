
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_6)
{
 uint32_t VAR_7 = FUNC_0(VAR_2);

 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_3;
 VAR_7 |= VAR_5;
 VAR_7 |= VAR_0;


 if (FUNC_2(VAR_6->dev))
  VAR_7 &= ~VAR_4;

 FUNC_1(VAR_2, VAR_7);
}
