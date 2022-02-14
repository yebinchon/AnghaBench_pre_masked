
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned int u8 ;
struct txdone_entry_desc {int retry; int flags; } ;
struct skb_frame_desc {unsigned int flags; unsigned int tx_rate_idx; unsigned int tx_rate_flags; } ;
struct TYPE_13__ {int dot11RTSFailureCount; int dot11RTSSuccessCount; int dot11ACKFailureCount; } ;
struct TYPE_10__ {int tx_success; int tx_failed; } ;
struct TYPE_11__ {TYPE_1__ qual; } ;
struct rt2x00_dev {TYPE_6__* ops; int hw; int cap_flags; TYPE_4__ low_level_stats; TYPE_2__ link; } ;
struct queue_entry {TYPE_7__* queue; scalar_t__ flags; int * skb; } ;
struct TYPE_17__ {int ampdu_len; int ampdu_ack_len; TYPE_3__* rates; scalar_t__ ack_signal; } ;
struct ieee80211_tx_info {int flags; TYPE_9__ status; } ;
struct TYPE_16__ {int tx_lock; struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_15__ {TYPE_5__* lib; int extra_tx_headroom; } ;
struct TYPE_14__ {int (* clear_entry ) (struct queue_entry*) ;} ;
struct TYPE_12__ {unsigned int idx; unsigned int flags; unsigned int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *) ;
 struct skb_frame_desc* FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int *) ;
 scalar_t__ FUNC_9 (struct queue_entry*) ;
 int FUNC_10 (struct queue_entry*,int ) ;
 int FUNC_11 (int *,unsigned int) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (struct queue_entry*) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct queue_entry*) ;
 scalar_t__ FUNC_19 (int ,int *) ;

void FUNC_20(struct queue_entry *VAR_18,
        struct txdone_entry_desc *VAR_19)
{
 struct rt2x00_dev *VAR_20 = VAR_18->queue->rt2x00dev;
 struct ieee80211_tx_info *VAR_21 = FUNC_0(VAR_18->skb);
 struct skb_frame_desc *VAR_22 = FUNC_2(VAR_18->skb);
 unsigned int VAR_23, VAR_24;
 u8 VAR_25, VAR_26, VAR_27;
 u8 VAR_28 = VAR_22->flags;
 bool VAR_29;




 FUNC_13(VAR_18);




 FUNC_15(VAR_18->skb, VAR_20->ops->extra_tx_headroom);




 VAR_22->flags &= ~VAR_12;




 VAR_23 = FUNC_3(VAR_18->skb);




 if (FUNC_19(VAR_10, &VAR_20->cap_flags))
  FUNC_11(VAR_18->skb, VAR_23);







 if (FUNC_19(VAR_0, &VAR_20->cap_flags))
  FUNC_7(VAR_18->skb, VAR_23);





 FUNC_8(VAR_20, VAR_1, VAR_18->skb);






 VAR_29 =
     FUNC_9(VAR_18) ||
     FUNC_19(VAR_16, &VAR_19->flags) ||
     FUNC_19(VAR_17, &VAR_19->flags);




 VAR_20->link.qual.tx_success += VAR_29;
 VAR_20->link.qual.tx_failed += !VAR_29;

 VAR_25 = VAR_22->tx_rate_idx;
 VAR_26 = VAR_22->tx_rate_flags;
 VAR_27 = FUNC_19(VAR_15, &VAR_19->flags) ?
     (VAR_19->retry + 1) : 1;




 FUNC_6(&VAR_21->status, 0, sizeof(VAR_21->status));
 VAR_21->status.ack_signal = 0;







 for (VAR_24 = 0; VAR_24 < VAR_27 && VAR_24 < VAR_4; VAR_24++) {
  VAR_21->status.rates[VAR_24].idx = VAR_25 - VAR_24;
  VAR_21->status.rates[VAR_24].flags = VAR_26;

  if (VAR_25 - VAR_24 == 0) {




   VAR_21->status.rates[VAR_24].count = VAR_27 - VAR_24;
   VAR_24++;
   break;
  }
  VAR_21->status.rates[VAR_24].count = 1;
 }
 if (VAR_24 < (VAR_4 - 1))
  VAR_21->status.rates[VAR_24].idx = -1;

 if (!(VAR_21->flags & VAR_3)) {
  if (VAR_29)
   VAR_21->flags |= VAR_6;
  else
   VAR_20->low_level_stats.dot11ACKFailureCount++;
 }
 if (FUNC_19(VAR_14, &VAR_19->flags) ||
     VAR_21->flags & VAR_2) {
  VAR_21->flags |= VAR_7;
  VAR_21->status.ampdu_len = 1;
  VAR_21->status.ampdu_ack_len = VAR_29 ? 1 : 0;

  if (!VAR_29)
   VAR_21->flags |= VAR_8;
 }

 if (VAR_26 & VAR_5) {
  if (VAR_29)
   VAR_20->low_level_stats.dot11RTSSuccessCount++;
  else
   VAR_20->low_level_stats.dot11RTSFailureCount++;
 }







 if (!(VAR_28 & VAR_13)) {
  if (FUNC_19(VAR_11, &VAR_20->cap_flags))
   FUNC_4(VAR_20->hw, VAR_18->skb);
  else
   FUNC_5(VAR_20->hw, VAR_18->skb);
 } else
  FUNC_1(VAR_18->skb);




 VAR_18->skb = ((void*)0);
 VAR_18->flags = 0;

 VAR_20->ops->lib->clear_entry(VAR_18);

 FUNC_10(VAR_18, VAR_9);
 FUNC_16(&VAR_18->queue->tx_lock);
 if (!FUNC_12(VAR_18->queue))
  FUNC_14(VAR_18->queue);
 FUNC_17(&VAR_18->queue->tx_lock);
}
