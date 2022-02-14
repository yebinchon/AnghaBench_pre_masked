
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_2__ {int tx_type; int rx_filter; } ;
struct mlx4_en_priv {TYPE_1__ hwtstamp_config; scalar_t__ port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (struct mlx4_en_priv*) ;
 int FUNC_3 (struct mlx4_en_priv*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_9(VAR_2);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_6(&VAR_6->state_lock);
 if (VAR_5->port_up) {
  VAR_7 = 1;
  FUNC_5(VAR_2, 1);
 }

 FUNC_3(VAR_5);

 FUNC_1(VAR_5, "Changing Time Stamp configuration\n");

 VAR_5->hwtstamp_config.tx_type = VAR_3;
 VAR_5->hwtstamp_config.rx_filter = VAR_4;

 if (VAR_4 != VAR_0)
  VAR_2->features &= ~VAR_1;
 else
  VAR_2->features |= VAR_1;

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  FUNC_0(VAR_5, "Failed reallocating port resources\n");
  goto out;
 }
 if (VAR_7) {
  VAR_8 = FUNC_4(VAR_2);
  if (VAR_8)
   FUNC_0(VAR_5, "Failed starting port\n");
 }

out:
 FUNC_7(&VAR_6->state_lock);
 FUNC_8(VAR_2);
 return VAR_8;
}
