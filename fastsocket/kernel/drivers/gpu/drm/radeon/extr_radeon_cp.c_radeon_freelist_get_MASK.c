
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {TYPE_2__* dev_private; struct drm_device_dma* dma; } ;
struct drm_buf {scalar_t__ pending; int * file_priv; TYPE_3__* dev_private; } ;
struct TYPE_5__ {int freelist_loops; int requested_bufs; } ;
struct TYPE_6__ {int last_buf; int usec_timeout; TYPE_1__ stats; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_7__ {scalar_t__ age; } ;
typedef TYPE_3__ drm_radeon_buf_priv_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

struct drm_buf *FUNC_3(struct drm_device * VAR_0)
{
 struct drm_device_dma *VAR_1 = VAR_0->dma;
 drm_radeon_private_t *VAR_2 = VAR_0->dev_private;
 drm_radeon_buf_priv_t *VAR_3;
 struct drm_buf *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 if (++VAR_2->last_buf >= VAR_1->buf_count)
  VAR_2->last_buf = 0;

 VAR_7 = VAR_2->last_buf;

 for (VAR_6 = 0; VAR_6 < VAR_2->usec_timeout; VAR_6++) {
  u32 VAR_8 = FUNC_2(VAR_2, 1);
  FUNC_0("done_age = %d\n", VAR_8);
  for (VAR_5 = 0; VAR_5 < VAR_1->buf_count; VAR_5++) {
   VAR_4 = VAR_1->buflist[VAR_7];
   VAR_3 = VAR_4->dev_private;
   if (VAR_4->file_priv == ((void*)0) || (VAR_4->pending &&
             VAR_3->age <=
             VAR_8)) {
    VAR_2->stats.requested_bufs++;
    VAR_4->pending = 0;
    return VAR_4;
   }
   if (++VAR_7 >= VAR_1->buf_count)
    VAR_7 = 0;
  }

  if (VAR_6) {
   FUNC_1(1);
   VAR_2->stats.freelist_loops++;
  }
 }

 return ((void*)0);
}
