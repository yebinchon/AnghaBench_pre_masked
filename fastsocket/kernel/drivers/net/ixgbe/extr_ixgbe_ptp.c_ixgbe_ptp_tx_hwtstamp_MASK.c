
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int * ptp_tx_skb; int tmreg_lock; int tc; struct ixgbe_hw hw; } ;
typedef int shhwtstamps ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,struct skb_shared_hwtstamps*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 struct skb_shared_hwtstamps VAR_4;
 u64 VAR_5 = 0, VAR_6;
 unsigned long VAR_7;

 VAR_5 |= (u64)FUNC_0(VAR_3, VAR_1);
 VAR_5 |= (u64)FUNC_0(VAR_3, VAR_0) << 32;

 FUNC_5(&VAR_2->tmreg_lock, VAR_7);
 VAR_6 = FUNC_7(&VAR_2->tc, VAR_5);
 FUNC_6(&VAR_2->tmreg_lock, VAR_7);

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hwtstamp = FUNC_3(VAR_6);
 FUNC_4(VAR_2->ptp_tx_skb, &VAR_4);

 FUNC_1(VAR_2->ptp_tx_skb);
 VAR_2->ptp_tx_skb = ((void*)0);
}
