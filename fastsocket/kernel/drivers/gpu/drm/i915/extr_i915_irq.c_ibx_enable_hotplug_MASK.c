
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_i915_private_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_10)
{
 drm_i915_private_t *VAR_11 = (drm_i915_private_t *) VAR_10->dev_private;
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_0);
 VAR_12 &= ~(VAR_9|VAR_6|VAR_3);
 VAR_12 |= VAR_7 | VAR_8;
 VAR_12 |= VAR_4 | VAR_5;
 VAR_12 |= VAR_1 | VAR_2;
 FUNC_1(VAR_0, VAR_12);
}
