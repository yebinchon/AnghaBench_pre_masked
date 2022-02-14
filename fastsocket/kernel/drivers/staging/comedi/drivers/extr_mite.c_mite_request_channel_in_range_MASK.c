
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {int* channel_allocated; int lock; struct mite_channel* channels; } ;
struct mite_dma_descriptor_ring {int dummy; } ;
struct mite_channel {struct mite_dma_descriptor_ring* ring; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

struct mite_channel *FUNC_2(struct mite_struct *VAR_0,
         struct
         mite_dma_descriptor_ring
         *VAR_1, unsigned VAR_2,
         unsigned VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct mite_channel *VAR_6 = ((void*)0);


 FUNC_0(&VAR_0->lock, VAR_5);
 for (VAR_4 = VAR_2; VAR_4 <= VAR_3; ++VAR_4) {
  if (VAR_0->channel_allocated[VAR_4] == 0) {
   VAR_0->channel_allocated[VAR_4] = 1;
   VAR_6 = &VAR_0->channels[VAR_4];
   VAR_6->ring = VAR_1;
   break;
  }
 }
 FUNC_1(&VAR_0->lock, VAR_5);
 return VAR_6;
}
