
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct ieee80211_rx_stats {int len; } ;
struct ieee80211_hdr_4addr {int addr3; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_device {scalar_t__ state; TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_device*,struct sk_buff*,struct ieee80211_rx_stats*,int ,int ) ;
 int FUNC_2 (struct ieee80211_device*,struct ieee80211_hdr_4addr*,struct ieee80211_rx_stats*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct ieee80211_device *VAR_2, struct sk_buff *VAR_3,
   struct ieee80211_rx_stats *VAR_4, u16 VAR_5,
   u16 VAR_6)
{
 struct ieee80211_hdr_4addr *VAR_7;


 VAR_7 = (struct ieee80211_hdr_4addr *)VAR_3->data;





 VAR_4->len = VAR_3->len;
 FUNC_2(VAR_2, (struct ieee80211_hdr_4addr *)VAR_3->data,
    VAR_4);

 if((VAR_2->state == VAR_1)&&(FUNC_3(VAR_7->addr3,VAR_2->current_network.bssid,VAR_0))) {
  FUNC_0(VAR_3);
  return 0;
 }

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_3);

 return 0;

}
