
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct l2t_entry {struct sk_buff* arpq_tail; struct sk_buff* arpq_head; } ;



__attribute__((used)) static inline void FUNC_0(struct l2t_entry *VAR_0, struct sk_buff *VAR_1)
{
 VAR_1->next = ((void*)0);
 if (VAR_0->arpq_head)
  VAR_0->arpq_tail->next = VAR_1;
 else
  VAR_0->arpq_head = VAR_1;
 VAR_0->arpq_tail = VAR_1;
}
