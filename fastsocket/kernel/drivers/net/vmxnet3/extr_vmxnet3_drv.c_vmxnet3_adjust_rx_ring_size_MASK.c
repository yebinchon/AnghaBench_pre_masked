
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t size; } ;
struct vmxnet3_rx_queue {TYPE_3__ comp_ring; TYPE_2__* rx_ring; } ;
struct vmxnet3_adapter {scalar_t__ skb_buf_size; int rx_buf_per_pkt; size_t num_rx_queues; struct vmxnet3_rx_queue* rx_queue; TYPE_1__* netdev; } ;
struct TYPE_5__ {size_t size; } ;
struct TYPE_4__ {scalar_t__ mtu; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (int ,size_t,size_t) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_adapter *VAR_7)
{
 size_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct vmxnet3_rx_queue *VAR_13 = &VAR_7->rx_queue[0];


 if (VAR_7->netdev->mtu <= VAR_2 -
        VAR_1) {
  VAR_7->skb_buf_size = VAR_7->netdev->mtu +
     VAR_1;
  if (VAR_7->skb_buf_size < VAR_3)
   VAR_7->skb_buf_size = VAR_3;

  VAR_7->rx_buf_per_pkt = 1;
 } else {
  VAR_7->skb_buf_size = VAR_2;
  VAR_8 = VAR_7->netdev->mtu - VAR_2 +
         VAR_1;
  VAR_7->rx_buf_per_pkt = 1 + (VAR_8 + VAR_0 - 1) / VAR_0;
 }





 VAR_8 = VAR_7->rx_buf_per_pkt * VAR_4;
 VAR_10 = VAR_7->rx_queue[0].rx_ring[0].size;
 VAR_10 = (VAR_10 + VAR_8 - 1) / VAR_8 * VAR_8;
 VAR_10 = FUNC_0(VAR_6, VAR_10, VAR_5 /
      VAR_8 * VAR_8);
 VAR_11 = VAR_7->rx_queue[0].rx_ring[1].size;
 VAR_12 = VAR_10 + VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_rx_queues; VAR_9++) {
  VAR_13 = &VAR_7->rx_queue[VAR_9];
  VAR_13->rx_ring[0].size = VAR_10;
  VAR_13->rx_ring[1].size = VAR_11;
  VAR_13->comp_ring.size = VAR_12;
 }
}
