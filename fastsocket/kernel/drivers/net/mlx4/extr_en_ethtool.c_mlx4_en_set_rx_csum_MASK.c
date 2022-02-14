
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int rx_csum; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_0(VAR_0);
 VAR_2->rx_csum = (VAR_1 != 0);
 return 0;
}
