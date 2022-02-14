
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;

 if (FUNC_0(VAR_0)) {

  FUNC_1(VAR_2, FUNC_0(VAR_2) | VAR_1);
  FUNC_3(((FUNC_0(VAR_2) & VAR_3) == VAR_4),
    50);

  FUNC_1(VAR_0, 0);
  FUNC_2(VAR_0);

  FUNC_1(VAR_2, FUNC_0(VAR_2) & ~VAR_1);
  FUNC_2(VAR_2);
 }
}
