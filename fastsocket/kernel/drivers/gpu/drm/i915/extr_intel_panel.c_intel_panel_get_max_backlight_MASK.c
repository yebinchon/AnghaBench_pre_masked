
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (char*) ;

u32 FUNC_3(struct drm_device *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == 0) {



  FUNC_2("fixme: max PWM is zero\n");
  return 1;
 }

 FUNC_0("max backlight PWM = %d\n", VAR_1);
 return VAR_1;
}
