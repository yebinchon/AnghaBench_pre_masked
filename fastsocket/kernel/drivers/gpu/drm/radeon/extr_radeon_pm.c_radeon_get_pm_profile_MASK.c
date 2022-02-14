
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int profile; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
         struct device_attribute *VAR_6,
         char *VAR_7)
{
 struct drm_device *VAR_8 = FUNC_0(FUNC_2(VAR_5));
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 int VAR_10 = VAR_9->pm.profile;

 return FUNC_1(VAR_7, VAR_0, "%s\n",
   (VAR_10 == VAR_1) ? "auto" :
   (VAR_10 == VAR_3) ? "low" :
   (VAR_10 == VAR_4) ? "mid" :
   (VAR_10 == VAR_2) ? "high" : "default");
}
