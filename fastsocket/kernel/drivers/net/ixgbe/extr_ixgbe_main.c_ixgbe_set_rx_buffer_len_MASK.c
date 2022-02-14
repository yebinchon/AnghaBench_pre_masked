
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int mtu; } ;
struct ixgbe_ring {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; int num_rx_queues; int flags2; struct ixgbe_ring** rx_ring; struct net_device* netdev; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_ring*) ;
 int FUNC_3 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_11)
{
 struct ixgbe_hw *VAR_12 = &VAR_11->hw;
 struct net_device *VAR_13 = VAR_11->netdev;
 int VAR_14 = VAR_13->mtu + VAR_2 + VAR_0;
 struct ixgbe_ring *VAR_15;
 int VAR_16;
 u32 VAR_17, VAR_18;
 if (VAR_14 < (VAR_1 + VAR_0))
  VAR_14 = (VAR_1 + VAR_0);

 VAR_17 = FUNC_0(VAR_12, VAR_8);
 if (VAR_14 != (VAR_17 >> VAR_10)) {
  VAR_17 &= ~VAR_9;
  VAR_17 |= VAR_14 << VAR_10;

  FUNC_1(VAR_12, VAR_8, VAR_17);
 }

 VAR_18 = FUNC_0(VAR_12, VAR_6);

 VAR_18 |= VAR_7;
 FUNC_1(VAR_12, VAR_6, VAR_18);





 for (VAR_16 = 0; VAR_16 < VAR_11->num_rx_queues; VAR_16++) {
  VAR_15 = VAR_11->rx_ring[VAR_16];
  if (VAR_11->flags2 & VAR_4)
   FUNC_3(VAR_15);
  else
   FUNC_2(VAR_15);
 }
}
