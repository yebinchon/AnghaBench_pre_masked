
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee_ets {int prio_tc; int tc_tsa; int tc_tx_bw; int cbs; int ets_cap; } ;
struct mlx4_en_priv {struct ieee_ets ets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
       struct ieee_ets *VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_1(VAR_2);
 struct ieee_ets *VAR_5 = &VAR_4->ets;


 if (!VAR_5)
  return -VAR_0;

 VAR_3->ets_cap = VAR_1;
 VAR_3->cbs = VAR_5->cbs;
 FUNC_0(VAR_3->tc_tx_bw, VAR_5->tc_tx_bw, sizeof(VAR_3->tc_tx_bw));
 FUNC_0(VAR_3->tc_tsa, VAR_5->tc_tsa, sizeof(VAR_3->tc_tsa));
 FUNC_0(VAR_3->prio_tc, VAR_5->prio_tc, sizeof(VAR_3->prio_tc));

 return 0;
}
