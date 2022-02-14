
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int pg_tcs; } ;
struct TYPE_4__ {TYPE_1__ num_tcs; } ;
struct ixgbe_adapter {TYPE_2__ dcb_cfg; struct ieee_ets* ixgbe_ieee_ets; } ;
struct ieee_ets {int prio_tc; int tc_tsa; int tc_rx_bw; int tc_tx_bw; int cbs; int ets_cap; } ;


 int FUNC_0 (int ,int ,int) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
       struct ieee_ets *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_1(VAR_0);
 struct ieee_ets *VAR_3 = VAR_2->ixgbe_ieee_ets;

 VAR_1->ets_cap = VAR_2->dcb_cfg.num_tcs.pg_tcs;


 if (!VAR_3)
  return 0;

 VAR_1->cbs = VAR_3->cbs;
 FUNC_0(VAR_1->tc_tx_bw, VAR_3->tc_tx_bw, sizeof(VAR_1->tc_tx_bw));
 FUNC_0(VAR_1->tc_rx_bw, VAR_3->tc_rx_bw, sizeof(VAR_1->tc_rx_bw));
 FUNC_0(VAR_1->tc_tsa, VAR_3->tc_tsa, sizeof(VAR_1->tc_tsa));
 FUNC_0(VAR_1->prio_tc, VAR_3->prio_tc, sizeof(VAR_1->prio_tc));
 return 0;
}
