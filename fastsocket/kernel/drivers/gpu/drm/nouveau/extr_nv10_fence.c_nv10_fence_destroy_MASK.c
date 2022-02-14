
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv10_fence_priv {scalar_t__ bo; } ;
struct nouveau_drm {struct nv10_fence_priv* fence; } ;


 int FUNC_0 (struct nv10_fence_priv*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(struct nouveau_drm *VAR_0)
{
 struct nv10_fence_priv *VAR_1 = VAR_0->fence;
 FUNC_2(VAR_1->bo);
 if (VAR_1->bo)
  FUNC_3(VAR_1->bo);
 FUNC_1(((void*)0), &VAR_1->bo);
 VAR_0->fence = ((void*)0);
 FUNC_0(VAR_1);
}
