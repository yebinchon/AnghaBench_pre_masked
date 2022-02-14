
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist_element {struct curl_llist_element* next; struct curl_hash_element* ptr; } ;
struct curl_llist {struct curl_llist_element* head; } ;
struct curl_hash_element {void* ptr; } ;
struct curl_hash {int slots; int size; struct curl_llist* table; } ;


 int FUNC_0 (struct curl_llist*,struct curl_llist_element*,void*) ;

void
FUNC_1(struct curl_hash *VAR_0, void *VAR_1,
                               int (*VAR_2)(void *, void *))
{
  struct curl_llist_element *VAR_3;
  struct curl_llist_element *VAR_4;
  struct curl_llist *VAR_5;
  int VAR_6;

  if(!VAR_0)
    return;

  for(VAR_6 = 0; VAR_6 < VAR_0->slots; ++VAR_6) {
    VAR_5 = &VAR_0->table[VAR_6];
    VAR_3 = VAR_5->head;
    while(VAR_3) {
      struct curl_hash_element *VAR_7 = VAR_3->ptr;
      VAR_4 = VAR_3->next;

      if(VAR_2 == ((void*)0) || VAR_2(VAR_1, VAR_7->ptr)) {
        FUNC_0(VAR_5, VAR_3, (void *) VAR_0);
        --VAR_0->size;
      }
      VAR_3 = VAR_4;
    }
  }
}
