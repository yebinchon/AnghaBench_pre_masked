
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv10_fence_priv {int sequence; int bo; } ;
struct nouveau_drm {struct nv10_fence_priv* fence; } ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(struct nouveau_drm *VAR_0)
{
 struct nv10_fence_priv *VAR_1 = VAR_0->fence;

 FUNC_0(VAR_1->bo, 0, VAR_1->sequence);
}
