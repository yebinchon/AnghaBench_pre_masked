
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int irq_rx_adaptive; int irq_rx_moderation; int timer_quantum_ns; size_t tx_channel_offset; TYPE_1__** channel; } ;
struct TYPE_2__ {int irq_moderation; } ;


 unsigned int FUNC_0 (int,int) ;

void FUNC_1(struct efx_nic *VAR_0, unsigned int *VAR_1,
       unsigned int *VAR_2, bool *VAR_3)
{




 *VAR_3 = VAR_0->irq_rx_adaptive;
 *VAR_2 = FUNC_0(VAR_0->irq_rx_moderation *
     VAR_0->timer_quantum_ns,
     1000);





 if (VAR_0->tx_channel_offset == 0)
  *VAR_1 = *VAR_2;
 else
  *VAR_1 = FUNC_0(
   VAR_0->channel[VAR_0->tx_channel_offset]->irq_moderation *
   VAR_0->timer_quantum_ns,
   1000);
}
