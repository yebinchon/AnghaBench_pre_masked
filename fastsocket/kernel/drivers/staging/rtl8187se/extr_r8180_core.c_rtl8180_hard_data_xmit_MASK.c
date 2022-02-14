
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; int priority; } ;
struct r8180_priv {int tx_lock; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_hdr_3addr {short frame_ctl; } ;
struct TYPE_2__ {int iw_mode; scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 short VAR_0 ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*,scalar_t__,int ,int,short,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct sk_buff *VAR_1,struct net_device *VAR_2, int
VAR_3)
{
 struct r8180_priv *VAR_4 = (struct r8180_priv *)FUNC_4(VAR_2);
 int VAR_5;
 struct ieee80211_hdr_3addr *VAR_6 = (struct ieee80211_hdr_3addr *) VAR_1->data;
 short VAR_7 = (VAR_6->frame_ctl) & VAR_0;
 unsigned long VAR_8;
 int VAR_9;

 VAR_5 = VAR_4->ieee80211->iw_mode;

 VAR_3 = FUNC_6(VAR_3);







 VAR_9 = FUNC_0(VAR_1->priority);
 FUNC_8(&VAR_4->tx_lock,VAR_8);

 if(VAR_4->ieee80211->bHwRadioOff)
 {
  FUNC_9(&VAR_4->tx_lock,VAR_8);

  return;
 }

 if (!FUNC_2(VAR_2, VAR_9)){
  FUNC_1("Error: no descriptor left by previous TX (avail %d) ",
   FUNC_3(VAR_2, VAR_9));
  FUNC_5(VAR_4->ieee80211);
 }
 FUNC_7(VAR_2, VAR_1->data, VAR_1->len, VAR_9, VAR_7,0,VAR_3);
 if (!FUNC_2(VAR_2, VAR_9))
  FUNC_5(VAR_4->ieee80211);

 FUNC_9(&VAR_4->tx_lock,VAR_8);
}
