
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {void* dev; } ;
struct TYPE_4__ {int gpio_gap; scalar_t__ hsmode; scalar_t__ hscmd; scalar_t__ hcidev; scalar_t__ psmode; scalar_t__ pscmd; scalar_t__ hscfgcmd; } ;
struct btmrvl_private {int (* hw_wakeup_firmware ) (struct btmrvl_private*) ;TYPE_2__* adapter; TYPE_1__ btmrvl_dev; } ;
struct btmrvl_cmd {int length; int* data; void* ocf_ogf; } ;
struct TYPE_6__ {void* pkt_type; } ;
struct TYPE_5__ {int hs_state; int tx_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (struct btmrvl_private*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct btmrvl_private*) ;

int FUNC_10(struct btmrvl_private *VAR_9)
{
 struct sk_buff *VAR_10 = ((void*)0);
 struct btmrvl_cmd *VAR_11;
 int VAR_12 = 0;

 if (VAR_9->btmrvl_dev.hscfgcmd) {
  VAR_9->btmrvl_dev.hscfgcmd = 0;

  VAR_10 = FUNC_3(sizeof(*VAR_11), VAR_5);
  if (VAR_10 == ((void*)0)) {
   FUNC_1("No free skb");
   return -VAR_4;
  }

  VAR_11 = (struct btmrvl_cmd *) FUNC_7(VAR_10, sizeof(*VAR_11));
  VAR_11->ocf_ogf = FUNC_5(FUNC_6(VAR_8, VAR_1));
  VAR_11->length = 2;
  VAR_11->data[0] = (VAR_9->btmrvl_dev.gpio_gap & 0xff00) >> 8;
  VAR_11->data[1] = (u8) (VAR_9->btmrvl_dev.gpio_gap & 0x00ff);

  FUNC_2(VAR_10)->pkt_type = VAR_7;

  VAR_10->dev = (void *) VAR_9->btmrvl_dev.hcidev;
  FUNC_8(&VAR_9->adapter->tx_queue, VAR_10);

  FUNC_0("Queue HSCFG Command, gpio=0x%x, gap=0x%x",
      VAR_11->data[0], VAR_11->data[1]);
 }

 if (VAR_9->btmrvl_dev.pscmd) {
  VAR_9->btmrvl_dev.pscmd = 0;

  VAR_10 = FUNC_3(sizeof(*VAR_11), VAR_5);
  if (VAR_10 == ((void*)0)) {
   FUNC_1("No free skb");
   return -VAR_4;
  }

  VAR_11 = (struct btmrvl_cmd *) FUNC_7(VAR_10, sizeof(*VAR_11));
  VAR_11->ocf_ogf = FUNC_5(FUNC_6(VAR_8, VAR_0));
  VAR_11->length = 1;

  if (VAR_9->btmrvl_dev.psmode)
   VAR_11->data[0] = VAR_3;
  else
   VAR_11->data[0] = VAR_2;

  FUNC_2(VAR_10)->pkt_type = VAR_7;

  VAR_10->dev = (void *) VAR_9->btmrvl_dev.hcidev;
  FUNC_8(&VAR_9->adapter->tx_queue, VAR_10);

  FUNC_0("Queue PSMODE Command:%d", VAR_11->data[0]);
 }

 if (VAR_9->btmrvl_dev.hscmd) {
  VAR_9->btmrvl_dev.hscmd = 0;

  if (VAR_9->btmrvl_dev.hsmode) {
   VAR_12 = FUNC_4(VAR_9);
  } else {
   VAR_12 = VAR_9->hw_wakeup_firmware(VAR_9);
   VAR_9->adapter->hs_state = VAR_6;
  }
 }

 return VAR_12;
}
