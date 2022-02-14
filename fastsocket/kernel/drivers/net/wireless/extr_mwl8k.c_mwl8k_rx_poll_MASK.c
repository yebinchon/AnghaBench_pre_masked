
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int poll_rx_task; scalar_t__ regs; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,int ,int) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct ieee80211_hw *VAR_3 = (struct ieee80211_hw *)VAR_2;
 struct mwl8k_priv *VAR_4 = VAR_3->priv;
 int VAR_5;

 VAR_5 = 32;
 VAR_5 -= FUNC_0(VAR_3, 0, VAR_5);
 VAR_5 -= FUNC_1(VAR_3, 0, VAR_5);

 if (VAR_5) {
  FUNC_3(~VAR_0,
         VAR_4->regs + VAR_1);
 } else {
  FUNC_2(&VAR_4->poll_rx_task);
 }
}
