
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context_new; } ;
struct nv84_fence_priv {TYPE_1__ base; } ;
struct nouveau_drm {struct nv84_fence_priv* fence; } ;


 int FUNC_0 (struct nouveau_drm*) ;
 int VAR_0 ;

int
FUNC_1(struct nouveau_drm *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == 0) {
  struct nv84_fence_priv *VAR_3 = VAR_1->fence;
  VAR_3->base.context_new = VAR_0;
 }
 return VAR_2;
}
