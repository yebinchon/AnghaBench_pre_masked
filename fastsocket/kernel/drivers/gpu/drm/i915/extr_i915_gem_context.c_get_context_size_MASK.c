
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 int VAR_4;
 u32 VAR_5;

 switch (FUNC_5(VAR_2)->gen) {
 case 6:
  VAR_5 = FUNC_4(VAR_0);
  VAR_4 = FUNC_1(VAR_5) * 64;
  break;
 case 7:
  VAR_5 = FUNC_4(VAR_1);
  if (FUNC_6(VAR_2))
   VAR_4 = FUNC_3(VAR_5) * 64;
  else
   VAR_4 = FUNC_2(VAR_5) * 64;
  break;
 default:
  FUNC_0();
 }

 return VAR_4;
}
