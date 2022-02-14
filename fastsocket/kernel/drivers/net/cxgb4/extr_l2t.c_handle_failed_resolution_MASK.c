
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct l2t_skb_cb {int handle; int (* arp_err_handler ) (int ,struct sk_buff*) ;} ;
struct adapter {int dummy; } ;


 struct l2t_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct adapter*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0, struct sk_buff *VAR_1)
{
 while (VAR_1) {
  struct sk_buff *VAR_2 = VAR_1;
  const struct l2t_skb_cb *VAR_3 = FUNC_0(VAR_2);

  VAR_1 = VAR_2->next;
  VAR_2->next = ((void*)0);
  if (VAR_3->arp_err_handler)
   VAR_3->arp_err_handler(VAR_3->handle, VAR_2);
  else
   FUNC_2(VAR_0, VAR_2);
 }
}
