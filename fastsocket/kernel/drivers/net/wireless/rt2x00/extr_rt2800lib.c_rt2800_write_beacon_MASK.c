
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct txentry_desc {int dummy; } ;
struct skb_frame_desc {int desc_len; int desc; int flags; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {TYPE_2__* skb; int entry_idx; TYPE_1__* queue; } ;
struct TYPE_8__ {unsigned int len; int data; } ;
struct TYPE_7__ {int winfo_size; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 struct skb_frame_desc* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int const) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (struct rt2x00_dev*,unsigned int,int ,unsigned int) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_7 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_8 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_9 (struct rt2x00_dev*,char*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (struct rt2x00_dev*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,unsigned int) ;
 int FUNC_13 (TYPE_2__*,int const) ;

void FUNC_14(struct queue_entry *VAR_4, struct txentry_desc *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_4->queue->rt2x00dev;
 struct skb_frame_desc *VAR_7 = FUNC_2(VAR_4->skb);
 unsigned int VAR_8;
 unsigned int VAR_9;
 u32 VAR_10, VAR_11;
 const int VAR_12 = VAR_4->queue->winfo_size;





 FUNC_6(VAR_6, VAR_0, &VAR_11);
 VAR_10 = VAR_11;
 FUNC_10(&VAR_11, VAR_1, 0);
 FUNC_7(VAR_6, VAR_0, VAR_11);




 FUNC_3(FUNC_13(VAR_4->skb, VAR_12), 0, VAR_12);




 VAR_7->flags |= VAR_3;
 VAR_7->desc = VAR_4->skb->data;
 VAR_7->desc_len = VAR_12;




 FUNC_8(VAR_4, VAR_5);




 FUNC_11(VAR_6, VAR_2, VAR_4->skb);




 VAR_9 = FUNC_4(VAR_4->skb->len, 4) - VAR_4->skb->len;
 if (VAR_9 && FUNC_12(VAR_4->skb, VAR_9)) {
  FUNC_9(VAR_6, "Failure padding beacon, aborting\n");

  VAR_4->skb = ((void*)0);
  FUNC_7(VAR_6, VAR_0, VAR_10);
  return;
 }

 VAR_8 = FUNC_0(VAR_4->entry_idx);
 FUNC_5(VAR_6, VAR_8, VAR_4->skb->data,
       VAR_4->skb->len + VAR_9);




 FUNC_10(&VAR_11, VAR_1, 1);
 FUNC_7(VAR_6, VAR_0, VAR_11);




 FUNC_1(VAR_4->skb);
 VAR_4->skb = ((void*)0);
}
