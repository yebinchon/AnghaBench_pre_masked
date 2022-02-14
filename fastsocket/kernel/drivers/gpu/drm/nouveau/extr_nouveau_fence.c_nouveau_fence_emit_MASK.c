
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence_chan {int (* emit ) (struct nouveau_fence*) ;int lock; int pending; scalar_t__ sequence; } ;
struct nouveau_fence {int head; int kref; scalar_t__ sequence; scalar_t__ timeout; struct nouveau_channel* channel; } ;
struct nouveau_channel {struct nouveau_fence_chan* fence; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nouveau_fence*) ;

int
FUNC_5(struct nouveau_fence *VAR_2, struct nouveau_channel *VAR_3)
{
 struct nouveau_fence_chan *VAR_4 = VAR_3->fence;
 int VAR_5;

 VAR_2->channel = VAR_3;
 VAR_2->timeout = VAR_1 + (3 * VAR_0);
 VAR_2->sequence = ++VAR_4->sequence;

 VAR_5 = VAR_4->emit(VAR_2);
 if (!VAR_5) {
  FUNC_0(&VAR_2->kref);
  FUNC_2(&VAR_4->lock);
  FUNC_1(&VAR_2->head, &VAR_4->pending);
  FUNC_3(&VAR_4->lock);
 }

 return VAR_5;
}
