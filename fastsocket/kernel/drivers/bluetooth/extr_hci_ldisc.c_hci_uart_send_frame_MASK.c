
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct sk_buff {int len; scalar_t__ dev; } ;
struct hci_uart {TYPE_1__* proto; struct tty_struct* tty; } ;
struct hci_dev {int name; scalar_t__ driver_data; int flags; } ;
struct TYPE_4__ {int pkt_type; } ;
struct TYPE_3__ {int (* enqueue ) (struct hci_uart*,struct sk_buff*) ;} ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (struct hci_uart*,struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3)
{
 struct hci_dev* VAR_4 = (struct hci_dev *) VAR_3->dev;
 struct tty_struct *VAR_5;
 struct hci_uart *VAR_6;

 if (!VAR_4) {
  FUNC_1("Frame for uknown device (hdev=NULL)");
  return -VAR_1;
 }

 if (!FUNC_5(VAR_2, &VAR_4->flags))
  return -VAR_0;

 VAR_6 = (struct hci_uart *) VAR_4->driver_data;
 VAR_5 = VAR_6->tty;

 FUNC_0("%s: type %d len %d", VAR_4->name, FUNC_2(VAR_3)->pkt_type, VAR_3->len);

 VAR_6->proto->enqueue(VAR_6, VAR_3);

 FUNC_3(VAR_6);

 return 0;
}
