
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_crtc; int crtc_list; int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_crtc_funcs {int dummy; } ;
struct TYPE_4__ {int * properties; } ;
struct drm_crtc {int invert_dimensions; int head; int properties; TYPE_2__ base; int mutex; struct drm_crtc_funcs const* funcs; struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,TYPE_2__*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(struct drm_device *VAR_1, struct drm_crtc *VAR_2,
     const struct drm_crtc_funcs *VAR_3)
{
 int VAR_4;

 VAR_2->dev = VAR_1;
 VAR_2->funcs = VAR_3;
 VAR_2->invert_dimensions = 0;

 FUNC_1(VAR_1);
 FUNC_4(&VAR_2->mutex);
 FUNC_5(&VAR_2->mutex, &VAR_1->mode_config.mutex);

 VAR_4 = FUNC_0(VAR_1, &VAR_2->base, VAR_0);
 if (VAR_4)
  goto out;

 VAR_2->base.properties = &VAR_2->properties;

 FUNC_3(&VAR_2->head, &VAR_1->mode_config.crtc_list);
 VAR_1->mode_config.num_crtc++;

 out:
 FUNC_2(VAR_1);

 return VAR_4;
}
