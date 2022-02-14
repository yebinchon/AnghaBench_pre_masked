
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct il_rx_pkt {int dummy; } ;
struct il_rx_buf {int * page; } ;
struct TYPE_3__ {int rx_page_order; } ;
struct il_priv {int alloc_rxb_page; int hw; int is_open; TYPE_1__ hw_params; } ;
struct il3945_rx_frame_hdr {scalar_t__ payload; int len; } ;
struct il3945_rx_frame_end {int status; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_4__ {int sw_crypto; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct il_rx_pkt*) ;
 struct il3945_rx_frame_end* FUNC_4 (struct il_rx_pkt*) ;
 struct il3945_rx_frame_hdr* FUNC_5 (struct il_rx_pkt*) ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_6 (int) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_8 (struct il_priv*,struct ieee80211_hdr*,int ,struct ieee80211_rx_status*) ;
 int FUNC_9 (struct il_priv*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct ieee80211_rx_status*,int) ;
 struct il_rx_pkt* FUNC_13 (struct il_rx_buf*) ;
 int FUNC_14 (struct sk_buff*,int ,int *,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(struct il_priv *VAR_3, struct il_rx_buf *VAR_4,
          struct ieee80211_rx_status *VAR_5)
{
 struct il_rx_pkt *VAR_6 = FUNC_13(VAR_4);
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)FUNC_3(VAR_6);
 struct il3945_rx_frame_hdr *VAR_8 = FUNC_5(VAR_6);
 struct il3945_rx_frame_end *VAR_9 = FUNC_4(VAR_6);
 u16 VAR_10 = FUNC_10(VAR_8->len);
 struct sk_buff *VAR_11;
 __le16 VAR_12 = VAR_7->frame_control;


 if (FUNC_15
     (VAR_10 + VAR_0 >
      VAR_1 << VAR_3->hw_params.rx_page_order)) {
  FUNC_0("Corruption detected!\n");
  return;
 }


 if (FUNC_15(!VAR_3->is_open)) {
  FUNC_0("Dropping packet while interface is not open.\n");
  return;
 }

 VAR_11 = FUNC_6(128);
 if (!VAR_11) {
  FUNC_2("dev_alloc_skb failed\n");
  return;
 }

 if (!VAR_2.sw_crypto)
  FUNC_8(VAR_3, (struct ieee80211_hdr *)FUNC_13(VAR_4),
          FUNC_11(VAR_9->status), VAR_5);

 FUNC_14(VAR_11, 0, VAR_4->page,
   (void *)VAR_8->payload - (void *)VAR_6, VAR_10,
   VAR_10);

 FUNC_9(VAR_3, 0, VAR_12, VAR_10);
 FUNC_12(FUNC_1(VAR_11), VAR_5, sizeof(*VAR_5));

 FUNC_7(VAR_3->hw, VAR_11);
 VAR_3->alloc_rxb_page--;
 VAR_4->page = ((void*)0);
}
