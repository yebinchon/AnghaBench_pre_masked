
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv84_fence_priv {struct nouveau_bo* bo; } ;
struct nv84_fence_chan {int base; int vma; int vma_gart; int * dispc_vma; } ;
struct nouveau_channel {struct nv84_fence_chan* fence; TYPE_1__* drm; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_4__ {int num_crtc; } ;
struct drm_device {TYPE_2__ mode_config; } ;
struct TYPE_3__ {struct nv84_fence_priv* fence; struct drm_device* dev; } ;


 int FUNC_0 (struct nv84_fence_chan*) ;
 int FUNC_1 (struct nouveau_bo*,int *) ;
 int FUNC_2 (int *) ;
 struct nouveau_bo* FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_channel *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->drm->dev;
 struct nv84_fence_priv *VAR_2 = VAR_0->drm->fence;
 struct nv84_fence_chan *VAR_3 = VAR_0->fence;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->mode_config.num_crtc; VAR_4++) {
  struct nouveau_bo *VAR_5 = FUNC_3(VAR_1, VAR_4);
  FUNC_1(VAR_5, &VAR_3->dispc_vma[VAR_4]);
 }

 FUNC_1(VAR_2->bo, &VAR_3->vma_gart);
 FUNC_1(VAR_2->bo, &VAR_3->vma);
 FUNC_2(&VAR_3->base);
 VAR_0->fence = ((void*)0);
 FUNC_0(VAR_3);
}
