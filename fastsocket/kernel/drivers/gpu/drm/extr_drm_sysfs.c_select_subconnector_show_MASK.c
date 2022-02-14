
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drm_property {int dummy; } ;
struct TYPE_2__ {struct drm_property* tv_select_subconnector_property; struct drm_property* dvi_i_select_subconnector_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {int connector_type; int base; struct drm_device* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*) ;





 int VAR_0 ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,struct drm_property*,scalar_t__*) ;
 int FUNC_4 (char*,int ,char*,char*) ;
 struct drm_connector* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct drm_connector *VAR_4 = FUNC_5(VAR_1);
 struct drm_device *VAR_5 = VAR_4->dev;
 struct drm_property *VAR_6 = ((void*)0);
 uint64_t VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 switch (VAR_4->connector_type) {
  case 130:
   VAR_6 = VAR_5->mode_config.dvi_i_select_subconnector_property;
   break;
  case 131:
  case 129:
  case 132:
  case 128:
   VAR_6 = VAR_5->mode_config.tv_select_subconnector_property;
   VAR_8 = 1;
   break;
  default:
   FUNC_0("Wrong connector type for this property\n");
   return 0;
 }

 if (!VAR_6) {
  FUNC_0("Unable to find select subconnector property\n");
  return 0;
 }

 VAR_9 = FUNC_3(&VAR_4->base, VAR_6, &VAR_7);
 if (VAR_9)
  return 0;

 return FUNC_4(VAR_3, VAR_0, "%s", VAR_8 ?
   FUNC_2((int)VAR_7) :
   FUNC_1((int)VAR_7));
}
