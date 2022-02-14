
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct il_priv {int hw; } ;
struct ieee80211_hdr {int addr1; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct il_priv*,int ) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_0, struct sk_buff *VAR_1, bool VAR_2)
{
 struct ieee80211_hdr *VAR_3 = (struct ieee80211_hdr *)VAR_1->data;

 if (!VAR_2)
  FUNC_1(VAR_0, VAR_3->addr1);

 FUNC_0(VAR_0->hw, VAR_1);
}
