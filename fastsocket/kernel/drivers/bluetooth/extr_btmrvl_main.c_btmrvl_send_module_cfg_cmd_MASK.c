
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {void* dev; } ;
struct TYPE_7__ {int sendcmdflag; scalar_t__ hcidev; } ;
struct TYPE_5__ {int wait_q; } ;
struct btmrvl_private {TYPE_3__ btmrvl_dev; TYPE_2__* adapter; TYPE_1__ main_thread; } ;
struct btmrvl_cmd {int length; int* data; int ocf_ogf; } ;
struct TYPE_8__ {int pkt_type; } ;
struct TYPE_6__ {int cmd_complete; int cmd_wait_q; int tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct btmrvl_private *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct btmrvl_cmd *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_3(sizeof(*VAR_10), VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_1("No free skb");
  return -VAR_1;
 }

 VAR_10 = (struct btmrvl_cmd *) FUNC_7(VAR_9, sizeof(*VAR_10));
 VAR_10->ocf_ogf = FUNC_4(FUNC_5(VAR_5, VAR_0));
 VAR_10->length = 1;
 VAR_10->data[0] = VAR_8;

 FUNC_2(VAR_9)->pkt_type = VAR_4;

 VAR_9->dev = (void *) VAR_7->btmrvl_dev.hcidev;
 FUNC_8(&VAR_7->adapter->tx_queue, VAR_9);

 VAR_7->btmrvl_dev.sendcmdflag = 1;

 VAR_7->adapter->cmd_complete = 0;

 FUNC_0("Queue module cfg Command");

 FUNC_10(&VAR_7->main_thread.wait_q);

 if (!FUNC_9(VAR_7->adapter->cmd_wait_q,
    VAR_7->adapter->cmd_complete,
    FUNC_6(VAR_6))) {
  VAR_11 = -VAR_2;
  FUNC_1("module_cfg_cmd(%x): timeout: %d",
     VAR_8, VAR_7->btmrvl_dev.sendcmdflag);
 }

 FUNC_0("module cfg Command done");

 return VAR_11;
}
