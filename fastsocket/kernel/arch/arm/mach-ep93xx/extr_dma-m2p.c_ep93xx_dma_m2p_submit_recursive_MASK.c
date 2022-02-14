
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {int buffers_pending; } ;
struct ep93xx_dma_m2p_client {struct m2p_channel* channel; } ;
struct ep93xx_dma_buffer {int list; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ep93xx_dma_m2p_client *VAR_0,
         struct ep93xx_dma_buffer *VAR_1)
{
 struct m2p_channel *VAR_2 = VAR_0->channel;

 FUNC_0(&VAR_1->list, &VAR_2->buffers_pending);
}
