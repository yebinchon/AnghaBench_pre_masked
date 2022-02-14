
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm {int (* fan_set ) (struct nouveau_therm*,scalar_t__) ;} ;
struct nouveau_pm_level {scalar_t__ fanspeed; scalar_t__ volt_min; } ;
struct TYPE_2__ {scalar_t__ supported; } ;
struct nouveau_pm {int (* voltage_set ) (struct drm_device*,scalar_t__) ;TYPE_1__ voltage; } ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 struct nouveau_pm* FUNC_2 (struct drm_device*) ;
 struct nouveau_therm* FUNC_3 (int ) ;
 int FUNC_4 (struct nouveau_therm*,scalar_t__) ;
 int FUNC_5 (struct drm_device*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_1, struct nouveau_pm_level *VAR_2,
         struct nouveau_pm_level *VAR_3, struct nouveau_pm_level *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_1(VAR_1);
 struct nouveau_pm *VAR_6 = FUNC_2(VAR_1);
 struct nouveau_therm *VAR_7 = FUNC_3(VAR_5->device);
 int VAR_8;





 if (VAR_7 && VAR_7->fan_set &&
  VAR_3->fanspeed && VAR_4->fanspeed && VAR_4->fanspeed > VAR_3->fanspeed) {
  VAR_8 = VAR_7->fan_set(VAR_7, VAR_2->fanspeed);
  if (VAR_8 && VAR_8 != -VAR_0) {
   FUNC_0(VAR_5, "fanspeed set failed: %d\n", VAR_8);
  }
 }

 if (VAR_6->voltage.supported && VAR_6->voltage_set) {
  if (VAR_2->volt_min && VAR_4->volt_min > VAR_3->volt_min) {
   VAR_8 = VAR_6->voltage_set(VAR_1, VAR_2->volt_min);
   if (VAR_8) {
    FUNC_0(VAR_5, "voltage set failed: %d\n", VAR_8);
    return VAR_8;
   }
  }
 }

 return 0;
}
