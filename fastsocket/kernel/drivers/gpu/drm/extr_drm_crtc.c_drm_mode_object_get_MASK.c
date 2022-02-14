
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_mode_object {int id; int type; } ;
struct TYPE_2__ {int idr_mutex; int crtc_idr; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct drm_mode_object*,int,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3,
          struct drm_mode_object *VAR_4, uint32_t VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

again:
 if (FUNC_2(&VAR_3->mode_config.crtc_idr, VAR_2) == 0) {
  FUNC_0("Ran out memory getting a mode number\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_3->mode_config.idr_mutex);
 VAR_7 = FUNC_1(&VAR_3->mode_config.crtc_idr, VAR_4, 1, &VAR_6);
 FUNC_4(&VAR_3->mode_config.idr_mutex);
 if (VAR_7 == -VAR_0)
  goto again;
 else if (VAR_7)
  return VAR_7;

 VAR_4->id = VAR_6;
 VAR_4->type = VAR_5;
 return 0;
}
