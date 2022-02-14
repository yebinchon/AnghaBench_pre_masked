
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pm_method; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_0(FUNC_2(VAR_2));
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 int VAR_7 = VAR_6->pm.pm_method;

 return FUNC_1(VAR_4, VAR_0, "%s\n",
   (VAR_7 == VAR_1) ? "dynpm" : "profile");
}
