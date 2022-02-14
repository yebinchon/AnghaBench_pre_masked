
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nv84_fence_priv {struct nouveau_bo* bo; struct nouveau_bo* bo_gart; } ;
struct TYPE_8__ {int sync32; int emit32; int read; int sync; int emit; } ;
struct nv84_fence_chan {int * dispc_vma; int vma_gart; int vma; TYPE_4__ base; } ;
struct nouveau_fifo_chan {int chid; } ;
struct nouveau_client {int vm; } ;
struct nouveau_channel {TYPE_2__* drm; struct nv84_fence_chan* fence; scalar_t__ object; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_5__ {int num_crtc; } ;
struct TYPE_7__ {TYPE_1__ mode_config; } ;
struct TYPE_6__ {TYPE_3__* dev; struct nv84_fence_priv* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv84_fence_chan* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nouveau_bo*,int ,int *) ;
 int FUNC_2 (struct nouveau_bo*,int,int) ;
 struct nouveau_client* FUNC_3 (struct nouveau_fifo_chan*) ;
 int FUNC_4 (TYPE_4__*) ;
 struct nouveau_bo* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (struct nouveau_channel*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_7(struct nouveau_channel *VAR_7)
{
 struct nouveau_fifo_chan *VAR_8 = (void *)VAR_7->object;
 struct nouveau_client *VAR_9 = FUNC_3(VAR_8);
 struct nv84_fence_priv *VAR_10 = VAR_7->drm->fence;
 struct nv84_fence_chan *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = VAR_7->fence = FUNC_0(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_4(&VAR_11->base);
 VAR_11->base.emit = VAR_2;
 VAR_11->base.sync = VAR_5;
 VAR_11->base.read = VAR_4;
 VAR_11->base.emit32 = VAR_3;
 VAR_11->base.sync32 = VAR_6;

 VAR_12 = FUNC_1(VAR_10->bo, VAR_9->vm, &VAR_11->vma);
 if (VAR_12 == 0) {
  VAR_12 = FUNC_1(VAR_10->bo_gart, VAR_9->vm,
     &VAR_11->vma_gart);
 }


 for (VAR_13 = 0; !VAR_12 && VAR_13 < VAR_7->drm->dev->mode_config.num_crtc; VAR_13++) {
  struct nouveau_bo *VAR_14 = FUNC_5(VAR_7->drm->dev, VAR_13);
  VAR_12 = FUNC_1(VAR_14, VAR_9->vm, &VAR_11->dispc_vma[VAR_13]);
 }

 FUNC_2(VAR_10->bo, VAR_8->chid * 16/4, 0x00000000);

 if (VAR_12)
  FUNC_6(VAR_7);
 return VAR_12;
}
