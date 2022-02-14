
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {int ets; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct ieee_ets {int prio_tc; } ;


 int FUNC_0 (int *,struct ieee_ets*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlx4_en_priv*,struct ieee_ets*,int *) ;
 int FUNC_3 (struct mlx4_en_priv*,struct ieee_ets*) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_0, struct ieee_ets *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_4(VAR_0);
 struct mlx4_en_dev *VAR_3 = VAR_2->mdev;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->dev, VAR_2->port, VAR_1->prio_tc);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1, ((void*)0));
 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_2->ets, VAR_1, sizeof(VAR_2->ets));

 return 0;
}
