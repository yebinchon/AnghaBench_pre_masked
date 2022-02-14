
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int rx_ring_num; TYPE_1__* prof; scalar_t__ port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;
struct TYPE_2__ {int rss_rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mlx4_en_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1,
  const u32 *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_6(VAR_1);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8 = 0;




 for (VAR_7 = 0; VAR_7 < VAR_3->rx_ring_num; VAR_7++) {
  if (VAR_7 > 0 && !VAR_2[VAR_7] && !VAR_8)
   VAR_8 = VAR_7;

  if (VAR_2[VAR_7] != (VAR_7 % (VAR_8 ?: VAR_3->rx_ring_num)))
   return -VAR_0;
 }

 if (!VAR_8)
  VAR_8 = VAR_3->rx_ring_num;


 if (!FUNC_1(VAR_8))
  return -VAR_0;

 FUNC_4(&VAR_4->state_lock);
 if (VAR_3->port_up) {
  VAR_5 = 1;
  FUNC_3(VAR_1, 1);
 }

 VAR_3->prof->rss_rings = VAR_8;

 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_1);
  if (VAR_6)
   FUNC_0(VAR_3, "Failed starting port\n");
 }

 FUNC_5(&VAR_4->state_lock);
 return VAR_6;
}
