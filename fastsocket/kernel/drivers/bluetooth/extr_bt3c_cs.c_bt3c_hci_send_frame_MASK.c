
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ dev; } ;
struct TYPE_5__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; scalar_t__ driver_data; } ;
struct TYPE_6__ {int lock; int txq; } ;
typedef TYPE_2__ bt3c_info_t ;
struct TYPE_7__ {int pkt_type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;



 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1)
{
 bt3c_info_t *VAR_2;
 struct hci_dev *VAR_3 = (struct hci_dev *)(VAR_1->dev);
 unsigned long VAR_4;

 if (!VAR_3) {
  FUNC_0("Frame for unknown HCI device (hdev=NULL)");
  return -VAR_0;
 }

 VAR_2 = (bt3c_info_t *) (VAR_3->driver_data);

 switch (FUNC_2(VAR_1)->pkt_type) {
 case 129:
  VAR_3->stat.cmd_tx++;
  break;
 case 130:
  VAR_3->stat.acl_tx++;
  break;
 case 128:
  VAR_3->stat.sco_tx++;
  break;
 };


 FUNC_3(FUNC_4(VAR_1, 1), &FUNC_2(VAR_1)->pkt_type, 1);
 FUNC_5(&(VAR_2->txq), VAR_1);

 FUNC_6(&(VAR_2->lock), VAR_4);

 FUNC_1(VAR_2);

 FUNC_7(&(VAR_2->lock), VAR_4);

 return 0;
}
