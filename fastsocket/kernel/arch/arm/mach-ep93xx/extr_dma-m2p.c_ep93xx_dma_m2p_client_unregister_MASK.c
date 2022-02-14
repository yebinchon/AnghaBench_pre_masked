
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {int * client; int irq; } ;
struct ep93xx_dma_m2p_client {struct m2p_channel* channel; } ;


 int FUNC_0 (struct m2p_channel*) ;
 int FUNC_1 (int ,struct m2p_channel*) ;

void FUNC_2(struct ep93xx_dma_m2p_client *VAR_0)
{
 struct m2p_channel *VAR_1 = VAR_0->channel;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->irq, VAR_1);
 VAR_1->client = ((void*)0);
}
