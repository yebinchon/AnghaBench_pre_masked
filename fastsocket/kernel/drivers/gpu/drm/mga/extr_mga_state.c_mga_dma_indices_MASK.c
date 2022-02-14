
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {size_t buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; int * dev_private; } ;
struct drm_buf {TYPE_2__* dev_private; } ;
typedef int drm_mga_private_t ;
struct TYPE_4__ {size_t idx; int end; int start; scalar_t__ discard; } ;
typedef TYPE_1__ drm_mga_indices_t ;
struct TYPE_5__ {int dispatched; scalar_t__ discard; } ;
typedef TYPE_2__ drm_mga_buf_priv_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,struct drm_buf*,int ,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_buf*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_mga_private_t *VAR_4 = VAR_1->dev_private;
 struct drm_device_dma *VAR_5 = VAR_1->dma;
 struct drm_buf *VAR_6;
 drm_mga_buf_priv_t *VAR_7;
 drm_mga_indices_t *VAR_8 = VAR_2;

 FUNC_1(VAR_1, VAR_3);

 if (VAR_8->idx < 0 || VAR_8->idx > VAR_5->buf_count)
  return -VAR_0;

 VAR_6 = VAR_5->buflist[VAR_8->idx];
 VAR_7 = VAR_6->dev_private;

 VAR_7->discard = VAR_8->discard;

 if (!FUNC_5(VAR_4)) {
  if (VAR_8->discard) {
   if (VAR_7->dispatched == 1)
    FUNC_0(VAR_7);
   VAR_7->dispatched = 0;
   FUNC_4(VAR_1, VAR_6);
  }
  return -VAR_0;
 }

 FUNC_2(VAR_4);

 FUNC_3(VAR_1, VAR_6, VAR_8->start, VAR_8->end);

 return 0;
}
