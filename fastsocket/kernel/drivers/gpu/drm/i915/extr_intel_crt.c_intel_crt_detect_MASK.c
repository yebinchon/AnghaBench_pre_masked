
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_load_detect_pipe {int dummy; } ;
struct intel_crt {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int status; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_crt* FUNC_2 (struct drm_connector*) ;
 scalar_t__ FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct intel_crt*) ;
 scalar_t__ FUNC_6 (struct drm_connector*,int *,struct intel_load_detect_pipe*) ;
 int FUNC_7 (struct drm_connector*,struct intel_load_detect_pipe*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_8(struct drm_connector *VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct intel_crt *VAR_6 = FUNC_2(VAR_3);
 enum drm_connector_status VAR_7;
 struct intel_load_detect_pipe VAR_8;

 if (FUNC_1(VAR_5)) {




  if (FUNC_4(VAR_3)) {
   FUNC_0("CRT detected via hotplug\n");
   return VAR_0;
  } else
   FUNC_0("CRT not detected via hotplug\n");
 }

 if (FUNC_3(VAR_3))
  return VAR_0;





 if (FUNC_1(VAR_5))
  return VAR_1;

 if (!VAR_4)
  return VAR_3->status;


 if (FUNC_6(VAR_3, ((void*)0), &VAR_8)) {
  if (FUNC_3(VAR_3))
   VAR_7 = VAR_0;
  else
   VAR_7 = FUNC_5(VAR_6);
  FUNC_7(VAR_3, &VAR_8);
 } else
  VAR_7 = VAR_2;

 return VAR_7;
}
