
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int vlgrp; int port; scalar_t__ port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int dev; scalar_t__ device_up; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,unsigned short,...) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,unsigned short,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mlx4_en_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,unsigned short) ;
 int FUNC_9 (int ,unsigned short,int *) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_1, unsigned short VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_7(VAR_1);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 int VAR_5;
 int VAR_6;

 if (!VAR_3->vlgrp)
  return;

 FUNC_0(VAR_0, VAR_3, "Killing VID:%d (vlgrp:%p vlgrp entry:%p)\n",
        VAR_2, VAR_3->vlgrp, FUNC_8(VAR_3->vlgrp, VAR_2));
 FUNC_9(VAR_3->vlgrp, VAR_2, ((void*)0));


 FUNC_5(&VAR_4->state_lock);
 if (!FUNC_3(VAR_4->dev, VAR_3->port, VAR_2, &VAR_6))
  FUNC_4(VAR_4->dev, VAR_3->port, VAR_6);
 else
  FUNC_0(VAR_0, VAR_3, "could not find vid %d in cache\n", VAR_2);

 if (VAR_4->device_up && VAR_3->port_up) {
  VAR_5 = FUNC_2(VAR_4->dev, VAR_3->port, VAR_3->vlgrp);
  if (VAR_5)
   FUNC_1(VAR_3, "Failed configuring VLAN filter\n");
 }
 FUNC_6(&VAR_4->state_lock);
}
