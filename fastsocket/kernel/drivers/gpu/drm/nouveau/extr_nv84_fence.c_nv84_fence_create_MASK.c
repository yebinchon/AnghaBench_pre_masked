
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uevent; int waiting; int context_del; int context_new; int resume; int suspend; int (* dtor ) (struct nouveau_drm*) ;} ;
struct nv84_fence_priv {int bo_gart; int bo; TYPE_1__ base; } ;
struct nouveau_fifo {int max; } ;
struct nouveau_drm {int dev; struct nv84_fence_priv* fence; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct nv84_fence_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 struct nouveau_fifo* FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct nouveau_drm*) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_9(struct nouveau_drm *VAR_8)
{
 struct nouveau_fifo *VAR_9 = FUNC_7(VAR_8->device);
 struct nv84_fence_priv *VAR_10;
 int VAR_11;

 VAR_10 = VAR_8->fence = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->base.dtor = FUNC_8;
 VAR_10->base.suspend = VAR_7;
 VAR_10->base.resume = VAR_6;
 VAR_10->base.context_new = VAR_5;
 VAR_10->base.context_del = VAR_4;

 FUNC_0(&VAR_10->base.waiting);
 VAR_10->base.uevent = 1;

 VAR_11 = FUNC_3(VAR_8->dev, 16 * (VAR_9->max + 1), 0,
        VAR_3, 0, 0, ((void*)0), &VAR_10->bo);
 if (VAR_11 == 0) {
  VAR_11 = FUNC_4(VAR_10->bo, VAR_3);
  if (VAR_11 == 0) {
   VAR_11 = FUNC_2(VAR_10->bo);
   if (VAR_11)
    FUNC_6(VAR_10->bo);
  }
  if (VAR_11)
   FUNC_5(((void*)0), &VAR_10->bo);
 }

 if (VAR_11 == 0)
  VAR_11 = FUNC_3(VAR_8->dev, 16 * (VAR_9->max + 1), 0,
         VAR_2, 0, 0, ((void*)0),
         &VAR_10->bo_gart);
 if (VAR_11 == 0) {
  VAR_11 = FUNC_4(VAR_10->bo_gart, VAR_2);
  if (VAR_11 == 0) {
   VAR_11 = FUNC_2(VAR_10->bo_gart);
   if (VAR_11)
    FUNC_6(VAR_10->bo_gart);
  }
  if (VAR_11)
   FUNC_5(((void*)0), &VAR_10->bo_gart);
 }

 if (VAR_11)
  FUNC_8(VAR_8);
 return VAR_11;
}
