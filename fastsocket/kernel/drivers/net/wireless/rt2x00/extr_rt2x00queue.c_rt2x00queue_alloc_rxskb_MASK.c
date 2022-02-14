
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_frame_desc {int flags; int skb_dma; struct queue_entry* entry; } ;
struct sk_buff {int len; int data; } ;
struct rt2x00_dev {int dev; int cap_flags; } ;
struct queue_entry {struct data_queue* queue; } ;
struct data_queue {unsigned int data_size; unsigned int desc_size; unsigned int winfo_size; struct rt2x00_dev* rt2x00dev; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct skb_frame_desc* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct skb_frame_desc*,int ,int) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;

struct sk_buff *FUNC_10(struct queue_entry *VAR_4, gfp_t VAR_5)
{
 struct data_queue *VAR_6 = VAR_4->queue;
 struct rt2x00_dev *VAR_7 = VAR_6->rt2x00dev;
 struct sk_buff *VAR_8;
 struct skb_frame_desc *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;





 VAR_10 = VAR_6->data_size + VAR_6->desc_size + VAR_6->winfo_size;






 VAR_11 = 4;






 if (FUNC_8(VAR_0, &VAR_7->cap_flags)) {
  VAR_11 += 8;
  VAR_12 += 8;
 }




 VAR_8 = FUNC_0(VAR_10 + VAR_11 + VAR_12, VAR_5);
 if (!VAR_8)
  return ((void*)0);





 FUNC_7(VAR_8, VAR_11);
 FUNC_6(VAR_8, VAR_10);




 VAR_9 = FUNC_4(VAR_8);
 FUNC_5(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->entry = VAR_4;

 if (FUNC_8(VAR_2, &VAR_7->cap_flags)) {
  dma_addr_t VAR_13;

  VAR_13 = FUNC_2(VAR_7->dev, VAR_8->data, VAR_8->len,
      VAR_1);
  if (FUNC_9(FUNC_3(VAR_7->dev, VAR_13))) {
   FUNC_1(VAR_8);
   return ((void*)0);
  }

  VAR_9->skb_dma = VAR_13;
  VAR_9->flags |= VAR_3;
 }

 return VAR_8;
}
