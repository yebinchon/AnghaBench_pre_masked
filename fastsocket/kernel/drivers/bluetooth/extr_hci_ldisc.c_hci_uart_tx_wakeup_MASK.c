
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; int flags; } ;
struct sk_buff {int len; int data; } ;
struct hci_uart {int tx_state; struct sk_buff* tx_skb; struct hci_dev* hdev; struct tty_struct* tty; } ;
struct TYPE_5__ {int byte_tx; } ;
struct hci_dev {TYPE_2__ stat; } ;
struct TYPE_6__ {int pkt_type; } ;
struct TYPE_4__ {int (* write ) (struct tty_struct*,int ,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;
 struct sk_buff* FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (struct hci_uart*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct tty_struct*,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

int FUNC_11(struct hci_uart *VAR_3)
{
 struct tty_struct *VAR_4 = VAR_3->tty;
 struct hci_dev *VAR_5 = VAR_3->hdev;
 struct sk_buff *VAR_6;

 if (FUNC_9(VAR_0, &VAR_3->tx_state)) {
  FUNC_6(VAR_1, &VAR_3->tx_state);
  return 0;
 }

 FUNC_0("");

restart:
 FUNC_2(VAR_1, &VAR_3->tx_state);

 while ((VAR_6 = FUNC_3(VAR_3))) {
  int VAR_7;

  FUNC_6(VAR_2, &VAR_4->flags);
  VAR_7 = VAR_4->ops->write(VAR_4, VAR_6->data, VAR_6->len);
  VAR_5->stat.byte_tx += VAR_7;

  FUNC_7(VAR_6, VAR_7);
  if (VAR_6->len) {
   VAR_3->tx_skb = VAR_6;
   break;
  }

  FUNC_4(VAR_3, FUNC_1(VAR_6)->pkt_type);
  FUNC_5(VAR_6);
 }

 if (FUNC_10(VAR_1, &VAR_3->tx_state))
  goto restart;

 FUNC_2(VAR_0, &VAR_3->tx_state);
 return 0;
}
