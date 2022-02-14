
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_2->dev_private;
 FUNC_0("\n");

 FUNC_1(VAR_2, VAR_4);

 if ((VAR_5->flags & VAR_1) >= VAR_0)
  return FUNC_2(VAR_5);
 else
  return FUNC_3(VAR_5);
}
