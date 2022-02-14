
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; TYPE_1__* rx_ring; struct vlan_group* vlgrp; struct ixgbe_hw hw; } ;
struct TYPE_2__ {int reg_idx; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 struct ixgbevf_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
         struct vlan_group *VAR_2)
{
 struct ixgbevf_adapter *VAR_3 = FUNC_3(VAR_1);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5, VAR_6;
 u32 VAR_7;

 VAR_3->vlgrp = VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_rx_queues; VAR_5++) {
  VAR_6 = VAR_3->rx_ring[VAR_5].reg_idx;
  VAR_7 = FUNC_0(VAR_4, FUNC_1(VAR_6));
  VAR_7 |= VAR_0;
  FUNC_2(VAR_4, FUNC_1(VAR_6), VAR_7);
 }
}
