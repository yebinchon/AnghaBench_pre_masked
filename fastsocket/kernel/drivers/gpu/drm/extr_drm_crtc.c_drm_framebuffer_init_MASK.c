
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer_funcs {int dummy; } ;
struct drm_framebuffer {int head; int base; struct drm_framebuffer_funcs const* funcs; struct drm_device* dev; int filp_head; int refcount; } ;
struct TYPE_2__ {int fb_lock; int fb_list; int num_fb; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_device*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_device *VAR_1, struct drm_framebuffer *VAR_2,
    const struct drm_framebuffer_funcs *VAR_3)
{
 int VAR_4;

 FUNC_5(&VAR_1->mode_config.fb_lock);
 FUNC_3(&VAR_2->refcount);
 FUNC_0(&VAR_2->filp_head);
 VAR_2->dev = VAR_1;
 VAR_2->funcs = VAR_3;

 VAR_4 = FUNC_2(VAR_1, &VAR_2->base, VAR_0);
 if (VAR_4)
  goto out;


 FUNC_1(VAR_2);

 VAR_1->mode_config.num_fb++;
 FUNC_4(&VAR_2->head, &VAR_1->mode_config.fb_list);
out:
 FUNC_6(&VAR_1->mode_config.fb_lock);

 return 0;
}
