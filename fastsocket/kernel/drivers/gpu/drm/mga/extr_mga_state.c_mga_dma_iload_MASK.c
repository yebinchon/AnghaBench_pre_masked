
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {size_t buf_count; struct drm_buf** buflist; } ;
struct drm_device {TYPE_2__* dev_private; struct drm_device_dma* dma; } ;
struct drm_buf {int * dev_private; } ;
struct TYPE_8__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_9__ {size_t idx; int length; int dstorg; } ;
typedef TYPE_3__ drm_mga_iload_t ;
typedef int drm_mga_buf_priv_t ;
struct TYPE_7__ {int dirty; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct drm_device*,struct drm_buf*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct drm_device*,struct drm_buf*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_device_dma *VAR_7 = VAR_4->dma;
 drm_mga_private_t *VAR_8 = VAR_4->dev_private;
 struct drm_buf *VAR_9;
 drm_mga_buf_priv_t *VAR_10;
 drm_mga_iload_t *VAR_11 = VAR_5;
 FUNC_0("\n");

 FUNC_2(VAR_4, VAR_6);
 if (VAR_11->idx < 0 || VAR_11->idx > VAR_7->buf_count)
  return -VAR_1;

 VAR_9 = VAR_7->buflist[VAR_11->idx];
 VAR_10 = VAR_9->dev_private;

 if (FUNC_7(VAR_8, VAR_11->dstorg, VAR_11->length)) {
  FUNC_6(VAR_4, VAR_9);
  return -VAR_1;
 }

 FUNC_3(VAR_8);

 FUNC_4(VAR_4, VAR_9, VAR_11->dstorg, VAR_11->length);



 VAR_8->sarea_priv->dirty |= VAR_3;

 return 0;
}
