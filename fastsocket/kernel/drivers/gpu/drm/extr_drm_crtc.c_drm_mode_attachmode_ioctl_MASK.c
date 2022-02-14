
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_object {int dummy; } ;
struct drm_mode_modeinfo {int dummy; } ;
struct drm_mode_mode_cmd {int connector_id; struct drm_mode_modeinfo mode; } ;
struct drm_file {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_display_mode*,struct drm_mode_modeinfo*) ;
 int FUNC_3 (struct drm_device*,struct drm_connector*,struct drm_display_mode*) ;
 struct drm_display_mode* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,struct drm_display_mode*) ;
 struct drm_mode_object* FUNC_6 (struct drm_device*,int ,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 struct drm_connector* FUNC_9 (struct drm_mode_object*) ;

int FUNC_10(struct drm_device *VAR_4,
         void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_mode_mode_cmd *VAR_7 = VAR_5;
 struct drm_connector *VAR_8;
 struct drm_display_mode *VAR_9;
 struct drm_mode_object *VAR_10;
 struct drm_mode_modeinfo *VAR_11 = &VAR_7->mode;
 int VAR_12;

 if (!FUNC_1(VAR_4, VAR_0))
  return -VAR_2;

 FUNC_7(VAR_4);

 VAR_10 = FUNC_6(VAR_4, VAR_7->connector_id, VAR_1);
 if (!VAR_10) {
  VAR_12 = -VAR_2;
  goto out;
 }
 VAR_8 = FUNC_9(VAR_10);

 VAR_9 = FUNC_4(VAR_4);
 if (!VAR_9) {
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_12 = FUNC_2(VAR_9, VAR_11);
 if (VAR_12) {
  FUNC_0("Invalid mode\n");
  FUNC_5(VAR_4, VAR_9);
  goto out;
 }

 FUNC_3(VAR_4, VAR_8, VAR_9);
out:
 FUNC_8(VAR_4);
 return VAR_12;
}
