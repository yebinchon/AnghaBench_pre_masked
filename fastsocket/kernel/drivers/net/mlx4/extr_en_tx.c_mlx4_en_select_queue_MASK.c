
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int num_tx_rings_p_up; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

u16 FUNC_6(struct net_device *VAR_1, struct sk_buff *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4 = VAR_3->num_tx_rings_p_up;
 u8 VAR_5 = 0;

 if (FUNC_1(VAR_1))
  return FUNC_3(VAR_1, VAR_2);

 if (FUNC_5(VAR_2))
  VAR_5 = FUNC_4(VAR_2) >> VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_4) + VAR_5 * VAR_4;
}
