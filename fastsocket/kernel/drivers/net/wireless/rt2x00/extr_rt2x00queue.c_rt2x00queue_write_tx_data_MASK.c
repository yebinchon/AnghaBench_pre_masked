
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct txentry_desc {int dummy; } ;
struct rt2x00_dev {int cap_flags; TYPE_3__* ops; } ;
struct queue_entry {TYPE_4__* skb; TYPE_1__* queue; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {TYPE_2__* lib; int extra_tx_headroom; } ;
struct TYPE_6__ {int (* write_tx_data ) (struct queue_entry*,struct txentry_desc*) ;scalar_t__ (* get_entry_state ) (struct queue_entry*) ;} ;
struct TYPE_5__ {int qid; struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (struct queue_entry*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (struct queue_entry*) ;
 int FUNC_5 (struct queue_entry*,struct txentry_desc*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct queue_entry *VAR_4,
         struct txentry_desc *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_4->queue->rt2x00dev;






 if (FUNC_7(VAR_6->ops->lib->get_entry_state &&
       VAR_6->ops->lib->get_entry_state(VAR_4))) {
  FUNC_1(VAR_6,
      "Corrupt queue %d, accessing entry which is not ours\n"
      "Please file bug report to %s\n",
      VAR_4->queue->qid, VAR_0);
  return -VAR_1;
 }




 FUNC_3(VAR_4->skb, VAR_6->ops->extra_tx_headroom);
 FUNC_0(VAR_4->skb->data, 0, VAR_6->ops->extra_tx_headroom);




 if (VAR_6->ops->lib->write_tx_data)
  VAR_6->ops->lib->write_tx_data(VAR_4, VAR_5);




 if (FUNC_6(VAR_3, &VAR_6->cap_flags) &&
     FUNC_2(VAR_4))
  return -VAR_2;

 return 0;
}
