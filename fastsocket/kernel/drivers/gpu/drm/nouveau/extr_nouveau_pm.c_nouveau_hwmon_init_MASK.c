
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_therm {scalar_t__ (* temp_get ) (struct nouveau_therm*) ;scalar_t__ (* fan_get ) (struct nouveau_therm*) ;scalar_t__ (* fan_sense ) (struct nouveau_therm*) ;int attr_set; int attr_get; } ;
struct nouveau_pm {struct device* hwmon; } ;
struct nouveau_drm {int device; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct nouveau_drm*,char*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct drm_device*) ;
 int VAR_1 ;
 struct device* FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 struct nouveau_pm* FUNC_7 (struct drm_device*) ;
 struct nouveau_therm* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct nouveau_therm*) ;
 scalar_t__ FUNC_10 (struct nouveau_therm*) ;
 scalar_t__ FUNC_11 (struct nouveau_therm*) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int
FUNC_13(struct drm_device *VAR_5)
{
 struct nouveau_pm *VAR_6 = FUNC_7(VAR_5);
 VAR_6->hwmon = ((void*)0);
 return 0;

}
