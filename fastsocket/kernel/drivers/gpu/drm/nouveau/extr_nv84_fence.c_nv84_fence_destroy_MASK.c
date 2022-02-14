
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv84_fence_priv {scalar_t__ bo; scalar_t__ bo_gart; } ;
struct nouveau_drm {struct nv84_fence_priv* fence; } ;


 int FUNC_0 (struct nv84_fence_priv*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_drm *VAR_0)
{
 struct nv84_fence_priv *VAR_1 = VAR_0->fence;
 FUNC_2(VAR_1->bo_gart);
 if (VAR_1->bo_gart)
  FUNC_3(VAR_1->bo_gart);
 FUNC_1(((void*)0), &VAR_1->bo_gart);
 FUNC_2(VAR_1->bo);
 if (VAR_1->bo)
  FUNC_3(VAR_1->bo);
 FUNC_1(((void*)0), &VAR_1->bo);
 VAR_0->fence = ((void*)0);
 FUNC_0(VAR_1);
}
