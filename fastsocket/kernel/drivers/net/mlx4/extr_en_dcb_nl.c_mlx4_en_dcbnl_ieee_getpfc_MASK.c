
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; } ;
struct ieee_pfc {int pfc_en; int pfc_cap; } ;
struct TYPE_2__ {int tx_ppp; } ;


 int VAR_0 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
  struct ieee_pfc *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_0(VAR_1);

 VAR_2->pfc_cap = VAR_0;
 VAR_2->pfc_en = VAR_3->prof->tx_ppp;

 return 0;
}
