
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct il_priv {int dummy; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct TYPE_2__ {int bitrate; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_5 (struct il_priv*,int ,struct sk_buff*) ;

void
FUNC_6(struct ieee80211_hw *VAR_0,
       struct ieee80211_tx_control *VAR_1,
       struct sk_buff *VAR_2)
{
 struct il_priv *VAR_3 = VAR_0->priv;

 FUNC_0("enter\n");

 FUNC_1("dev->xmit(%d bytes) at rate 0x%02x\n", VAR_2->len,
      FUNC_4(VAR_0, FUNC_2(VAR_2))->bitrate);

 if (FUNC_5(VAR_3, VAR_1->sta, VAR_2))
  FUNC_3(VAR_2);

 FUNC_0("leave\n");
}
