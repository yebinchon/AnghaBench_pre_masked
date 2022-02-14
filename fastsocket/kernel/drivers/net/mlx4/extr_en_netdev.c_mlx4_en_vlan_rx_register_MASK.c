
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; scalar_t__ port_up; struct vlan_group* vlgrp; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int dev; scalar_t__ device_up; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,struct vlan_group*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ,int ,struct vlan_group*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1, struct vlan_group *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_5(VAR_1);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 int VAR_5;

 FUNC_0(VAR_0, VAR_3, "Registering VLAN group:%p\n", VAR_2);
 VAR_3->vlgrp = VAR_2;

 FUNC_3(&VAR_4->state_lock);
 if (VAR_4->device_up && VAR_3->port_up) {
  VAR_5 = FUNC_2(VAR_4->dev, VAR_3->port, VAR_2);
  if (VAR_5)
   FUNC_1(VAR_3, "Failed configuring VLAN filter\n");
 }
 FUNC_4(&VAR_4->state_lock);
}
