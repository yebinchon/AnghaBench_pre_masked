
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {int dummy; } ;
struct drm_buf {int pending; scalar_t__ used; TYPE_2__* dev_private; } ;
struct TYPE_4__ {scalar_t__ age; } ;
typedef TYPE_2__ drm_radeon_buf_priv_t ;
struct TYPE_3__ {scalar_t__ last_dispatch; } ;



__attribute__((used)) static void FUNC_0(struct drm_device *VAR_0, struct drm_master *VAR_1, struct drm_buf *VAR_2)
{
 drm_radeon_buf_priv_t *VAR_3 = VAR_2->dev_private;
 struct drm_radeon_master_private *VAR_4 = VAR_1->driver_priv;

 VAR_3->age = ++VAR_4->sarea_priv->last_dispatch;
 VAR_2->pending = 1;
 VAR_2->used = 0;
}
