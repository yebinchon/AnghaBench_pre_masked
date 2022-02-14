
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ll_struct {int txq; } ;
struct hci_uart {struct ll_struct* priv; } ;


 struct sk_buff* FUNC_0 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct hci_uart *VAR_0)
{
 struct ll_struct *VAR_1 = VAR_0->priv;
 return FUNC_0(&VAR_1->txq);
}
