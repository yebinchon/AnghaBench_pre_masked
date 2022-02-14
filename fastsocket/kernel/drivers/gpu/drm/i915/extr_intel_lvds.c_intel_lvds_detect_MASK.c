
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_1(struct drm_connector *VAR_2, bool VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 enum drm_connector_status VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 != VAR_1)
  return VAR_5;

 return VAR_0;
}
