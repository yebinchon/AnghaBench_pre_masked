
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct atlx_adapter {int lock; TYPE_1__ hw; struct vlan_group* vlgrp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct atlx_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
 struct vlan_group *VAR_3)
{
 struct atlx_adapter *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_3(&VAR_4->lock, VAR_5);

 VAR_4->vlgrp = VAR_3;

 if (VAR_3) {

  VAR_6 = FUNC_0(VAR_4->hw.hw_addr + VAR_1);
  VAR_6 |= VAR_0;
  FUNC_1(VAR_6, VAR_4->hw.hw_addr + VAR_1);
 } else {

  VAR_6 = FUNC_0(VAR_4->hw.hw_addr + VAR_1);
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_6, VAR_4->hw.hw_addr + VAR_1);
 }


 FUNC_4(&VAR_4->lock, VAR_5);
}
