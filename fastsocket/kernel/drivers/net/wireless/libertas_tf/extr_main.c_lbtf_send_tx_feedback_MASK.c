
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct txpd {int dummy; } ;
struct lbtf_private {int tx_work; int hw; int bc_ps_buf; int skb_to_tx; int * tx_skb; } ;
struct ieee80211_tx_info {int flags; } ;


 struct ieee80211_tx_info* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(struct lbtf_private *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_3->tx_skb);

 FUNC_1(VAR_6);






 if (!(VAR_6->flags & VAR_0) && !VAR_5)
  VAR_6->flags |= VAR_1;
 FUNC_5(VAR_3->tx_skb, sizeof(struct txpd));
 FUNC_2(VAR_3->hw, VAR_3->tx_skb);
 VAR_3->tx_skb = ((void*)0);
 if (!VAR_3->skb_to_tx && FUNC_6(&VAR_3->bc_ps_buf))
  FUNC_3(VAR_3->hw);
 else
  FUNC_4(VAR_2, &VAR_3->tx_work);
}
