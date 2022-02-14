
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {int dummy; } ;
struct sk_buff {int priority; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_hdr_3addr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_hdr_3addr* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_hdr_3addr*,int ,int) ;
 struct ieee80211_hdr_3addr* FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct wl1271 *VAR_5)
{
 struct sk_buff *VAR_6;
 struct ieee80211_hdr_3addr *VAR_7;
 unsigned int VAR_8;

 VAR_8 = VAR_3 -
       sizeof(struct wl1271_tx_hw_descr) - sizeof(*VAR_7);

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6) {
  FUNC_7("Failed to allocate a dummy packet skb");
  return ((void*)0);
 }

 FUNC_5(VAR_6, sizeof(struct wl1271_tx_hw_descr));

 VAR_7 = (struct ieee80211_hdr_3addr *) FUNC_4(VAR_6, sizeof(*VAR_7));
 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->frame_control = FUNC_1(VAR_1 |
      VAR_2 |
      VAR_0);

 FUNC_3(FUNC_4(VAR_6, VAR_8), 0, VAR_8);


 VAR_6->priority = VAR_4;


 FUNC_6(VAR_6, 0);
 FUNC_3(FUNC_0(VAR_6), 0, sizeof(struct ieee80211_tx_info));

 return VAR_6;
}
