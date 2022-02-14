
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane {int (* update_colorkey ) (struct drm_plane*,struct drm_intel_sprite_colorkey*) ;} ;
struct drm_plane {int dummy; } ;
struct drm_mode_object {int dummy; } ;
struct drm_intel_sprite_colorkey {int flags; int plane_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_mode_object* FUNC_1 (struct drm_device*,int ,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 struct drm_plane* FUNC_4 (struct drm_mode_object*) ;
 int FUNC_5 (struct drm_plane*,struct drm_intel_sprite_colorkey*) ;
 struct intel_plane* FUNC_6 (struct drm_plane*) ;

int FUNC_7(struct drm_device *VAR_6, void *VAR_7,
         struct drm_file *VAR_8)
{
 struct drm_intel_sprite_colorkey *VAR_9 = VAR_7;
 struct drm_mode_object *VAR_10;
 struct drm_plane *VAR_11;
 struct intel_plane *VAR_12;
 int VAR_13 = 0;

 if (!FUNC_0(VAR_6, VAR_0))
  return -VAR_3;


 if ((VAR_9->flags & (VAR_4 | VAR_5)) == (VAR_4 | VAR_5))
  return -VAR_2;

 FUNC_2(VAR_6);

 VAR_10 = FUNC_1(VAR_6, VAR_9->plane_id, VAR_1);
 if (!VAR_10) {
  VAR_13 = -VAR_2;
  goto out_unlock;
 }

 VAR_11 = FUNC_4(VAR_10);
 VAR_12 = FUNC_6(VAR_11);
 VAR_13 = VAR_12->update_colorkey(VAR_11, VAR_9);

out_unlock:
 FUNC_3(VAR_6);
 return VAR_13;
}
