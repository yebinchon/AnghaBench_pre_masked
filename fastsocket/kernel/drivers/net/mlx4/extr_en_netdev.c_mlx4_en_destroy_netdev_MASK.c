
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {size_t port; int tx_cq; int tx_ring; int service_task; int stats_task; int res; scalar_t__ allocated; scalar_t__ registered; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int ** pndev; int workqueue; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx4_en_priv*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mlx4_en_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

void FUNC_11(struct net_device *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_9(VAR_2);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;

 FUNC_1(VAR_0, VAR_3, "Destroying netdev on port:%d\n", VAR_3->port);


 if (VAR_3->registered)
  FUNC_10(VAR_2);

 if (VAR_3->allocated)
  FUNC_6(VAR_4->dev, &VAR_3->res, VAR_1);

 FUNC_0(&VAR_3->stats_task);
 FUNC_0(&VAR_3->service_task);

 FUNC_2(VAR_4->workqueue);


 FUNC_7(&VAR_4->state_lock);
 VAR_4->pndev[VAR_3->port] = ((void*)0);
 FUNC_8(&VAR_4->state_lock);

 FUNC_5(VAR_3);

 FUNC_4(VAR_3->tx_ring);
 FUNC_4(VAR_3->tx_cq);

 FUNC_3(VAR_2);
}
