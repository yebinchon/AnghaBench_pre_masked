
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_fence_priv {int dummy; } ;
struct nouveau_drm {struct nv04_fence_priv* fence; } ;


 int FUNC_0 (struct nv04_fence_priv*) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_drm *VAR_0)
{
 struct nv04_fence_priv *VAR_1 = VAR_0->fence;
 VAR_0->fence = ((void*)0);
 FUNC_0(VAR_1);
}
