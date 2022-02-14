
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int state; struct vlan_group* vlgrp; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5,
     struct vlan_group *VAR_6)
{
 struct igb_adapter *VAR_7 = FUNC_3(VAR_5);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9, VAR_10;

 FUNC_0(VAR_7);
 VAR_7->vlgrp = VAR_6;

 if (VAR_6) {

  VAR_9 = FUNC_4(VAR_0);
  VAR_9 |= VAR_1;
  FUNC_6(VAR_0, VAR_9);


  VAR_10 = FUNC_4(VAR_2);
  VAR_10 &= ~VAR_3;
  FUNC_6(VAR_2, VAR_10);
 } else {

  VAR_9 = FUNC_4(VAR_0);
  VAR_9 &= ~VAR_1;
  FUNC_6(VAR_0, VAR_9);
 }

 FUNC_2(VAR_7);

 if (!FUNC_5(VAR_4, &VAR_7->state))
  FUNC_1(VAR_7);
}
