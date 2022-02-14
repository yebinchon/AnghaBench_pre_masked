
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {int rx_skb; int txq; int tx_wait_q; } ;
struct hci_uart {struct ll_struct* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (struct ll_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_0)
{
 struct ll_struct *VAR_1 = VAR_0->priv;

 FUNC_0("hu %p", VAR_0);

 FUNC_3(&VAR_1->tx_wait_q);
 FUNC_3(&VAR_1->txq);

 FUNC_2(VAR_1->rx_skb);

 VAR_0->priv = ((void*)0);

 FUNC_1(VAR_1);

 return 0;
}
