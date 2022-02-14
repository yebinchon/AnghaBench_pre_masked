
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct txentry_desc {int header_length; int flags; } ;
struct skb_frame_desc {struct queue_entry* entry; int flags; void* tx_rate_flags; void* tx_rate_idx; } ;
struct sk_buff {int dummy; } ;
struct queue_entry {int flags; struct sk_buff* skb; } ;
struct TYPE_6__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct data_queue {int tx_lock; int qid; TYPE_3__* rt2x00dev; } ;
struct TYPE_7__ {int cap_flags; } ;
struct TYPE_5__ {void* flags; void* idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int *) ;
 struct skb_frame_desc* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct skb_frame_desc*,int ,int) ;
 int FUNC_4 (TYPE_3__*,char*,int ,...) ;
 int FUNC_5 (struct sk_buff*,struct txentry_desc*) ;
 int FUNC_6 (struct sk_buff*,struct txentry_desc*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct queue_entry*) ;
 int FUNC_9 (TYPE_3__*,struct sk_buff*,struct txentry_desc*,int *) ;
 int FUNC_10 (struct data_queue*) ;
 struct queue_entry* FUNC_11 (struct data_queue*,int ) ;
 int FUNC_12 (struct queue_entry*,int ) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct data_queue*,struct txentry_desc*) ;
 int FUNC_15 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_16 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 scalar_t__ FUNC_22 (int ) ;

int FUNC_23(struct data_queue *VAR_13, struct sk_buff *VAR_14,
          bool VAR_15)
{
 struct ieee80211_tx_info *VAR_16;
 struct queue_entry *VAR_17;
 struct txentry_desc VAR_18;
 struct skb_frame_desc *VAR_19;
 u8 VAR_20, VAR_21;
 int VAR_22 = 0;






 FUNC_9(VAR_13->rt2x00dev, VAR_14, &VAR_18, ((void*)0));






 VAR_16 = FUNC_0(VAR_14);
 VAR_20 = VAR_16->control.rates[0].idx;
 VAR_21 = VAR_16->control.rates[0].flags;
 VAR_19 = FUNC_2(VAR_14);
 FUNC_3(VAR_19, 0, sizeof(*VAR_19));
 VAR_19->tx_rate_idx = VAR_20;
 VAR_19->tx_rate_flags = VAR_21;

 if (VAR_15)
  VAR_19->flags |= VAR_12;






 if (FUNC_21(VAR_6, &VAR_18.flags) &&
     !FUNC_21(VAR_7, &VAR_18.flags)) {
  if (FUNC_21(VAR_9, &VAR_13->rt2x00dev->cap_flags))
   FUNC_5(VAR_14, &VAR_18);
  else
   FUNC_6(VAR_14, &VAR_18);
 }
 if (FUNC_21(VAR_11, &VAR_13->rt2x00dev->cap_flags))
  FUNC_13(VAR_14, VAR_18.header_length);
 else if (FUNC_21(VAR_10, &VAR_13->rt2x00dev->cap_flags))
  FUNC_7(VAR_14);




 FUNC_18(&VAR_13->tx_lock);

 if (FUNC_22(FUNC_10(VAR_13))) {
  FUNC_4(VAR_13->rt2x00dev, "Dropping frame due to full tx queue %d\n",
      VAR_13->qid);
  VAR_22 = -VAR_3;
  goto out;
 }

 VAR_17 = FUNC_11(VAR_13, VAR_8);

 if (FUNC_22(FUNC_20(VAR_5,
          &VAR_17->flags))) {
  FUNC_4(VAR_13->rt2x00dev,
      "Arrived at non-free entry in the non-full queue %d\n"
      "Please file bug report to %s\n",
      VAR_13->qid, VAR_0);
  VAR_22 = -VAR_1;
  goto out;
 }

 VAR_19->entry = VAR_17;
 VAR_17->skb = VAR_14;






 if (FUNC_22(FUNC_15(VAR_17, &VAR_18))) {
  FUNC_1(VAR_5, &VAR_17->flags);
  VAR_17->skb = ((void*)0);
  VAR_22 = -VAR_2;
  goto out;
 }




 FUNC_8(VAR_17);

 FUNC_17(VAR_4, &VAR_17->flags);

 FUNC_12(VAR_17, VAR_8);
 FUNC_16(VAR_17, &VAR_18);
 FUNC_14(VAR_13, &VAR_18);

out:
 FUNC_19(&VAR_13->tx_lock);
 return VAR_22;
}
