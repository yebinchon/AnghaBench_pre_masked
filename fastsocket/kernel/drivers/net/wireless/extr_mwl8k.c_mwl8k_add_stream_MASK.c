
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwl8k_priv {struct mwl8k_ampdu_stream* ampdu; } ;
struct mwl8k_ampdu_stream {scalar_t__ state; int idx; int tid; struct ieee80211_sta* sta; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int wiphy; struct mwl8k_priv* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static struct mwl8k_ampdu_stream *
FUNC_1(struct ieee80211_hw *VAR_3, struct ieee80211_sta *VAR_4, u8 VAR_5)
{
 struct mwl8k_ampdu_stream *VAR_6;
 struct mwl8k_priv *VAR_7 = VAR_3->priv;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6 = &VAR_7->ampdu[VAR_8];
  if (VAR_6->state == VAR_0) {
   VAR_6->sta = VAR_4;
   VAR_6->state = VAR_1;
   VAR_6->tid = VAR_5;
   VAR_6->idx = VAR_8;
   FUNC_0(VAR_3->wiphy, "Added a new stream for %pM %d",
        VAR_4->addr, VAR_5);
   return VAR_6;
  }
 }
 return ((void*)0);
}
