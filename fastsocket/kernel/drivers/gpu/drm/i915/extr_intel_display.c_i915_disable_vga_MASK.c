
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int pdev; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct drm_device *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 u8 VAR_7;
 u32 VAR_8 = FUNC_2(VAR_5);

 FUNC_6(VAR_5->pdev, VAR_2);
 FUNC_4(VAR_0, VAR_4);
 VAR_7 = FUNC_3(VAR_3);
 FUNC_4(VAR_7 | 1<<5, VAR_3);
 FUNC_7(VAR_5->pdev, VAR_2);
 FUNC_5(300);

 FUNC_0(VAR_8, VAR_1);
 FUNC_1(VAR_8);
}
