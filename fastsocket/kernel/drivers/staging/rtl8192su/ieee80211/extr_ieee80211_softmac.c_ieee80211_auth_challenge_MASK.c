
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct TYPE_2__ {int tx_auth_rq; } ;
struct ieee80211_device {int associate_timer; TYPE_1__ softmac_stats; int associate_seq; struct ieee80211_network current_network; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_device*) ;
 struct sk_buff* FUNC_2 (struct ieee80211_network*,struct ieee80211_device*,int) ;
 int FUNC_3 (struct ieee80211_device*,struct sk_buff*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int * FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,struct ieee80211_device*) ;

void FUNC_9(struct ieee80211_device *VAR_3, u8 *VAR_4, int VAR_5)
{
 u8 *VAR_6;
 struct sk_buff *VAR_7;
 struct ieee80211_network *VAR_8 = &VAR_3->current_network;


 VAR_3->associate_seq++;
 VAR_3->softmac_stats.tx_auth_rq++;

 VAR_7 = FUNC_2(VAR_8, VAR_3, VAR_5+2);
 if (!VAR_7)
  FUNC_1(VAR_3);
 else{
  VAR_6 = FUNC_7(VAR_7, VAR_5+2);
  *(VAR_6++) = VAR_1;
  *(VAR_6++) = VAR_5;
  FUNC_5(VAR_6, VAR_4, VAR_5);

  FUNC_0("Sending authentication challenge response\n");

  FUNC_3(VAR_3, VAR_7, sizeof(struct ieee80211_hdr_3addr ));

  FUNC_8(VAR_7, VAR_3);
  FUNC_6(&VAR_3->associate_timer, VAR_2 + (VAR_0/2));

 }
 FUNC_4(VAR_4);
}
