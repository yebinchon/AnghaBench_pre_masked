
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;

int FUNC_3(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_2->dev_private;
 FUNC_0("\n");

 if ((VAR_5->flags & VAR_1) >= VAR_0)
  return FUNC_1(VAR_2, VAR_4);
 else
  return FUNC_2(VAR_2, VAR_4);
}
