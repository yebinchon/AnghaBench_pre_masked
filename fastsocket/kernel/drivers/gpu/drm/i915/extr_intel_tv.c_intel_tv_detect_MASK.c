
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_tv {int type; } ;
struct intel_load_detect_pipe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int status; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_tv* FUNC_0 (struct drm_connector*) ;
 scalar_t__ FUNC_1 (struct drm_connector*,struct drm_display_mode*,struct intel_load_detect_pipe*) ;
 int FUNC_2 (struct drm_connector*,struct intel_load_detect_pipe*) ;
 int FUNC_3 (struct intel_tv*,struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*) ;
 struct drm_display_mode* VAR_3 ;

__attribute__((used)) static enum drm_connector_status
FUNC_5(struct drm_connector *VAR_4, bool VAR_5)
{
 struct drm_display_mode VAR_6;
 struct intel_tv *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 VAR_6 = VAR_3[0];

 if (VAR_5) {
  struct intel_load_detect_pipe VAR_9;

  if (FUNC_1(VAR_4, &VAR_6, &VAR_9)) {
   VAR_8 = FUNC_3(VAR_7, VAR_4);
   FUNC_2(VAR_4, &VAR_9);
  } else
   return VAR_2;
 } else
  return VAR_4->status;

 if (VAR_8 < 0)
  return VAR_1;

 VAR_7->type = VAR_8;
 FUNC_4(VAR_4);

 return VAR_0;
}
