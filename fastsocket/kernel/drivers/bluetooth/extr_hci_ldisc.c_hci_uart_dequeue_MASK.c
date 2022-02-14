
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_uart {struct sk_buff* tx_skb; TYPE_1__* proto; } ;
struct TYPE_2__ {struct sk_buff* (* dequeue ) (struct hci_uart*) ;} ;


 struct sk_buff* FUNC_0 (struct hci_uart*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_1(struct hci_uart *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->tx_skb;

 if (!VAR_1)
  VAR_1 = VAR_0->proto->dequeue(VAR_0);
 else
  VAR_0->tx_skb = ((void*)0);

 return VAR_1;
}
