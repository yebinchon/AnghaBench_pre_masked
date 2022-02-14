
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ num_tx_rings_p_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,scalar_t__,unsigned int) ;

int FUNC_3(struct net_device *VAR_2, u8 VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 unsigned int VAR_6 = 0;

 if (VAR_3 && VAR_3 != VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_3);


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_2(VAR_2, VAR_5, VAR_4->num_tx_rings_p_up, VAR_6);
  VAR_6 += VAR_4->num_tx_rings_p_up;
 }

 return 0;
}
