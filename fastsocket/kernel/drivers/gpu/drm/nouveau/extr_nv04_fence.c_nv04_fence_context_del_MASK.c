
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_fence_chan {int base; } ;
struct nouveau_channel {struct nv04_fence_chan* fence; } ;


 int FUNC_0 (struct nv04_fence_chan*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_channel *VAR_0)
{
 struct nv04_fence_chan *VAR_1 = VAR_0->fence;
 FUNC_1(&VAR_1->base);
 VAR_0->fence = ((void*)0);
 FUNC_0(VAR_1);
}
