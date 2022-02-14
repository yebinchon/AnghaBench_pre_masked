
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct fe_priv {int txrxctl_bits; int lock; struct vlan_group* vlangrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct fe_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3, struct vlan_group *VAR_4)
{
 struct fe_priv *VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_5->lock);


 VAR_5->vlangrp = VAR_4;

 if (VAR_4) {

  VAR_5->txrxctl_bits |= VAR_1 | VAR_0;
 } else {

  VAR_5->txrxctl_bits &= ~VAR_1;
  VAR_5->txrxctl_bits &= ~VAR_0;
 }

 FUNC_4(VAR_5->txrxctl_bits, FUNC_0(VAR_3) + VAR_2);

 FUNC_3(&VAR_5->lock);
}
