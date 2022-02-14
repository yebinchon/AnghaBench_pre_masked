
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {int tx_ring_num; int rx_ring_num; TYPE_3__* mdev; int stats_bitmap; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = FUNC_0(VAR_6->stats_bitmap);

 switch (VAR_5) {
 case 129:
  return (VAR_6->stats_bitmap ? VAR_7 : VAR_3) +
   (VAR_6->tx_ring_num + VAR_6->rx_ring_num) * 2;
 case 128:
  return VAR_2 - !(VAR_6->mdev->dev->caps.flags
     & VAR_1) * 2;
 default:
  return -VAR_0;
 }
}
