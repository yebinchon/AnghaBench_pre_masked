
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int * ptp_tx_skb; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct igb_adapter*,struct skb_shared_hwtstamps*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct skb_shared_hwtstamps*) ;

void FUNC_4(struct igb_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 struct skb_shared_hwtstamps VAR_4;
 u64 VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 VAR_5 |= (u64)FUNC_2(VAR_0) << 32;

 FUNC_1(VAR_2, &VAR_4, VAR_5);
 FUNC_3(VAR_2->ptp_tx_skb, &VAR_4);
 FUNC_0(VAR_2->ptp_tx_skb);
 VAR_2->ptp_tx_skb = ((void*)0);
}
