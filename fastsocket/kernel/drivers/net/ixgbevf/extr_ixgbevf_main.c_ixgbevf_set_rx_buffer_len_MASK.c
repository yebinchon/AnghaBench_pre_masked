
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int mtu; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbevf_adapter {int num_rx_queues; TYPE_2__* rx_ring; struct net_device* netdev; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int rx_buf_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*,int) ;

__attribute__((used)) static void FUNC_1(struct ixgbevf_adapter *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 struct net_device *VAR_11 = VAR_9->netdev;
 int VAR_12 = VAR_11->mtu + VAR_1 + VAR_0;
 int VAR_13;
 u16 VAR_14;


 FUNC_0(VAR_10, VAR_12);


 VAR_12 += VAR_7;





 if ((VAR_10->mac.type == VAR_8) &&
     (VAR_12 <= VAR_6))
  VAR_14 = VAR_6;
 else if (VAR_12 <= VAR_3)
  VAR_14 = VAR_3;
 else if (VAR_12 <= VAR_4)
  VAR_14 = VAR_4;
 else if (VAR_12 <= VAR_5)
  VAR_14 = VAR_5;
 else
  VAR_14 = VAR_2;

 for (VAR_13 = 0; VAR_13 < VAR_9->num_rx_queues; VAR_13++)
  VAR_9->rx_ring[VAR_13].rx_buf_len = VAR_14;
}
