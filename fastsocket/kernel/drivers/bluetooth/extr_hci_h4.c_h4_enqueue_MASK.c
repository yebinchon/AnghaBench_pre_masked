
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_uart {struct h4_struct* priv; } ;
struct h4_struct {int txq; } ;
struct TYPE_2__ {int pkt_type; } ;


 int FUNC_0 (char*,struct hci_uart*,struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_0, struct sk_buff *VAR_1)
{
 struct h4_struct *VAR_2 = VAR_0->priv;

 FUNC_0("hu %p skb %p", VAR_0, VAR_1);


 FUNC_2(FUNC_3(VAR_1, 1), &FUNC_1(VAR_1)->pkt_type, 1);
 FUNC_4(&VAR_2->txq, VAR_1);

 return 0;
}
