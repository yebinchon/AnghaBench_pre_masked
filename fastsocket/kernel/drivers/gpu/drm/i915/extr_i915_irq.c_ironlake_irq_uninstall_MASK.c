
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_i915_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_10)
{
 drm_i915_private_t *VAR_11 = (drm_i915_private_t *) VAR_10->dev_private;

 if (!VAR_11)
  return;

 FUNC_1(VAR_6, 0xffffffff);

 FUNC_1(VAR_2, 0xffffffff);
 FUNC_1(VAR_0, 0x0);
 FUNC_1(VAR_1, FUNC_0(VAR_1));

 FUNC_1(VAR_5, 0xffffffff);
 FUNC_1(VAR_3, 0x0);
 FUNC_1(VAR_4, FUNC_0(VAR_4));

 FUNC_1(VAR_9, 0xffffffff);
 FUNC_1(VAR_7, 0x0);
 FUNC_1(VAR_8, FUNC_0(VAR_8));
}
