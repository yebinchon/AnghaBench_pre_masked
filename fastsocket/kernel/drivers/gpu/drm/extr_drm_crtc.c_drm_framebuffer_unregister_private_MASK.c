
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {struct drm_device* dev; } ;
struct TYPE_2__ {int fb_lock; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_device*,struct drm_framebuffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_framebuffer *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_1(&VAR_1->mode_config.fb_lock);

 FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->mode_config.fb_lock);
}
