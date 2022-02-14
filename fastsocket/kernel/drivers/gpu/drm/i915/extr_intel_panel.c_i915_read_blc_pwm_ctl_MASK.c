
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ saveBLC_PWM_CTL2; scalar_t__ saveBLC_PWM_CTL; } ;
struct drm_i915_private {TYPE_1__ regfile; int dev; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static u32 FUNC_4(struct drm_device *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;
 u32 VAR_5;



 if (FUNC_0(VAR_4->dev)) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_4->regfile.saveBLC_PWM_CTL2 == 0) {
   VAR_4->regfile.saveBLC_PWM_CTL2 = VAR_5;
  } else if (VAR_5 == 0) {
   VAR_5 = VAR_4->regfile.saveBLC_PWM_CTL2;
   FUNC_2(VAR_2, VAR_5);
  }
 } else {
  VAR_5 = FUNC_1(VAR_0);
  if (VAR_4->regfile.saveBLC_PWM_CTL == 0) {
   VAR_4->regfile.saveBLC_PWM_CTL = VAR_5;
   if (FUNC_3(VAR_3)->gen >= 4)
    VAR_4->regfile.saveBLC_PWM_CTL2 =
     FUNC_1(VAR_1);
  } else if (VAR_5 == 0) {
   VAR_5 = VAR_4->regfile.saveBLC_PWM_CTL;
   FUNC_2(VAR_0, VAR_5);
   if (FUNC_3(VAR_3)->gen >= 4)
    FUNC_2(VAR_1,
        VAR_4->regfile.saveBLC_PWM_CTL2);
  }
 }

 return VAR_5;
}
