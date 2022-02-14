
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct hci_uart {TYPE_1__* proto; int flags; int * tx_skb; struct tty_struct* tty; } ;
struct hci_dev {scalar_t__ driver_data; } ;
struct TYPE_2__ {int (* flush ) (struct hci_uart*) ;} ;


 int FUNC_0 (char*,struct hci_dev*,struct tty_struct*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_uart*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_6(struct hci_dev *VAR_1)
{
 struct hci_uart *VAR_2 = (struct hci_uart *) VAR_1->driver_data;
 struct tty_struct *VAR_3 = VAR_2->tty;

 FUNC_0("hdev %p tty %p", VAR_1, VAR_3);

 if (VAR_2->tx_skb) {
  FUNC_1(VAR_2->tx_skb); VAR_2->tx_skb = ((void*)0);
 }


 FUNC_5(VAR_3);
 FUNC_4(VAR_3);

 if (FUNC_3(VAR_0, &VAR_2->flags))
  VAR_2->proto->flush(VAR_2);

 return 0;
}
