
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct il_rx_buf {int * page; } ;
struct il_priv {int alloc_rxb_page; int hw; TYPE_2__* cfg; int is_open; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_4__ {TYPE_1__* mod_params; } ;
struct TYPE_3__ {int sw_crypto; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct il_priv*,struct ieee80211_hdr*,int ,struct ieee80211_rx_status*) ;
 int FUNC_6 (struct il_priv*,int,int ,int ) ;
 int FUNC_7 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_8 (struct il_rx_buf*) ;
 int FUNC_9 (struct sk_buff*,int ,int *,void*,int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct il_priv *VAR_0, struct ieee80211_hdr *VAR_1,
          u16 VAR_2, u32 VAR_3, struct il_rx_buf *VAR_4,
          struct ieee80211_rx_status *VAR_5)
{
 struct sk_buff *VAR_6;
 __le16 VAR_7 = VAR_1->frame_control;


 if (FUNC_10(!VAR_0->is_open)) {
  FUNC_0("Dropping packet while interface is not open.\n");
  return;
 }


 if (!VAR_0->cfg->mod_params->sw_crypto &&
     FUNC_5(VAR_0, VAR_1, VAR_3, VAR_5))
  return;

 VAR_6 = FUNC_3(128);
 if (!VAR_6) {
  FUNC_2("dev_alloc_skb failed\n");
  return;
 }

 FUNC_9(VAR_6, 0, VAR_4->page, (void *)VAR_1 - FUNC_8(VAR_4), VAR_2,
   VAR_2);

 FUNC_6(VAR_0, 0, VAR_7, VAR_2);
 FUNC_7(FUNC_1(VAR_6), VAR_5, sizeof(*VAR_5));

 FUNC_4(VAR_0->hw, VAR_6);
 VAR_0->alloc_rxb_page--;
 VAR_4->page = ((void*)0);
}
