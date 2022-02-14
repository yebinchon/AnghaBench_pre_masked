
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int (* sync32 ) (struct nouveau_channel*,int,int ) ;} ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct nv84_fence_chan {TYPE_2__ base; TYPE_1__ vma; TYPE_3__ vma_gart; } ;
struct nouveau_fifo_chan {int chid; } ;
struct nouveau_fence {int sequence; scalar_t__ sysmem; } ;
struct nouveau_channel {scalar_t__ object; struct nv84_fence_chan* fence; } ;


 int FUNC_0 (struct nouveau_channel*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_fence *VAR_0,
  struct nouveau_channel *VAR_1, struct nouveau_channel *VAR_2)
{
 struct nv84_fence_chan *VAR_3 = VAR_2->fence;
 struct nouveau_fifo_chan *VAR_4 = (void *)VAR_1->object;
 u64 VAR_5 = VAR_4->chid * 16;

 if (VAR_0->sysmem)
  VAR_5 += VAR_3->vma_gart.offset;
 else
  VAR_5 += VAR_3->vma.offset;

 return VAR_3->base.sync32(VAR_2, VAR_5, VAR_0->sequence);
}
