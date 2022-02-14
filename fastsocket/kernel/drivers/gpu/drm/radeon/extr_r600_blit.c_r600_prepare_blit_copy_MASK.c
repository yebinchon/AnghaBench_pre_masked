
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {TYPE_1__* blit_vb; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_4__ {struct drm_file* file_priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct drm_device*) ;

int
FUNC_4(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 drm_radeon_private_t *VAR_2 = VAR_0->dev_private;
 int VAR_3;
 FUNC_0("\n");

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->blit_vb->file_priv = VAR_1;

 FUNC_2(VAR_2);
 FUNC_3(VAR_0);

 return 0;
}
