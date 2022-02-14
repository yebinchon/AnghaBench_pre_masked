
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {int buffers_pending; int * buffer_next; int * buffer_xfer; scalar_t__ next_slot; } ;
struct ep93xx_dma_m2p_client {struct m2p_channel* channel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct m2p_channel*) ;
 int FUNC_2 (struct m2p_channel*) ;

void FUNC_3(struct ep93xx_dma_m2p_client *VAR_0)
{
 struct m2p_channel *VAR_1 = VAR_0->channel;

 FUNC_1(VAR_1);
 VAR_1->next_slot = 0;
 VAR_1->buffer_xfer = ((void*)0);
 VAR_1->buffer_next = ((void*)0);
 FUNC_0(&VAR_1->buffers_pending);
 FUNC_2(VAR_1);
}
