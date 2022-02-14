
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; int pkt_type; scalar_t__ dev; } ;
struct TYPE_5__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; int flags; scalar_t__ driver_data; } ;
struct TYPE_7__ {int wait_q; } ;
struct btmrvl_private {TYPE_3__ main_thread; TYPE_2__* adapter; } ;
struct TYPE_8__ {int pkt_type; } ;
struct TYPE_6__ {int tx_queue; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_4)
{
 struct hci_dev *VAR_5 = (struct hci_dev *) VAR_4->dev;
 struct btmrvl_private *VAR_6 = ((void*)0);

 FUNC_0("type=%d, len=%d", VAR_4->pkt_type, VAR_4->len);

 if (!VAR_5 || !VAR_5->driver_data) {
  FUNC_1("Frame for unknown HCI device");
  return -VAR_2;
 }

 VAR_6 = (struct btmrvl_private *) VAR_5->driver_data;
 if (!FUNC_5(VAR_3, &VAR_5->flags)) {
  FUNC_1("Failed testing HCI_RUNING, flags=%lx", VAR_5->flags);
  FUNC_3("data: ", VAR_0,
       VAR_4->data, VAR_4->len);
  return -VAR_1;
 }

 switch (FUNC_2(VAR_4)->pkt_type) {
 case 129:
  VAR_5->stat.cmd_tx++;
  break;

 case 130:
  VAR_5->stat.acl_tx++;
  break;

 case 128:
  VAR_5->stat.sco_tx++;
  break;
 }

 FUNC_4(&VAR_6->adapter->tx_queue, VAR_4);

 FUNC_6(&VAR_6->main_thread.wait_q);

 return 0;
}
