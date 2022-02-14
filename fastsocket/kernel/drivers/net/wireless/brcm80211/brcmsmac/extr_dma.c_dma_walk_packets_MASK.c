
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct sk_buff {scalar_t__ cb; } ;
struct ieee80211_tx_info {int dummy; } ;
struct dma_pub {int dummy; } ;
struct dma_info {size_t txin; size_t txout; struct sk_buff** txp; } ;
typedef int callback_fnc ;


 size_t FUNC_0 (struct dma_info*,size_t) ;

void FUNC_1(struct dma_pub *VAR_0, void (*VAR_1)
        (void *VAR_2, void *VAR_3), void *VAR_4)
{
 struct dma_info *VAR_5 = (struct dma_info *) VAR_0;
 uint VAR_6 = VAR_5->txin;
 uint VAR_7 = VAR_5->txout;
 struct sk_buff *VAR_8;
 struct ieee80211_tx_info *VAR_9;

 while (VAR_6 != VAR_7) {
  VAR_8 = VAR_5->txp[VAR_6];
  if (VAR_8 != ((void*)0)) {
   VAR_9 = (struct ieee80211_tx_info *)VAR_8->cb;
   (VAR_1)(VAR_9, VAR_4);
  }
  VAR_6 = FUNC_0(VAR_5, VAR_6);
 }
}
