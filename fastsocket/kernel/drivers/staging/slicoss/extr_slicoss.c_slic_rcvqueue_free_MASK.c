
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_rcvqueue {scalar_t__ count; struct sk_buff* head; int * tail; } ;
struct sk_buff {struct sk_buff* next; } ;
struct adapter {struct slic_rcvqueue rcvqueue; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 struct slic_rcvqueue *VAR_1 = &VAR_0->rcvqueue;
 struct sk_buff *VAR_2;

 while (VAR_1->head) {
  VAR_2 = VAR_1->head;
  VAR_1->head = VAR_1->head->next;
  FUNC_0(VAR_2);
 }
 VAR_1->tail = ((void*)0);
 VAR_1->head = ((void*)0);
 VAR_1->count = 0;
}
