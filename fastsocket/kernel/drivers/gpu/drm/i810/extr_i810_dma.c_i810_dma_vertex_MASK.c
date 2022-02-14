
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_file {int dummy; } ;
struct drm_device_dma {size_t buf_count; int * buflist; } ;
struct drm_device {int * counts; scalar_t__ dev_private; struct drm_device_dma* dma; } ;
struct TYPE_4__ {size_t idx; int used; int discard; } ;
typedef TYPE_1__ drm_i810_vertex_t ;
struct TYPE_5__ {int last_dispatch; scalar_t__ last_enqueue; } ;
typedef TYPE_2__ drm_i810_sarea_t ;
struct TYPE_6__ {scalar_t__ counter; scalar_t__ sarea_priv; scalar_t__* hw_status_page; } ;
typedef TYPE_3__ drm_i810_private_t ;


 int FUNC_0 (char*,size_t,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, void *VAR_4,
      struct drm_file *VAR_5)
{
 struct drm_device_dma *VAR_6 = VAR_3->dma;
 drm_i810_private_t *VAR_7 = (drm_i810_private_t *) VAR_3->dev_private;
 u32 *VAR_8 = VAR_7->hw_status_page;
 drm_i810_sarea_t *VAR_9 = (drm_i810_sarea_t *)
     VAR_7->sarea_priv;
 drm_i810_vertex_t *VAR_10 = VAR_4;

 FUNC_1(VAR_3, VAR_5);

 FUNC_0("idx %d used %d discard %d\n",
    VAR_10->idx, VAR_10->used, VAR_10->discard);

 if (VAR_10->idx < 0 || VAR_10->idx > VAR_6->buf_count)
  return -VAR_0;

 FUNC_4(VAR_3,
     VAR_6->buflist[VAR_10->idx],
     VAR_10->discard, VAR_10->used);

 FUNC_2(VAR_10->used, &VAR_3->counts[VAR_2]);
 FUNC_3(&VAR_3->counts[VAR_1]);
 VAR_9->last_enqueue = VAR_7->counter - 1;
 VAR_9->last_dispatch = (int)VAR_8[5];

 return 0;
}
