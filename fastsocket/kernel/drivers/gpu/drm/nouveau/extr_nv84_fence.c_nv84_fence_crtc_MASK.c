
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nv84_fence_chan {TYPE_1__* dispc_vma; } ;
struct nouveau_channel {struct nv84_fence_chan* fence; } ;
struct TYPE_2__ {int offset; } ;



u64
FUNC_0(struct nouveau_channel *VAR_0, int VAR_1)
{
 struct nv84_fence_chan *VAR_2 = VAR_0->fence;
 return VAR_2->dispc_vma[VAR_1].offset;
}
