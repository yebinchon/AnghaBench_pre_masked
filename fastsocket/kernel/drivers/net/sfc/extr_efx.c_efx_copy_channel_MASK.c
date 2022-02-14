
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int txd; int * buffer; struct efx_channel* channel; } ;
struct efx_rx_queue {int slow_fill; int rxd; int * buffer; } ;
struct efx_channel {struct efx_rx_queue rx_queue; struct efx_tx_queue* tx_queue; int eventq; int * napi_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct efx_channel* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,unsigned long) ;

__attribute__((used)) static struct efx_channel *
FUNC_3(const struct efx_channel *VAR_3)
{
 struct efx_channel *VAR_4;
 struct efx_rx_queue *VAR_5;
 struct efx_tx_queue *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);

 *VAR_4 = *VAR_3;

 VAR_4->napi_dev = ((void*)0);
 FUNC_1(&VAR_4->eventq, 0, sizeof(VAR_4->eventq));

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->tx_queue[VAR_7];
  if (VAR_6->channel)
   VAR_6->channel = VAR_4;
  VAR_6->buffer = ((void*)0);
  FUNC_1(&VAR_6->txd, 0, sizeof(VAR_6->txd));
 }

 VAR_5 = &VAR_4->rx_queue;
 VAR_5->buffer = ((void*)0);
 FUNC_1(&VAR_5->rxd, 0, sizeof(VAR_5->rxd));
 FUNC_2(&VAR_5->slow_fill, VAR_2,
      (unsigned long)VAR_5);

 return VAR_4;
}
