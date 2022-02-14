
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dynpm_idle_work; int mutex; int pm_method; int dynpm_planned_action; int dynpm_state; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_device* FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_7,
        struct device_attribute *VAR_8,
        const char *VAR_9,
        size_t VAR_10)
{
 struct drm_device *VAR_11 = FUNC_3(FUNC_7(VAR_7));
 struct radeon_device *VAR_12 = VAR_11->dev_private;


 if (FUNC_6("dynpm", VAR_9, FUNC_5("dynpm")) == 0) {
  FUNC_1(&VAR_12->pm.mutex);
  VAR_12->pm.pm_method = VAR_5;
  VAR_12->pm.dynpm_state = VAR_3;
  VAR_12->pm.dynpm_planned_action = VAR_0;
  FUNC_2(&VAR_12->pm.mutex);
 } else if (FUNC_6("profile", VAR_9, FUNC_5("profile")) == 0) {
  FUNC_1(&VAR_12->pm.mutex);

  VAR_12->pm.dynpm_state = VAR_2;
  VAR_12->pm.dynpm_planned_action = VAR_1;
  VAR_12->pm.pm_method = VAR_6;
  FUNC_2(&VAR_12->pm.mutex);
  FUNC_0(&VAR_12->pm.dynpm_idle_work);
 } else {
  VAR_10 = -VAR_4;
  goto fail;
 }
 FUNC_4(VAR_12);
fail:
 return VAR_10;
}
