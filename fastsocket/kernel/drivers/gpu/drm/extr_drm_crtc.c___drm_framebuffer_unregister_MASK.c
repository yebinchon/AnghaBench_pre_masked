
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; } ;
struct drm_framebuffer {TYPE_2__ base; } ;
struct TYPE_3__ {int idr_mutex; int crtc_idr; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0,
      struct drm_framebuffer *VAR_1)
{
 FUNC_2(&VAR_0->mode_config.idr_mutex);
 FUNC_1(&VAR_0->mode_config.crtc_idr, VAR_1->base.id);
 FUNC_3(&VAR_0->mode_config.idr_mutex);

 VAR_1->base.id = 0;

 FUNC_0(VAR_1);
}
