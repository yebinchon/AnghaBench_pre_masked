
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rxdone_entry_desc {unsigned int size; int dev_flags; int flags; scalar_t__ rate_mode; int rate_idx; int flag; int antenna; int rssi; int signal; int freq; int band; int timestamp; int mactime; } ;
struct TYPE_8__ {int rx; } ;
struct TYPE_9__ {TYPE_2__ active; } ;
struct TYPE_10__ {TYPE_3__ ant; } ;
struct rt2x00_dev {TYPE_6__* ops; scalar_t__ flags; int hw; TYPE_4__ link; int curr_freq; int curr_band; } ;
struct queue_entry {scalar_t__ flags; struct sk_buff* skb; TYPE_1__* queue; } ;
struct ieee80211_rx_status {unsigned int size; int dev_flags; int flags; scalar_t__ rate_mode; int rate_idx; int flag; int antenna; int rssi; int signal; int freq; int band; int timestamp; int mactime; } ;
typedef int rxdesc ;
typedef int gfp_t ;
struct TYPE_12__ {TYPE_5__* lib; } ;
struct TYPE_11__ {int (* clear_entry ) (struct queue_entry*) ;int (* fill_rxdone ) (struct queue_entry*,struct rxdone_entry_desc*) ;} ;
struct TYPE_7__ {unsigned int data_size; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rxdone_entry_desc* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct rxdone_entry_desc*,int ,int) ;
 int FUNC_5 (struct rt2x00_dev*,char*,unsigned int,unsigned int) ;
 int FUNC_6 (struct sk_buff*,unsigned int,struct rxdone_entry_desc*) ;
 int FUNC_7 (struct rt2x00_dev*,int ,struct sk_buff*) ;
 int FUNC_8 (struct rt2x00_dev*,struct rxdone_entry_desc*) ;
 int FUNC_9 (struct rt2x00_dev*,struct sk_buff*,struct rxdone_entry_desc*) ;
 int FUNC_10 (struct rt2x00_dev*,struct sk_buff*,struct rxdone_entry_desc*) ;
 int FUNC_11 (struct rt2x00_dev*,struct rxdone_entry_desc*) ;
 int FUNC_12 (struct rt2x00_dev*,struct sk_buff*,struct rxdone_entry_desc*) ;
 struct sk_buff* FUNC_13 (struct queue_entry*,int ) ;
 int FUNC_14 (struct queue_entry*,int ) ;
 int FUNC_15 (struct sk_buff*,unsigned int) ;
 int FUNC_16 (struct queue_entry*) ;
 int FUNC_17 (struct sk_buff*,unsigned int) ;
 int FUNC_18 (struct queue_entry*,struct rxdone_entry_desc*) ;
 int FUNC_19 (struct queue_entry*) ;
 scalar_t__ FUNC_20 (int ,scalar_t__*) ;
 scalar_t__ FUNC_21 (int) ;

void FUNC_22(struct queue_entry *VAR_11, gfp_t VAR_12)
{
 struct rt2x00_dev *VAR_13 = VAR_11->queue->rt2x00dev;
 struct rxdone_entry_desc VAR_14;
 struct sk_buff *VAR_15;
 struct ieee80211_rx_status *VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 if (!FUNC_20(VAR_1, &VAR_13->flags) ||
     !FUNC_20(VAR_0, &VAR_13->flags))
  goto submit_entry;

 if (FUNC_20(VAR_3, &VAR_11->flags))
  goto submit_entry;





 VAR_15 = FUNC_13(VAR_11, VAR_12);
 if (!VAR_15)
  goto submit_entry;




 FUNC_16(VAR_11);




 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_13->ops->lib->fill_rxdone(VAR_11, &VAR_14);





 if (FUNC_21(VAR_14.size == 0 ||
       VAR_14.size > VAR_11->queue->data_size)) {
  FUNC_5(VAR_13, "Wrong frame size %d max %d\n",
      VAR_14.size, VAR_11->queue->data_size);
  FUNC_1(VAR_11->skb);
  goto renew_skb;
 }





 VAR_17 = FUNC_2(VAR_11->skb);







 if ((VAR_14.dev_flags & VAR_7) &&
     (VAR_14.flags & VAR_10))
  FUNC_6(VAR_11->skb, VAR_17,
       &VAR_14);
 else if (VAR_17 &&
   (VAR_14.size > VAR_17) &&
   (VAR_14.dev_flags & VAR_8))
  FUNC_15(VAR_11->skb, VAR_17);


 FUNC_17(VAR_11->skb, VAR_14.size);




 VAR_18 = FUNC_11(VAR_13, &VAR_14);
 if (VAR_14.rate_mode == VAR_6 ||
     VAR_14.rate_mode == VAR_5)
  VAR_14.flags |= VAR_9;





 FUNC_10(VAR_13, VAR_11->skb, &VAR_14);





 FUNC_9(VAR_13, VAR_11->skb, &VAR_14);




 FUNC_12(VAR_13, VAR_11->skb, &VAR_14);
 FUNC_8(VAR_13, &VAR_14);
 FUNC_7(VAR_13, VAR_2, VAR_11->skb);





 VAR_16 = FUNC_0(VAR_11->skb);






 FUNC_4(VAR_16, 0, sizeof(*VAR_16));

 VAR_16->mactime = VAR_14.timestamp;
 VAR_16->band = VAR_13->curr_band;
 VAR_16->freq = VAR_13->curr_freq;
 VAR_16->rate_idx = VAR_18;
 VAR_16->signal = VAR_14.rssi;
 VAR_16->flag = VAR_14.flags;
 VAR_16->antenna = VAR_13->link.ant.active.rx;

 FUNC_3(VAR_13->hw, VAR_11->skb);

renew_skb:



 VAR_11->skb = VAR_15;

submit_entry:
 VAR_11->flags = 0;
 FUNC_14(VAR_11, VAR_4);
 if (FUNC_20(VAR_1, &VAR_13->flags) &&
     FUNC_20(VAR_0, &VAR_13->flags))
  VAR_13->ops->lib->clear_entry(VAR_11);
}
