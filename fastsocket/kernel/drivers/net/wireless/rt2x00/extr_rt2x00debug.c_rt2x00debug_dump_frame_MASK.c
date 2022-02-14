
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct timeval {int tv_sec; int tv_usec; } ;
struct skb_frame_desc {int flags; int desc_len; int desc; TYPE_3__* entry; } ;
struct sk_buff {int len; int data; } ;
struct rt2x00dump_hdr {void* timestamp_usec; void* timestamp_sec; int entry_index; int queue_index; void* type; void* chip_rev; void* chip_rf; void* chip_rt; void* data_length; void* desc_length; void* header_length; void* version; } ;
struct rt2x00debug_intf {int frame_dump_skbqueue; int frame_dump_flags; int frame_dump_waitqueue; } ;
struct TYPE_4__ {int rt; int rf; int rev; } ;
struct rt2x00_dev {TYPE_1__ chip; struct rt2x00debug_intf* debugfs_intf; } ;
typedef enum rt2x00_dump_type { ____Placeholder_rt2x00_dump_type } rt2x00_dump_type ;
struct TYPE_6__ {int entry_idx; TYPE_2__* queue; } ;
struct TYPE_5__ {int qid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct timeval*) ;
 struct skb_frame_desc* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct rt2x00_dev *VAR_4,
       enum rt2x00_dump_type VAR_5, struct sk_buff *VAR_6)
{
 struct rt2x00debug_intf *VAR_7 = VAR_4->debugfs_intf;
 struct skb_frame_desc *VAR_8 = FUNC_4(VAR_6);
 struct sk_buff *VAR_9;
 struct rt2x00dump_hdr *VAR_10;
 struct timeval VAR_11;
 u32 VAR_12;

 if (FUNC_5(!FUNC_12(VAR_1, &VAR_7->frame_dump_flags)))
  return;

 FUNC_3(&VAR_11);

 if (FUNC_9(&VAR_7->frame_dump_skbqueue) > 20) {
  FUNC_7(VAR_4, "txrx dump queue length exceeded\n");
  return;
 }

 VAR_12 = VAR_6->len;
 if (VAR_8->flags & VAR_3)
  VAR_12 -= VAR_8->desc_len;

 VAR_9 = FUNC_0(sizeof(*VAR_10) + VAR_8->desc_len + VAR_12,
       VAR_2);
 if (!VAR_9) {
  FUNC_7(VAR_4, "Failed to copy skb for dump\n");
  return;
 }

 VAR_10 = (struct rt2x00dump_hdr *)FUNC_8(VAR_9, sizeof(*VAR_10));
 VAR_10->version = FUNC_2(VAR_0);
 VAR_10->header_length = FUNC_2(sizeof(*VAR_10));
 VAR_10->desc_length = FUNC_2(VAR_8->desc_len);
 VAR_10->data_length = FUNC_2(VAR_12);
 VAR_10->chip_rt = FUNC_1(VAR_4->chip.rt);
 VAR_10->chip_rf = FUNC_1(VAR_4->chip.rf);
 VAR_10->chip_rev = FUNC_1(VAR_4->chip.rev);
 VAR_10->type = FUNC_1(VAR_5);
 VAR_10->queue_index = VAR_8->entry->queue->qid;
 VAR_10->entry_index = VAR_8->entry->entry_idx;
 VAR_10->timestamp_sec = FUNC_2(VAR_11.tv_sec);
 VAR_10->timestamp_usec = FUNC_2(VAR_11.tv_usec);

 if (!(VAR_8->flags & VAR_3))
  FUNC_6(FUNC_8(VAR_9, VAR_8->desc_len), VAR_8->desc,
         VAR_8->desc_len);
 FUNC_6(FUNC_8(VAR_9, VAR_6->len), VAR_6->data, VAR_6->len);

 FUNC_11(&VAR_7->frame_dump_skbqueue, VAR_9);
 FUNC_13(&VAR_7->frame_dump_waitqueue);




 if (!FUNC_12(VAR_1, &VAR_7->frame_dump_flags))
  FUNC_10(&VAR_7->frame_dump_skbqueue);
}
