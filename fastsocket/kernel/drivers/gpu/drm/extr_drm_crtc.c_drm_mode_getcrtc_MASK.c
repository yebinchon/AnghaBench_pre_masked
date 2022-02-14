
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_object {int dummy; } ;
struct drm_mode_crtc {int mode_valid; int mode; scalar_t__ fb_id; int gamma_size; int y; int x; int crtc_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int mode; scalar_t__ enabled; TYPE_2__* fb; int gamma_size; int y; int x; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int *,int *) ;
 struct drm_mode_object* FUNC_2 (struct drm_device*,int ,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 struct drm_crtc* FUNC_5 (struct drm_mode_object*) ;

int FUNC_6(struct drm_device *VAR_3,
       void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_mode_crtc *VAR_6 = VAR_4;
 struct drm_crtc *VAR_7;
 struct drm_mode_object *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_0(VAR_3, VAR_0))
  return -VAR_2;

 FUNC_3(VAR_3);

 VAR_8 = FUNC_2(VAR_3, VAR_6->crtc_id,
       VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }
 VAR_7 = FUNC_5(VAR_8);

 VAR_6->x = VAR_7->x;
 VAR_6->y = VAR_7->y;
 VAR_6->gamma_size = VAR_7->gamma_size;
 if (VAR_7->fb)
  VAR_6->fb_id = VAR_7->fb->base.id;
 else
  VAR_6->fb_id = 0;

 if (VAR_7->enabled) {

  FUNC_1(&VAR_6->mode, &VAR_7->mode);
  VAR_6->mode_valid = 1;

 } else {
  VAR_6->mode_valid = 0;
 }

out:
 FUNC_4(VAR_3);
 return VAR_9;
}
