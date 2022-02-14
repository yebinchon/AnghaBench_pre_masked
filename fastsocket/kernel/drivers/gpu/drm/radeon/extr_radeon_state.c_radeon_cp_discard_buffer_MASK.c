
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {int pending; scalar_t__ used; TYPE_3__* dev_private; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_6__ {scalar_t__ age; } ;
typedef TYPE_3__ drm_radeon_buf_priv_t ;
struct TYPE_4__ {scalar_t__ last_dispatch; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct drm_device *VAR_3, struct drm_master *VAR_4, struct drm_buf *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 struct drm_radeon_master_private *VAR_7 = VAR_4->driver_priv;
 drm_radeon_buf_priv_t *VAR_8 = VAR_5->dev_private;
 VAR_2;

 VAR_8->age = ++VAR_7->sarea_priv->last_dispatch;


 if ((VAR_6->flags & VAR_1) >= VAR_0) {
  FUNC_1(3);
  FUNC_2(VAR_8->age);
  FUNC_0();
 } else {
  FUNC_1(2);
  FUNC_3(VAR_8->age);
  FUNC_0();
 }

 VAR_5->pending = 1;
 VAR_5->used = 0;
}
