
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct curl_hash_iterator {int slot_index; TYPE_2__* current_element; struct curl_hash* hash; } ;
struct curl_hash_element {int dummy; } ;
struct curl_hash {int slots; TYPE_1__* table; } ;
struct TYPE_4__ {struct curl_hash_element* ptr; struct TYPE_4__* next; } ;
struct TYPE_3__ {TYPE_2__* head; } ;



struct curl_hash_element *
FUNC_0(struct curl_hash_iterator *VAR_0)
{
  struct curl_hash *VAR_1 = VAR_0->hash;


  if(VAR_0->current_element)
    VAR_0->current_element = VAR_0->current_element->next;


  if(!VAR_0->current_element) {
    int VAR_2;
    for(VAR_2 = VAR_0->slot_index; VAR_2 < VAR_1->slots; VAR_2++) {
      if(VAR_1->table[VAR_2].head) {
        VAR_0->current_element = VAR_1->table[VAR_2].head;
        VAR_0->slot_index = VAR_2 + 1;
        break;
      }
    }
  }

  if(VAR_0->current_element) {
    struct curl_hash_element *VAR_3 = VAR_0->current_element->ptr;
    return VAR_3;
  }
  VAR_0->current_element = ((void*)0);
  return ((void*)0);
}
