
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlx4_en_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, void *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_5(VAR_2);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 struct sockaddr *VAR_6 = VAR_3;
 int VAR_7;

 if (!FUNC_0(VAR_6->sa_data))
  return -VAR_0;

 FUNC_1(VAR_2->dev_addr, VAR_6->sa_data, VAR_1);

 FUNC_3(&VAR_5->state_lock);
 VAR_7 = FUNC_2(VAR_4);
 FUNC_4(&VAR_5->state_lock);

 return VAR_7;
}
