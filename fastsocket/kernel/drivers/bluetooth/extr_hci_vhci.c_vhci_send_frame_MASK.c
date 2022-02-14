
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_data {int read_wait; int readq; } ;
struct sk_buff {scalar_t__ dev; } ;
struct hci_dev {struct vhci_data* driver_data; int flags; } ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3)
{
 struct hci_dev* VAR_4 = (struct hci_dev *) VAR_3->dev;
 struct vhci_data *VAR_5;

 if (!VAR_4) {
  FUNC_0("Frame for unknown HCI device (hdev=NULL)");
  return -VAR_1;
 }

 if (!FUNC_5(VAR_2, &VAR_4->flags))
  return -VAR_0;

 VAR_5 = VAR_4->driver_data;

 FUNC_2(FUNC_3(VAR_3, 1), &FUNC_1(VAR_3)->pkt_type, 1);
 FUNC_4(&VAR_5->readq, VAR_3);

 FUNC_6(&VAR_5->read_wait);

 return 0;
}
