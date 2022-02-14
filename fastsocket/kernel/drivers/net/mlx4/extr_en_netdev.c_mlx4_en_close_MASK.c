
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_4(VAR_1);
 struct mlx4_en_dev *VAR_3 = VAR_2->mdev;

 FUNC_0(VAR_0, VAR_2, "Close port called\n");

 FUNC_2(&VAR_3->state_lock);

 FUNC_1(VAR_1, 0);
 FUNC_5(VAR_1);

 FUNC_3(&VAR_3->state_lock);
 return 0;
}
