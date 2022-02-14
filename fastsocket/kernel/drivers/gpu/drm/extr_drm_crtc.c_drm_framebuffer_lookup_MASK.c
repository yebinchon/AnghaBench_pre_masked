
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_framebuffer {int refcount; } ;
struct TYPE_2__ {int fb_lock; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 struct drm_framebuffer* FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct drm_framebuffer *FUNC_4(struct drm_device *VAR_0,
            uint32_t VAR_1)
{
 struct drm_framebuffer *VAR_2;

 FUNC_2(&VAR_0->mode_config.fb_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->refcount);
 FUNC_3(&VAR_0->mode_config.fb_lock);

 return VAR_2;
}
