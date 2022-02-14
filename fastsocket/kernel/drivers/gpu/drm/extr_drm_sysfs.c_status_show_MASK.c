
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_connector {TYPE_2__* dev; TYPE_3__* funcs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_6__ {int (* detect ) (struct drm_connector*,int) ;} ;
struct TYPE_4__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,char*) ;
 int FUNC_4 (struct drm_connector*,int) ;
 struct drm_connector* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct drm_connector *VAR_4 = FUNC_5(VAR_1);
 enum drm_connector_status VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_4->dev->mode_config.mutex);
 if (VAR_6)
  return VAR_6;

 VAR_5 = VAR_4->funcs->detect(VAR_4, 1);
 FUNC_2(&VAR_4->dev->mode_config.mutex);

 return FUNC_3(VAR_3, VAR_0, "%s\n",
   FUNC_0(VAR_5));
}
