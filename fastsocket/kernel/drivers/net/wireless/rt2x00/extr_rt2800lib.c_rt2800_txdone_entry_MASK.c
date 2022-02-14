
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct txdone_entry_desc {int retry; scalar_t__ flags; } ;
struct skb_frame_desc {void* tx_rate_idx; } ;
struct rt2x00_dev {int long_retry; } ;
struct queue_entry {int skb; TYPE_1__* queue; } ;
typedef int __le32 ;
struct TYPE_2__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,scalar_t__*) ;
 struct skb_frame_desc* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct queue_entry*,struct txdone_entry_desc*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct queue_entry *VAR_9, u32 VAR_10, __le32 *VAR_11)
{
 struct rt2x00_dev *VAR_12 = VAR_9->queue->rt2x00dev;
 struct skb_frame_desc *VAR_13 = FUNC_1(VAR_9->skb);
 struct txdone_entry_desc VAR_14;
 u32 VAR_15;
 u16 VAR_16, VAR_17;
 int VAR_18, VAR_19;




 VAR_14.flags = 0;
 FUNC_2(VAR_11, 0, &VAR_15);

 VAR_16 = FUNC_3(VAR_15, VAR_5);
 VAR_19 = FUNC_3(VAR_15, VAR_4);

 VAR_17 = FUNC_3(VAR_10, VAR_6);
 VAR_18 = FUNC_3(VAR_10, VAR_7);
 if (FUNC_5(VAR_18 == 1 && VAR_19 == 0 && VAR_17 != VAR_16)) {
  VAR_13->tx_rate_idx = VAR_17;
  VAR_16 = VAR_17;
 }

 if (VAR_18 == 1 || VAR_19 == 1)
  FUNC_0(VAR_0, &VAR_14.flags);
 if (FUNC_3(VAR_10, VAR_8)) {




  FUNC_0(VAR_3, &VAR_14.flags);
  VAR_14.retry = ((VAR_16 > VAR_17) ? VAR_16 - VAR_17 : 0);
 } else {





  FUNC_0(VAR_1, &VAR_14.flags);
  VAR_14.retry = VAR_12->long_retry;
 }





 if (VAR_14.retry)
  FUNC_0(VAR_2, &VAR_14.flags);

 FUNC_4(VAR_9, &VAR_14);
}
