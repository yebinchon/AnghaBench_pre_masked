
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int drm_i915_private_t ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_9)
{
 drm_i915_private_t *VAR_10 = (drm_i915_private_t *) VAR_9->dev_private;
 u32 VAR_11;

 if (FUNC_0(VAR_9))
  VAR_11 = VAR_7 |
         VAR_5 |
         VAR_3;
 else
  VAR_11 = VAR_8 |
         VAR_6 |
         VAR_4;

 FUNC_2(VAR_1, FUNC_1(VAR_1));
 FUNC_2(VAR_2, ~VAR_11);
 FUNC_2(VAR_0, VAR_11);
 FUNC_3(VAR_0);

 FUNC_4(VAR_9);
}
