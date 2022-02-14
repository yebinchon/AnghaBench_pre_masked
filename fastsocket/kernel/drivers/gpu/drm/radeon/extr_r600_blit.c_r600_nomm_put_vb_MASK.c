
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {TYPE_3__* blit_vb; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_6__ {TYPE_1__* file_priv; scalar_t__ used; } ;
struct TYPE_4__ {int master; } ;


 int FUNC_0 (struct drm_device*,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 drm_radeon_private_t *VAR_1 = VAR_0->dev_private;

 VAR_1->blit_vb->used = 0;
 FUNC_0(VAR_0, VAR_1->blit_vb->file_priv->master, VAR_1->blit_vb);
}
