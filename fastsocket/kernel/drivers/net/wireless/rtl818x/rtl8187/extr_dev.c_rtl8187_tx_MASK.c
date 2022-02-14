
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct urb {int transfer_flags; struct rtl8187_priv* priv; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtl8187b_tx_hdr {int tx_duration; void* retry; void* rts_duration; void* flags; } ;
struct rtl8187_tx_hdr {void* retry; void* rts_duration; scalar_t__ len; void* flags; } ;
struct rtl8187_priv {int seqno; int anchored; int udev; int vif; int is_rtl8187b; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; struct urb** rate_driver_data; int band; TYPE_2__ control; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_rate {int hw_value; } ;
struct ieee80211_hw {int transfer_flags; struct rtl8187_priv* priv; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
typedef void* __le16 ;
struct TYPE_6__ {int hw_value; } ;
struct TYPE_4__ {int flags; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct urb*,int ,int ,int,struct ieee80211_rate*) ;
 TYPE_3__* FUNC_4 (struct urb*,struct ieee80211_tx_info*) ;
 struct ieee80211_rate* FUNC_5 (struct urb*,struct ieee80211_tx_info*) ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (struct urb*,int ,int,struct ieee80211_tx_info*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rtl8187b_tx_hdr*,int ,int) ;
 int VAR_13 ;
 size_t FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int) ;
 struct urb* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct urb*,int *) ;
 int FUNC_15 (struct urb*,int ,int ,void*,int,int ,struct sk_buff*) ;
 int FUNC_16 (struct urb*) ;
 int FUNC_17 (int ,unsigned int) ;
 int FUNC_18 (struct urb*,int ) ;
 int FUNC_19 (struct urb*) ;

__attribute__((used)) static void FUNC_20(struct ieee80211_hw *VAR_14,
         struct ieee80211_tx_control *VAR_15,
         struct sk_buff *VAR_16)
{
 struct rtl8187_priv *VAR_17 = VAR_14->priv;
 struct ieee80211_tx_info *VAR_18 = FUNC_0(VAR_16);
 struct ieee80211_hdr *VAR_19 = (struct ieee80211_hdr *)(VAR_16->data);
 unsigned int VAR_20;
 void *VAR_21;
 struct urb *VAR_22;
 __le16 VAR_23 = 0;
 u32 VAR_24;
 int VAR_25;

 VAR_22 = FUNC_13(0, VAR_0);
 if (!VAR_22) {
  FUNC_8(VAR_16);
  return;
 }

 VAR_24 = VAR_16->len;
 VAR_24 |= VAR_10;

 VAR_24 |= FUNC_5(VAR_14, VAR_18)->hw_value << 24;
 if (FUNC_6(VAR_19->frame_control))
  VAR_24 |= VAR_9;
 if (VAR_18->control.rates[0].flags & VAR_7) {
  VAR_24 |= VAR_11;
  VAR_24 |= FUNC_4(VAR_14, VAR_18)->hw_value << 19;
  VAR_23 = FUNC_7(VAR_14, VAR_17->vif,
       VAR_16->len, VAR_18);
 } else if (VAR_18->control.rates[0].flags & VAR_6) {
  VAR_24 |= VAR_8;
  VAR_24 |= FUNC_4(VAR_14, VAR_18)->hw_value << 19;
 }

 if (VAR_18->flags & VAR_4) {
  if (VAR_18->flags & VAR_5)
   VAR_17->seqno += 0x10;
  VAR_19->seq_ctrl &= FUNC_1(VAR_3);
  VAR_19->seq_ctrl |= FUNC_1(VAR_17->seqno);
 }

 if (!VAR_17->is_rtl8187b) {
  struct rtl8187_tx_hdr *VAR_26 =
   (struct rtl8187_tx_hdr *)FUNC_12(VAR_16, sizeof(*VAR_26));
  VAR_26->flags = FUNC_2(VAR_24);
  VAR_26->len = 0;
  VAR_26->rts_duration = VAR_23;
  VAR_26->retry = FUNC_2((VAR_18->control.rates[0].count - 1) << 8);
  VAR_21 = VAR_26;

  VAR_20 = 2;
 } else {

  unsigned int VAR_27[4] = { 6, 7, 5, 4 };
  u16 VAR_28 = FUNC_9(VAR_19->frame_control);

  struct rtl8187b_tx_hdr *VAR_29 =
   (struct rtl8187b_tx_hdr *)FUNC_12(VAR_16, sizeof(*VAR_29));
  struct ieee80211_rate *VAR_30 =
   FUNC_5(VAR_14, VAR_18);
  FUNC_10(VAR_29, 0, sizeof(*VAR_29));
  VAR_29->flags = FUNC_2(VAR_24);
  VAR_29->rts_duration = VAR_23;
  VAR_29->retry = FUNC_2((VAR_18->control.rates[0].count - 1) << 8);
  VAR_29->tx_duration =
   FUNC_3(VAR_14, VAR_17->vif,
        VAR_18->band,
        VAR_16->len, VAR_30);
  VAR_21 = VAR_29;

  if ((VAR_28 & VAR_1) == VAR_2)
   VAR_20 = 12;
  else
   VAR_20 = VAR_27[FUNC_11(VAR_16)];
 }

 VAR_18->rate_driver_data[0] = VAR_14;
 VAR_18->rate_driver_data[1] = VAR_22;

 FUNC_15(VAR_22, VAR_17->udev, FUNC_17(VAR_17->udev, VAR_20),
     VAR_21, VAR_16->len, VAR_13, VAR_16);
 VAR_22->transfer_flags |= VAR_12;
 FUNC_14(VAR_22, &VAR_17->anchored);
 VAR_25 = FUNC_18(VAR_22, VAR_0);
 if (VAR_25 < 0) {
  FUNC_19(VAR_22);
  FUNC_8(VAR_16);
 }
 FUNC_16(VAR_22);
}
