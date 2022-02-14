
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_mode_object {scalar_t__ type; scalar_t__ id; } ;
struct TYPE_2__ {int idr_mutex; int crtc_idr; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct drm_mode_object* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct drm_mode_object *FUNC_4(struct drm_device *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3)
{
 struct drm_mode_object *VAR_4 = ((void*)0);



 FUNC_0(VAR_3 == VAR_0);

 FUNC_2(&VAR_1->mode_config.idr_mutex);
 VAR_4 = FUNC_1(&VAR_1->mode_config.crtc_idr, VAR_2);
 if (!VAR_4 || (VAR_4->type != VAR_3) || (VAR_4->id != VAR_2))
  VAR_4 = ((void*)0);
 FUNC_3(&VAR_1->mode_config.idr_mutex);

 return VAR_4;
}
