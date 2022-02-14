
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {size_t global_hlid; int mgmt_rate_idx; size_t bcast_hlid; int bcast_rate_idx; int* ucast_rate_idx; } ;
struct TYPE_3__ {int basic_rate_idx; int p2p_rate_idx; int ap_rate_idx; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_2__ ap; TYPE_1__ sta; } ;
struct wl1271_tx_hw_descr {size_t hlid; void* tx_attr; int tid; void* life_time; int start_time; } ;
struct wl1271 {size_t* session_ids; int quirks; scalar_t__ time_offset; } ;
struct timespec {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int priority; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int s64 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct timespec*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (size_t*,struct ieee80211_hdr*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct timespec*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct wl1271*,struct sk_buff*) ;
 int FUNC_15 (struct wl1271*,struct wl1271_tx_hw_descr*,struct sk_buff*) ;
 int FUNC_16 (struct wl1271*,struct wl1271_tx_hw_descr*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_17(struct wl1271 *VAR_12, struct wl12xx_vif *VAR_13,
          struct sk_buff *VAR_14, u32 VAR_15,
          struct ieee80211_tx_info *VAR_16, u8 VAR_17)
{
 struct timespec VAR_18;
 struct wl1271_tx_hw_descr *VAR_19;
 int VAR_20, VAR_21;
 s64 VAR_22;
 u16 VAR_23 = 0;
 __le16 VAR_24;
 struct ieee80211_hdr *VAR_25;
 u8 *VAR_26;
 bool VAR_27;

 VAR_19 = (struct wl1271_tx_hw_descr *) VAR_14->data;
 VAR_26 = (u8 *)(VAR_19 + 1);
 VAR_25 = (struct ieee80211_hdr *)(VAR_26 + VAR_15);
 VAR_24 = VAR_25->frame_control;


 if (VAR_15) {
  int VAR_28 = FUNC_5(VAR_24);
  FUNC_8(VAR_26, VAR_25, VAR_28);
  FUNC_11(VAR_14, FUNC_10(VAR_14) + VAR_15);
 }


 FUNC_3(&VAR_18);
 VAR_22 = (FUNC_12(&VAR_18) >> 10);
 VAR_19->start_time = FUNC_2(VAR_22 - VAR_12->time_offset);

 VAR_27 = FUNC_14(VAR_12, VAR_14);
 if (VAR_27 || !VAR_13 || VAR_13->bss_type != VAR_0)
  VAR_19->life_time = FUNC_1(VAR_10);
 else
  VAR_19->life_time = FUNC_1(VAR_4);


 VAR_20 = FUNC_13(FUNC_9(VAR_14));
 VAR_19->tid = VAR_14->priority;

 if (VAR_27) {




  VAR_23 = (VAR_3 <<
      VAR_7) &
      VAR_8;

  VAR_23 |= VAR_9;
 } else if (VAR_13) {
  u8 VAR_29 = VAR_12->session_ids[VAR_17];

  if ((VAR_12->quirks & VAR_11) &&
      (VAR_13->bss_type == VAR_0))
   VAR_29 = 0;


  VAR_23 = VAR_29 << VAR_7;
 }

 VAR_19->hlid = VAR_17;
 if (VAR_27 || !VAR_13)
  VAR_21 = 0;
 else if (VAR_13->bss_type != VAR_0) {





  if (VAR_14->protocol == FUNC_0(VAR_1))
   VAR_21 = VAR_13->sta.basic_rate_idx;
  else if (VAR_16->flags & VAR_2)
   VAR_21 = VAR_13->sta.p2p_rate_idx;
  else if (FUNC_7(VAR_24))
   VAR_21 = VAR_13->sta.ap_rate_idx;
  else
   VAR_21 = VAR_13->sta.basic_rate_idx;
 } else {
  if (VAR_17 == VAR_13->ap.global_hlid)
   VAR_21 = VAR_13->ap.mgmt_rate_idx;
  else if (VAR_17 == VAR_13->ap.bcast_hlid ||
    VAR_14->protocol == FUNC_0(VAR_1) ||
    !FUNC_7(VAR_24))




   VAR_21 = VAR_13->ap.bcast_rate_idx;
  else
   VAR_21 = VAR_13->ap.ucast_rate_idx[VAR_20];
 }

 VAR_23 |= VAR_21 << VAR_6;


 if (FUNC_6(VAR_24) &&
     FUNC_4(VAR_24))
  VAR_23 |= VAR_5;

 VAR_19->tx_attr = FUNC_1(VAR_23);

 FUNC_15(VAR_12, VAR_19, VAR_14);
 FUNC_16(VAR_12, VAR_19, VAR_14);
}
