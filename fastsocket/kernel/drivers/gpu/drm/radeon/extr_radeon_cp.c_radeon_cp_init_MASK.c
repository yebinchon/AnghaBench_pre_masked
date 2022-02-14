
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_6__ {int func; } ;
typedef TYPE_2__ drm_radeon_init_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_file*) ;

 int VAR_2 ;




 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,TYPE_2__*,struct drm_file*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,TYPE_2__*,struct drm_file*) ;

int FUNC_6(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 drm_radeon_init_t *VAR_7 = VAR_4;

 FUNC_0(VAR_3, VAR_5);

 if (VAR_7->func == 129)
  FUNC_1(VAR_3);

 switch (VAR_7->func) {
 case 131:
 case 130:
 case 129:
  return FUNC_5(VAR_3, VAR_7, VAR_5);
 case 128:
  return FUNC_3(VAR_3, VAR_7, VAR_5);
 case 132:
  if ((VAR_6->flags & VAR_2) >= VAR_0)
   return FUNC_2(VAR_3);
  else
   return FUNC_4(VAR_3);
 }

 return -VAR_1;
}
