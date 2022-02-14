
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_rss_map {scalar_t__ base_qpn; TYPE_1__* qps; } ;
struct mlx4_en_priv {size_t rx_ring_num; TYPE_2__* prof; struct mlx4_en_rss_map rss_map; } ;
struct TYPE_4__ {int rss_rings; } ;
struct TYPE_3__ {scalar_t__ qpn; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_0(VAR_0);
 struct mlx4_en_rss_map *VAR_3 = &VAR_2->rss_map;
 int VAR_4;
 size_t VAR_5 = VAR_2->rx_ring_num;
 int VAR_6 = 0;

 VAR_4 = VAR_2->prof->rss_rings ?: VAR_2->rx_ring_num;

 while (VAR_5--) {
  VAR_1[VAR_5] = VAR_3->qps[VAR_5 % VAR_4].qpn -
   VAR_3->base_qpn;
 }

 return VAR_6;
}
