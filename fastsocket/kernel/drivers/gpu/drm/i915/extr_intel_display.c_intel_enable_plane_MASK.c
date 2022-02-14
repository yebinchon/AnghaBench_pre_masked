
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum plane { ____Placeholder_plane } plane ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_1,
          enum plane VAR_2, enum pipe VAR_3)
{
 int VAR_4;
 u32 VAR_5;


 FUNC_3(VAR_1, VAR_3);

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 & VAR_0)
  return;

 FUNC_2(VAR_4, VAR_5 | VAR_0);
 FUNC_4(VAR_1, VAR_2);
 FUNC_5(VAR_1->dev, VAR_3);
}
