
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct txentry_desc {int dummy; } ;
struct rt2x00_dev {int dummy; } ;
struct queue_entry {TYPE_2__* skb; int entry_idx; TYPE_1__* queue; } ;
struct TYPE_7__ {unsigned int len; int data; } ;
struct TYPE_6__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 unsigned int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (struct rt2x00_dev*,char*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct rt2x00_dev*,int ,TYPE_2__*) ;
 int FUNC_7 (struct rt2x00_dev*,unsigned int,int ,unsigned int) ;
 int FUNC_8 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_9 (struct rt2x00_dev*,int ,int) ;
 int FUNC_10 (struct queue_entry*,struct txentry_desc*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,unsigned int) ;
 int FUNC_12 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_13(struct queue_entry *VAR_5,
     struct txentry_desc *VAR_6)
{
 struct rt2x00_dev *VAR_7 = VAR_5->queue->rt2x00dev;
 unsigned int VAR_8;
 unsigned int VAR_9;
 u32 VAR_10, VAR_11;





 FUNC_8(VAR_7, VAR_3, &VAR_11);
 VAR_10 = VAR_11;
 FUNC_5(&VAR_11, VAR_4, 0);
 FUNC_9(VAR_7, VAR_3, VAR_11);




 FUNC_12(VAR_5->skb, VAR_1);
 FUNC_2(VAR_5->skb->data, 0, VAR_1);




 FUNC_10(VAR_5, VAR_6);




 FUNC_6(VAR_7, VAR_0, VAR_5->skb);




 VAR_9 = FUNC_3(VAR_5->skb->len, 4) - VAR_5->skb->len;
 if (VAR_9 && FUNC_11(VAR_5->skb, VAR_9)) {
  FUNC_4(VAR_7, "Failure padding beacon, aborting\n");

  VAR_5->skb = ((void*)0);
  FUNC_9(VAR_7, VAR_3, VAR_10);
  return;
 }

 VAR_8 = FUNC_0(VAR_5->entry_idx);
 FUNC_7(VAR_7, VAR_8, VAR_5->skb->data,
          VAR_5->skb->len + VAR_9);







 FUNC_9(VAR_7, VAR_2, 0x00001008);

 FUNC_5(&VAR_11, VAR_4, 1);
 FUNC_9(VAR_7, VAR_3, VAR_11);




 FUNC_1(VAR_5->skb);
 VAR_5->skb = ((void*)0);
}
