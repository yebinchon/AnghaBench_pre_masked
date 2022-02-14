
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txentry_desc {scalar_t__ retry_limit; int rate_mode; int flags; int header_length; int length; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rt2x00_rate {int flags; } ;
struct rt2x00_dev {scalar_t__ long_retry; int cap_flags; int hw; } ;
struct ieee80211_tx_rate {scalar_t__ count; int flags; } ;
struct TYPE_2__ {scalar_t__ rts_cts_rate_idx; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rate {int hw_value; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ieee80211_rate* FUNC_3 (int ,struct ieee80211_tx_info*) ;
 struct ieee80211_rate* FUNC_4 (int ,struct ieee80211_tx_info*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct txentry_desc*,int ,int) ;
 struct rt2x00_rate* FUNC_11 (int ) ;
 int FUNC_12 (struct rt2x00_dev*,struct sk_buff*,struct txentry_desc*) ;
 int FUNC_13 (struct rt2x00_dev*,struct sk_buff*,struct txentry_desc*,struct ieee80211_sta*,struct rt2x00_rate const*) ;
 int FUNC_14 (struct rt2x00_dev*,struct sk_buff*,struct txentry_desc*,struct rt2x00_rate const*) ;
 int FUNC_15 (struct rt2x00_dev*,struct sk_buff*,struct txentry_desc*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct rt2x00_dev *VAR_19,
          struct sk_buff *VAR_20,
          struct txentry_desc *VAR_21,
          struct ieee80211_sta *VAR_22)
{
 struct ieee80211_tx_info *VAR_23 = FUNC_0(VAR_20);
 struct ieee80211_hdr *VAR_24 = (struct ieee80211_hdr *)VAR_20->data;
 struct ieee80211_tx_rate *VAR_25 = &VAR_23->control.rates[0];
 struct ieee80211_rate *VAR_26;
 const struct rt2x00_rate *VAR_27 = ((void*)0);

 FUNC_10(VAR_21, 0, sizeof(*VAR_21));




 VAR_21->length = VAR_20->len;
 VAR_21->header_length = FUNC_2(VAR_20);




 if (!(VAR_23->flags & VAR_11))
  FUNC_1(VAR_1, &VAR_21->flags);




 if (FUNC_9(VAR_24->frame_control) ||
     FUNC_7(VAR_24->frame_control)) {
  FUNC_1(VAR_2, &VAR_21->flags);
  if (FUNC_9(VAR_24->frame_control))
   FUNC_1(VAR_8, &VAR_21->flags);
  else
   FUNC_1(VAR_3, &VAR_21->flags);
  if (VAR_23->control.rts_cts_rate_idx >= 0)
   VAR_26 =
       FUNC_3(VAR_19->hw, VAR_23);
 }




 VAR_21->retry_limit = VAR_23->control.rates[0].count - 1;
 if (VAR_21->retry_limit >= VAR_19->long_retry)
  FUNC_1(VAR_7, &VAR_21->flags);




 if (FUNC_5(VAR_24->frame_control)) {
  FUNC_1(VAR_2, &VAR_21->flags);
  FUNC_1(VAR_5, &VAR_21->flags);
 }




 if (VAR_23->flags & VAR_10)
  FUNC_1(VAR_2, &VAR_21->flags);





 if (FUNC_6(VAR_24->frame_control) ||
     FUNC_8(VAR_24->frame_control))
  FUNC_1(VAR_6, &VAR_21->flags);

 if ((VAR_23->flags & VAR_9) &&
     !FUNC_16(VAR_8, &VAR_21->flags))
  FUNC_1(VAR_4, &VAR_21->flags);




 if (VAR_25->flags & VAR_12)
  VAR_21->rate_mode = VAR_15;
 else if (VAR_25->flags & VAR_13)
  VAR_21->rate_mode = VAR_16;
 else {
  VAR_26 = FUNC_4(VAR_19->hw, VAR_23);
  VAR_27 = FUNC_11(VAR_26->hw_value);
  if (VAR_27->flags & VAR_0)
   VAR_21->rate_mode = VAR_17;
  else
   VAR_21->rate_mode = VAR_14;
 }




 FUNC_12(VAR_19, VAR_20, VAR_21);
 FUNC_15(VAR_19, VAR_20, VAR_21);

 if (FUNC_16(VAR_18, &VAR_19->cap_flags))
  FUNC_13(VAR_19, VAR_20, VAR_21,
         VAR_22, VAR_27);
 else
  FUNC_14(VAR_19, VAR_20, VAR_21,
            VAR_27);
}
