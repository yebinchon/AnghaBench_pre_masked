
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {int buffers_pending; int * buffer_next; int * buffer_xfer; scalar_t__ next_slot; struct ep93xx_dma_m2p_client* client; int irq; } ;
struct ep93xx_dma_m2p_client {struct m2p_channel* channel; scalar_t__ name; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct m2p_channel*) ;
 int FUNC_2 (struct m2p_channel*) ;
 int FUNC_3 (struct m2p_channel*) ;
 struct m2p_channel* FUNC_4 (struct ep93xx_dma_m2p_client*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int ,char*,struct m2p_channel*) ;

int FUNC_6(struct ep93xx_dma_m2p_client *VAR_1)
{
 struct m2p_channel *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_1(VAR_2))
  return FUNC_2(VAR_2);

 VAR_3 = FUNC_5(VAR_2->irq, VAR_0, 0, VAR_1->name ? : "dma-m2p", VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->client = VAR_1;
 VAR_2->next_slot = 0;
 VAR_2->buffer_xfer = ((void*)0);
 VAR_2->buffer_next = ((void*)0);
 FUNC_0(&VAR_2->buffers_pending);

 VAR_1->channel = VAR_2;

 FUNC_3(VAR_2);

 return 0;
}
