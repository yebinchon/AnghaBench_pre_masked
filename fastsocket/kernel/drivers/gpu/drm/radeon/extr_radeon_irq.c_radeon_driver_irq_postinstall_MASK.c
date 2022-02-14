
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int max_vblank_count; scalar_t__ dev_private; } ;
struct TYPE_2__ {int flags; int swi_queue; int swi_emitted; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_device*,int ,int) ;

int FUNC_3(struct drm_device *VAR_3)
{
 drm_radeon_private_t *VAR_4 =
     (drm_radeon_private_t *) VAR_3->dev_private;

 FUNC_1(&VAR_4->swi_emitted, 0);
 FUNC_0(&VAR_4->swi_queue);

 VAR_3->max_vblank_count = 0x001fffff;

 if ((VAR_4->flags & VAR_1) >= VAR_0)
  return 0;

 FUNC_2(VAR_3, VAR_2, 1);

 return 0;
}
