
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pm_method; int mutex; int profile; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drm_device* FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_7,
         struct device_attribute *VAR_8,
         const char *VAR_9,
         size_t VAR_10)
{
 struct drm_device *VAR_11 = FUNC_2(FUNC_7(VAR_7));
 struct radeon_device *VAR_12 = VAR_11->dev_private;

 FUNC_0(&VAR_12->pm.mutex);
 if (VAR_12->pm.pm_method == VAR_1) {
  if (FUNC_6("default", VAR_9, FUNC_5("default")) == 0)
   VAR_12->pm.profile = VAR_3;
  else if (FUNC_6("auto", VAR_9, FUNC_5("auto")) == 0)
   VAR_12->pm.profile = VAR_2;
  else if (FUNC_6("low", VAR_9, FUNC_5("low")) == 0)
   VAR_12->pm.profile = VAR_5;
  else if (FUNC_6("mid", VAR_9, FUNC_5("mid")) == 0)
   VAR_12->pm.profile = VAR_6;
  else if (FUNC_6("high", VAR_9, FUNC_5("high")) == 0)
   VAR_12->pm.profile = VAR_4;
  else {
   VAR_10 = -VAR_0;
   goto fail;
  }
  FUNC_4(VAR_12);
  FUNC_3(VAR_12);
 } else
  VAR_10 = -VAR_0;

fail:
 FUNC_1(&VAR_12->pm.mutex);

 return VAR_10;
}
