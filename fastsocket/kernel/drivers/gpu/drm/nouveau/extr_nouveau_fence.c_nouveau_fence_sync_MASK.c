
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence_chan {int (* sync ) (struct nouveau_fence*,struct nouveau_channel*,struct nouveau_channel*) ;} ;
struct nouveau_fence {struct nouveau_channel* channel; } ;
struct nouveau_channel {struct nouveau_fence_chan* fence; } ;


 int FUNC_0 (struct nouveau_fence*) ;
 int FUNC_1 (struct nouveau_fence*,int,int) ;
 int FUNC_2 (struct nouveau_fence*,struct nouveau_channel*,struct nouveau_channel*) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct nouveau_fence *VAR_0, struct nouveau_channel *VAR_1)
{
 struct nouveau_fence_chan *VAR_2 = VAR_1->fence;
 struct nouveau_channel *VAR_3;
 int VAR_4 = 0;

 VAR_3 = VAR_0 ? VAR_0->channel : ((void*)0);
 if (VAR_3) {
  if (FUNC_3(VAR_3 != VAR_1 && !FUNC_0(VAR_0))) {
   VAR_4 = VAR_2->sync(VAR_0, VAR_3, VAR_1);
   if (FUNC_3(VAR_4))
    VAR_4 = FUNC_1(VAR_0, 1, 0);
  }
 }

 return VAR_4;
}
