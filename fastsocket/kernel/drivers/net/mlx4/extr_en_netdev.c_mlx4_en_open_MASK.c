
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int device_up; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_5(VAR_1);
 struct mlx4_en_dev *VAR_3 = VAR_2->mdev;
 int VAR_4 = 0;

 FUNC_3(&VAR_3->state_lock);

 if (!VAR_3->device_up) {
  FUNC_0(VAR_2, "Cannot open - device down/disabled\n");
  VAR_4 = -VAR_0;
  goto out;
 }


 FUNC_1(VAR_1);

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  FUNC_0(VAR_2, "Failed starting port:%d\n", VAR_2->port);

out:
 FUNC_4(&VAR_3->state_lock);
 return VAR_4;
}
