
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_13->dev_private;
 uint32_t VAR_15;

 FUNC_0(VAR_9, 0);
 FUNC_0(VAR_10, VAR_11 |
     VAR_5 |
     VAR_1);
 FUNC_0(VAR_8, 0);
 VAR_15 = VAR_12 |
  VAR_7 |
  VAR_6;
 if (FUNC_1(VAR_13))
  VAR_15 |= VAR_4;
 FUNC_0(VAR_3, VAR_15);


 FUNC_0(VAR_0,
     FUNC_2(VAR_2));
}
