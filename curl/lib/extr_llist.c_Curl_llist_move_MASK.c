
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist_element {struct curl_llist_element* next; struct curl_llist_element* prev; } ;
struct curl_llist {scalar_t__ size; struct curl_llist_element* tail; struct curl_llist_element* head; } ;



void FUNC_0(struct curl_llist *VAR_0, struct curl_llist_element *VAR_1,
                     struct curl_llist *VAR_2,
                     struct curl_llist_element *VAR_3)
{

  if(VAR_1 == ((void*)0) || VAR_0->size == 0)
    return;

  if(VAR_1 == VAR_0->head) {
    VAR_0->head = VAR_1->next;

    if(VAR_0->head == ((void*)0))
      VAR_0->tail = ((void*)0);
    else
      VAR_1->next->prev = ((void*)0);
  }
  else {
    VAR_1->prev->next = VAR_1->next;
    if(!VAR_1->next)
      VAR_0->tail = VAR_1->prev;
    else
      VAR_1->next->prev = VAR_1->prev;
  }

  --VAR_0->size;


  if(VAR_2->size == 0) {
    VAR_2->head = VAR_1;
    VAR_2->head->prev = ((void*)0);
    VAR_2->head->next = ((void*)0);
    VAR_2->tail = VAR_1;
  }
  else {
    VAR_1->next = VAR_3->next;
    VAR_1->prev = VAR_3;
    if(VAR_3->next) {
      VAR_3->next->prev = VAR_1;
    }
    else {
      VAR_2->tail = VAR_1;
    }
    VAR_3->next = VAR_1;
  }

  ++VAR_2->size;
}
