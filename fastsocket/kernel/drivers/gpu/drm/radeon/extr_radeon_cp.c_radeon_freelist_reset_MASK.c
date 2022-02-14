
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {TYPE_1__* dev_private; struct drm_device_dma* dma; } ;
struct drm_buf {TYPE_2__* dev_private; } ;
struct TYPE_3__ {scalar_t__ last_buf; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_4__ {scalar_t__ age; } ;
typedef TYPE_2__ drm_radeon_buf_priv_t ;



void FUNC_0(struct drm_device * VAR_0)
{
 struct drm_device_dma *VAR_1 = VAR_0->dma;
 drm_radeon_private_t *VAR_2 = VAR_0->dev_private;
 int VAR_3;

 VAR_2->last_buf = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->buf_count; VAR_3++) {
  struct drm_buf *VAR_4 = VAR_1->buflist[VAR_3];
  drm_radeon_buf_priv_t *VAR_5 = VAR_4->dev_private;
  VAR_5->age = 0;
 }
}
