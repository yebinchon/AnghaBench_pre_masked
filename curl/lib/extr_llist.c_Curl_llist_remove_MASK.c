
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_llist_element {struct curl_llist_element* next; TYPE_1__* prev; int * ptr; } ;
struct curl_llist {scalar_t__ size; int (* dtor ) (void*,void*) ;TYPE_1__* tail; struct curl_llist_element* head; } ;
struct TYPE_2__ {struct curl_llist_element* next; } ;


 int FUNC_0 (void*,void*) ;

void
FUNC_1(struct curl_llist *VAR_0, struct curl_llist_element *VAR_1,
                  void *VAR_2)
{
  void *VAR_3;
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
    if(!VAR_1->prev)
      VAR_0->head = VAR_1->next;
    else
      VAR_1->prev->next = VAR_1->next;

    if(!VAR_1->next)
      VAR_0->tail = VAR_1->prev;
    else
      VAR_1->next->prev = VAR_1->prev;
  }

  VAR_3 = VAR_1->ptr;

  VAR_1->ptr = ((void*)0);
  VAR_1->prev = ((void*)0);
  VAR_1->next = ((void*)0);

  --VAR_0->size;


  if(VAR_0->dtor)
    VAR_0->dtor(VAR_2, VAR_3);
}
