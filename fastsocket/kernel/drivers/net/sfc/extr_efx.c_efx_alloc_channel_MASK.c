
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int queue; struct efx_channel* channel; struct efx_nic* efx; } ;
struct efx_rx_queue {int slow_fill; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
struct efx_channel {int channel; struct efx_rx_queue rx_queue; struct efx_tx_queue* tx_queue; int * type; struct efx_nic* efx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct efx_channel* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static struct efx_channel *
FUNC_2(struct efx_nic *VAR_4, int VAR_5, struct efx_channel *VAR_6)
{
 struct efx_channel *VAR_7;
 struct efx_rx_queue *VAR_8;
 struct efx_tx_queue *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->efx = VAR_4;
 VAR_7->channel = VAR_5;
 VAR_7->type = &VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = &VAR_7->tx_queue[VAR_10];
  VAR_9->efx = VAR_4;
  VAR_9->queue = VAR_5 * VAR_0 + VAR_10;
  VAR_9->channel = VAR_7;
 }

 VAR_8 = &VAR_7->rx_queue;
 VAR_8->efx = VAR_4;
 FUNC_1(&VAR_8->slow_fill, VAR_3,
      (unsigned long)VAR_8);

 return VAR_7;
}
