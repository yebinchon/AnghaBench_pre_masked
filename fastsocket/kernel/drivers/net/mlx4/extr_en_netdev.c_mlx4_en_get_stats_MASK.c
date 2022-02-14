
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {struct net_device_stats ret_stats; int stats_lock; int stats; } ;


 int FUNC_0 (struct net_device_stats*,int *,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct mlx4_en_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->stats_lock);
 FUNC_0(&VAR_1->ret_stats, &VAR_1->stats, sizeof(VAR_1->stats));
 FUNC_3(&VAR_1->stats_lock);

 return &VAR_1->ret_stats;
}
