
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ vlan_id; int status; } ;
struct e1000_hw {TYPE_1__ mng_cookie; } ;
struct e1000_adapter {scalar_t__ mng_vlan_id; scalar_t__ vlgrp; struct net_device* netdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 struct net_device *VAR_4 = VAR_2->netdev;
 u16 VAR_5 = VAR_3->mng_cookie.vlan_id;
 u16 VAR_6 = VAR_2->mng_vlan_id;
 if (VAR_2->vlgrp) {
  if (!FUNC_2(VAR_2->vlgrp, VAR_5)) {
   if (VAR_3->mng_cookie.status &
    VAR_0) {
    FUNC_0(VAR_4, VAR_5);
    VAR_2->mng_vlan_id = VAR_5;
   } else
    VAR_2->mng_vlan_id = VAR_1;

   if ((VAR_6 != (u16)VAR_1) &&
     (VAR_5 != VAR_6) &&
       !FUNC_2(VAR_2->vlgrp, VAR_6))
    FUNC_1(VAR_4, VAR_6);
  } else
   VAR_2->mng_vlan_id = VAR_5;
 }
}
