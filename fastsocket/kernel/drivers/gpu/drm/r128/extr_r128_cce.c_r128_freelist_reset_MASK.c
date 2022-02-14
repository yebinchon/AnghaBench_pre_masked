
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ age; } ;
typedef TYPE_1__ drm_r128_buf_priv_t ;



void FUNC_0(struct drm_device *VAR_0)
{
 struct drm_device_dma *VAR_1 = VAR_0->dma;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->buf_count; VAR_2++) {
  struct drm_buf *VAR_3 = VAR_1->buflist[VAR_2];
  drm_r128_buf_priv_t *VAR_4 = VAR_3->dev_private;
  VAR_4->age = 0;
 }
}
