
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct vlan_group {int dummy; } ;
struct net_device {int flags; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {scalar_t__ mng_vlan_id; int flags; struct vlan_group* vlgrp; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct e1000_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_8,
       struct vlan_group *VAR_9)
{
 struct e1000_adapter *VAR_10 = FUNC_6(VAR_8);
 struct e1000_hw *VAR_11 = &VAR_10->hw;
 u32 VAR_12, VAR_13;

 if (!FUNC_7(VAR_7, &VAR_10->flags))
  FUNC_0(VAR_10);
 VAR_10->vlgrp = VAR_9;

 if (VAR_9) {

  VAR_12 = FUNC_4(VAR_0);
  VAR_12 |= VAR_1;
  FUNC_5(VAR_0, VAR_12);


  VAR_13 = FUNC_4(VAR_6);
  VAR_13 &= ~VAR_3;
  if (!(VAR_8->flags & VAR_5))
   VAR_13 |= VAR_4;
  FUNC_5(VAR_6, VAR_13);
  FUNC_2(VAR_10);
 } else {

  VAR_12 = FUNC_4(VAR_0);
  VAR_12 &= ~VAR_1;
  FUNC_5(VAR_0, VAR_12);


  VAR_13 = FUNC_4(VAR_6);
  VAR_13 &= ~VAR_4;
  FUNC_5(VAR_6, VAR_13);

  if (VAR_10->mng_vlan_id != (u16)VAR_2) {
   FUNC_3(VAR_8, VAR_10->mng_vlan_id);
   VAR_10->mng_vlan_id = VAR_2;
  }
 }

 if (!FUNC_7(VAR_7, &VAR_10->flags))
  FUNC_1(VAR_10);
}
