
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {TYPE_1__* beacon_skb; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_2__ {int len; int data; } ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct ieee80211_hdr*,int ,int) ;

unsigned int
FUNC_2(struct il_priv *VAR_0, struct ieee80211_hdr *VAR_1,
    int VAR_2)
{

 if (!FUNC_0(VAR_0) || !VAR_0->beacon_skb)
  return 0;

 if (VAR_0->beacon_skb->len > VAR_2)
  return 0;

 FUNC_1(VAR_1, VAR_0->beacon_skb->data, VAR_0->beacon_skb->len);

 return VAR_0->beacon_skb->len;
}
