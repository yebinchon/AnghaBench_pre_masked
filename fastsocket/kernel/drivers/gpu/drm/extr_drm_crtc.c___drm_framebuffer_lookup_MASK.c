
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_mode_object {scalar_t__ type; scalar_t__ id; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_2__ {int idr_mutex; int crtc_idr; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 scalar_t__ VAR_0 ;
 struct drm_mode_object* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_framebuffer* FUNC_3 (struct drm_mode_object*) ;

__attribute__((used)) static struct drm_framebuffer *FUNC_4(struct drm_device *VAR_1,
       uint32_t VAR_2)
{
 struct drm_mode_object *VAR_3 = ((void*)0);
 struct drm_framebuffer *VAR_4;

 FUNC_1(&VAR_1->mode_config.idr_mutex);
 VAR_3 = FUNC_0(&VAR_1->mode_config.crtc_idr, VAR_2);
 if (!VAR_3 || (VAR_3->type != VAR_0) || (VAR_3->id != VAR_2))
  VAR_4 = ((void*)0);
 else
  VAR_4 = FUNC_3(VAR_3);
 FUNC_2(&VAR_1->mode_config.idr_mutex);

 return VAR_4;
}
