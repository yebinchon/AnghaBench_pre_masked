
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int cur_task; int cur_tx; scalar_t__ base; scalar_t__ tx_ring_dma; struct netdev_desc* last_tx; struct netdev_desc* tx_ring; } ;
struct netdev_desc {int status; int next_desc; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 struct netdev_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4 (unsigned long VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *)VAR_3;
 struct netdev_private *VAR_5 = FUNC_3(VAR_4);
 unsigned VAR_6 = VAR_5->cur_task % VAR_1;
 struct netdev_desc *VAR_7 =
  &VAR_5->tx_ring[(VAR_5->cur_tx - 1) % VAR_1];


 for (; VAR_5->cur_tx - VAR_5->cur_task > 0; VAR_5->cur_task++) {
  int VAR_8 = VAR_5->cur_task % VAR_1;
  VAR_7 = &VAR_5->tx_ring[VAR_8];
  if (VAR_5->last_tx) {
   VAR_5->last_tx->next_desc = FUNC_0(VAR_5->tx_ring_dma +
    VAR_8*sizeof(struct netdev_desc));
  }
  VAR_5->last_tx = VAR_7;
 }

 VAR_7->status |= FUNC_0(VAR_0);

 if (FUNC_1 (VAR_5->base + VAR_2) == 0)
  FUNC_2 (VAR_5->tx_ring_dma + VAR_6 * sizeof(struct netdev_desc),
   VAR_5->base + VAR_2);
 return;
}
