
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int ) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2, u8 *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_3(VAR_1);
 struct mlx4_en_dev *VAR_5 = VAR_4->mdev;
 u64 VAR_6 = FUNC_1(VAR_3);

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return FUNC_2(VAR_5->dev, VAR_4->port, VAR_2, VAR_6);
}
