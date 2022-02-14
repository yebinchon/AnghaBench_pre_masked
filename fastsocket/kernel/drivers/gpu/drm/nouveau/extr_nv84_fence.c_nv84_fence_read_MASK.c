
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv84_fence_priv {int bo; } ;
struct nouveau_fifo_chan {int chid; } ;
struct nouveau_channel {TYPE_1__* drm; scalar_t__ object; } ;
struct TYPE_2__ {struct nv84_fence_priv* fence; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static u32
FUNC_1(struct nouveau_channel *VAR_0)
{
 struct nouveau_fifo_chan *VAR_1 = (void *)VAR_0->object;
 struct nv84_fence_priv *VAR_2 = VAR_0->drm->fence;
 return FUNC_0(VAR_2->bo, VAR_1->chid * 16/4);
}
