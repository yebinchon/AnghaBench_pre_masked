
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int dpms_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {int base; struct drm_device* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 struct drm_connector* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct drm_connector *VAR_4 = FUNC_3(VAR_1);
 struct drm_device *VAR_5 = VAR_4->dev;
 uint64_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_4->base,
         VAR_5->mode_config.dpms_property,
         &VAR_6);
 if (VAR_7)
  return 0;

 return FUNC_2(VAR_3, VAR_0, "%s\n",
   FUNC_0((int)VAR_6));
}
