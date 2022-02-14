
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; TYPE_2__* dev_private; } ;
struct drm_buf {TYPE_3__* dev_private; } ;
struct TYPE_4__ {scalar_t__ Size; } ;
struct TYPE_5__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_6__ {int in_use; } ;
typedef TYPE_3__ drm_i810_buf_priv_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_5)
{
 drm_i810_private_t *VAR_6 = VAR_5->dev_private;
 struct drm_device_dma *VAR_7 = VAR_5->dma;
 int VAR_8, VAR_9 = 0;
 VAR_4;

 FUNC_5(VAR_5);

 FUNC_1(2);
 FUNC_3(VAR_0);
 FUNC_3(0);
 FUNC_0();

 FUNC_6(VAR_5, VAR_6->ring.Size - 8);

 for (VAR_8 = 0; VAR_8 < VAR_7->buf_count; VAR_8++) {
  struct drm_buf *VAR_10 = VAR_7->buflist[VAR_8];
  drm_i810_buf_priv_t *VAR_11 = VAR_10->dev_private;

  int VAR_12 = FUNC_4(VAR_11->in_use, VAR_3,
       VAR_2);

  if (VAR_12 == VAR_3)
   FUNC_2("reclaimed from HARDWARE\n");
  if (VAR_12 == VAR_1)
   FUNC_2("still on client\n");
 }

 return VAR_9;
}
