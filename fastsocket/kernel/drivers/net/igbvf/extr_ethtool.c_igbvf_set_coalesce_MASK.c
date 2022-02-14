
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct igbvf_adapter {int current_itr; int requested_itr; TYPE_1__* rx_ring; struct e1000_hw hw; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct TYPE_2__ {scalar_t__ itr_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct igbvf_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
                              struct ethtool_coalesce *VAR_5)
{
 struct igbvf_adapter *VAR_6 = FUNC_0(VAR_4);
 struct e1000_hw *VAR_7 = &VAR_6->hw;

 if ((VAR_5->rx_coalesce_usecs >= VAR_2) &&
      (VAR_5->rx_coalesce_usecs <= VAR_1)) {
  VAR_6->current_itr = VAR_5->rx_coalesce_usecs << 2;
  VAR_6->requested_itr = 1000000000 /
     (VAR_6->current_itr * 256);
 } else if ((VAR_5->rx_coalesce_usecs == 3) ||
     (VAR_5->rx_coalesce_usecs == 2)) {
  VAR_6->current_itr = VAR_3;
  VAR_6->requested_itr = VAR_5->rx_coalesce_usecs;
 } else if (VAR_5->rx_coalesce_usecs == 0) {







  VAR_6->current_itr = 4;
  VAR_6->requested_itr = 1000000000 /
     (VAR_6->current_itr * 256);
 } else
  return -VAR_0;

 FUNC_1(VAR_6->current_itr,
        VAR_7->hw_addr + VAR_6->rx_ring->itr_register);

 return 0;
}
