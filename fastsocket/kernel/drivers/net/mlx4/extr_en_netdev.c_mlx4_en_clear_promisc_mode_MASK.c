
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mlx4_en_priv {int flags; int vlgrp; int port; int base_qpn; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_7__ {int steering_mode; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_7 (struct mlx4_en_priv*) ;

__attribute__((used)) static void FUNC_8(struct mlx4_en_priv *VAR_3,
           struct mlx4_en_dev *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_7(VAR_3))
  FUNC_1(VAR_3, "Leaving promiscuous mode\n");
 VAR_3->flags &= ~VAR_1;


 switch (VAR_4->dev->caps.steering_mode) {
 case 128:
  VAR_5 = FUNC_4(VAR_4->dev,
           VAR_3->port,
           VAR_2);
  if (VAR_5)
   FUNC_0(VAR_3, "Failed disabling promiscuous mode\n");
  VAR_3->flags &= ~VAR_0;
  break;

 case 129:
  VAR_5 = FUNC_6(VAR_4->dev,
        VAR_3->base_qpn,
        VAR_3->port);
  if (VAR_5)
   FUNC_0(VAR_3, "Failed disabling unicast promiscuous mode\n");

  if (VAR_3->flags & VAR_0) {
   VAR_5 = FUNC_5(VAR_4->dev,
           VAR_3->base_qpn,
           VAR_3->port);
   if (VAR_5)
    FUNC_0(VAR_3, "Failed disabling multicast promiscuous mode\n");
   VAR_3->flags &= ~VAR_0;
  }
  break;

 case 130:
  VAR_5 = FUNC_2(VAR_4->dev,
          VAR_3->port,
          VAR_3->base_qpn, 0);
  if (VAR_5)
   FUNC_0(VAR_3, "Failed disabling promiscuous mode\n");
  break;
 }


 VAR_5 = FUNC_3(VAR_4->dev, VAR_3->port, VAR_3->vlgrp);
 if (VAR_5)
  FUNC_0(VAR_3, "Failed enabling VLAN filter\n");
}
