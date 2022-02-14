
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist_element {struct curl_llist_element* next; struct curl_llist_element* prev; void* ptr; } ;
struct curl_llist {scalar_t__ size; struct curl_llist_element* tail; struct curl_llist_element* head; } ;



void
FUNC_0(struct curl_llist *VAR_0, struct curl_llist_element *VAR_1,
                       const void *VAR_2,
                       struct curl_llist_element *VAR_3)
{
  VAR_3->ptr = (void *) VAR_2;
  if(VAR_0->size == 0) {
    VAR_0->head = VAR_3;
    VAR_0->head->prev = ((void*)0);
    VAR_0->head->next = ((void*)0);
    VAR_0->tail = VAR_3;
  }
  else {

    VAR_3->next = VAR_1?VAR_1->next:VAR_0->head;
    VAR_3->prev = VAR_1;
    if(!VAR_1) {
      VAR_0->head->prev = VAR_3;
      VAR_0->head = VAR_3;
    }
    else if(VAR_1->next) {
      VAR_1->next->prev = VAR_3;
    }
    else {
      VAR_0->tail = VAR_3;
    }
    if(VAR_1)
      VAR_1->next = VAR_3;
  }

  ++VAR_0->size;
}
