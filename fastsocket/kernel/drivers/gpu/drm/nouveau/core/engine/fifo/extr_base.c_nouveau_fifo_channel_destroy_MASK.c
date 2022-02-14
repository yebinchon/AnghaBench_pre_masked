
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct nouveau_fifo_chan {size_t chid; int base; int pushdma; int pushgpu; int user; } ;
struct nouveau_fifo {int lock; int ** channel; } ;
struct TYPE_2__ {scalar_t__ engine; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct nouveau_object**) ;
 TYPE_1__* FUNC_4 (struct nouveau_fifo_chan*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void
FUNC_7(struct nouveau_fifo_chan *VAR_0)
{
 struct nouveau_fifo *VAR_1 = (void *)FUNC_4(VAR_0)->engine;
 unsigned long VAR_2;

 FUNC_0(VAR_0->user);

 FUNC_5(&VAR_1->lock, VAR_2);
 VAR_1->channel[VAR_0->chid] = ((void*)0);
 FUNC_6(&VAR_1->lock, VAR_2);

 FUNC_1(((void*)0), &VAR_0->pushgpu);
 FUNC_3(((void*)0), (struct nouveau_object **)&VAR_0->pushdma);
 FUNC_2(&VAR_0->base);
}
