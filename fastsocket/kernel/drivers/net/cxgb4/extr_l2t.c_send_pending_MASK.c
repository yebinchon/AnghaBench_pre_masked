
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct l2t_entry {int * arpq_tail; struct sk_buff* arpq_head; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, struct l2t_entry *VAR_1)
{
 while (VAR_1->arpq_head) {
  struct sk_buff *VAR_2 = VAR_1->arpq_head;

  VAR_1->arpq_head = VAR_2->next;
  VAR_2->next = ((void*)0);
  FUNC_0(VAR_0, VAR_2);
 }
 VAR_1->arpq_tail = ((void*)0);
}
