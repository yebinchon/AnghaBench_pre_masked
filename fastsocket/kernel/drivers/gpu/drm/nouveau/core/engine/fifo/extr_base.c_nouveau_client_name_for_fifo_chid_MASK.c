
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nouveau_fifo_chan {int dummy; } ;
struct nouveau_fifo {size_t min; size_t max; int lock; scalar_t__* channel; } ;


 char const* FUNC_0 (struct nouveau_fifo_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

const char *
FUNC_3(struct nouveau_fifo *VAR_0, u32 VAR_1)
{
 struct nouveau_fifo_chan *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 if (VAR_1 >= VAR_0->min && VAR_1 <= VAR_0->max)
  VAR_2 = (void *)VAR_0->channel[VAR_1];
 FUNC_2(&VAR_0->lock, VAR_3);

 return FUNC_0(VAR_2);
}
