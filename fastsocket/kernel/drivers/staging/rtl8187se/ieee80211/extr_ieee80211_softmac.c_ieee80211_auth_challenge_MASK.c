
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {int tx_auth_rq; } ;
struct ieee80211_device {TYPE_2__ associate_timer; TYPE_1__ softmac_stats; int associate_seq; struct ieee80211_network current_network; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_device*) ;
 struct sk_buff* FUNC_5 (struct ieee80211_network*,struct ieee80211_device*,int) ;
 int FUNC_6 (struct ieee80211_device*,struct sk_buff*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,struct ieee80211_device*) ;
 int FUNC_11 (TYPE_2__*) ;

void FUNC_12(struct ieee80211_device *VAR_3, u8 *VAR_4, int VAR_5)
{
 u8 *VAR_6;
 struct sk_buff *VAR_7;
 struct ieee80211_network *VAR_8 = &VAR_3->current_network;

 FUNC_2(&VAR_3->associate_timer);
 VAR_3->associate_seq++;
 VAR_3->softmac_stats.tx_auth_rq++;

 VAR_7 = FUNC_5(VAR_8, VAR_3, VAR_5+2);
 if (!VAR_7)
  FUNC_4(VAR_3);
 else{
  VAR_6 = FUNC_9(VAR_7, VAR_5+2);
  *(VAR_6++) = VAR_1;
  *(VAR_6++) = VAR_5;
  FUNC_8(VAR_6, VAR_4, VAR_5);

  FUNC_0("Sending authentication challenge response\n");

  FUNC_6(VAR_3, VAR_7, sizeof(struct ieee80211_hdr_3addr ));

  FUNC_10(VAR_7, VAR_3);
  if (!FUNC_11(&VAR_3->associate_timer)){

  VAR_3->associate_timer.expires = VAR_2 + (VAR_0 / 2);
  FUNC_1(&VAR_3->associate_timer);
  }
  FUNC_3(VAR_7);
 }
 FUNC_7(VAR_4);
}
