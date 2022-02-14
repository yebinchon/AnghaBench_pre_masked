
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context_del; int context_new; int resume; int (* dtor ) (struct nouveau_drm*) ;} ;
struct nv10_fence_priv {int bo; int lock; TYPE_1__ base; } ;
struct nouveau_drm {int dev; struct nv10_fence_priv* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nv10_fence_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ,int ,int,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_7 (struct nouveau_drm*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct nouveau_drm *VAR_6)
{
 struct nv10_fence_priv *VAR_7;
 int VAR_8 = 0;

 VAR_7 = VAR_6->fence = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->base.dtor = FUNC_7;
 VAR_7->base.resume = VAR_4;
 VAR_7->base.context_new = VAR_5;
 VAR_7->base.context_del = VAR_3;
 FUNC_8(&VAR_7->lock);

 VAR_8 = FUNC_2(VAR_6->dev, 4096, 0x1000, VAR_2,
        0, 0x0000, ((void*)0), &VAR_7->bo);
 if (!VAR_8) {
  VAR_8 = FUNC_3(VAR_7->bo, VAR_2);
  if (!VAR_8) {
   VAR_8 = FUNC_1(VAR_7->bo);
   if (VAR_8)
    FUNC_5(VAR_7->bo);
  }
  if (VAR_8)
   FUNC_4(((void*)0), &VAR_7->bo);
 }

 if (VAR_8) {
  FUNC_7(VAR_6);
  return VAR_8;
 }

 FUNC_6(VAR_7->bo, 0x000, 0x00000000);
 return VAR_8;
}
