
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {int hcill_state; int hcill_lock; int tx_wait_q; int txq; } ;
struct hci_uart {struct ll_struct* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ll_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_3)
{
 struct ll_struct *VAR_4;

 FUNC_0("hu %p", VAR_3);

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->txq);
 FUNC_2(&VAR_4->tx_wait_q);
 FUNC_3(&VAR_4->hcill_lock);

 VAR_4->hcill_state = VAR_2;

 VAR_3->priv = VAR_4;

 return 0;
}
