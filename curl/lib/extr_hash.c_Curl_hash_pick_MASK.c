
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist_element {struct curl_hash_element* ptr; struct curl_llist_element* next; } ;
struct curl_llist {struct curl_llist_element* head; } ;
struct curl_hash_element {void* ptr; int key_len; int key; } ;
struct curl_hash {scalar_t__ (* comp_func ) (int ,int ,void*,size_t) ;} ;


 struct curl_llist* FUNC_0 (struct curl_hash*,void*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,void*,size_t) ;

void *
FUNC_2(struct curl_hash *VAR_0, void *VAR_1, size_t VAR_2)
{
  struct curl_llist_element *VAR_3;
  struct curl_llist *VAR_4;

  if(VAR_0) {
    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
    for(VAR_3 = VAR_4->head; VAR_3; VAR_3 = VAR_3->next) {
      struct curl_hash_element *VAR_5 = VAR_3->ptr;
      if(VAR_0->comp_func(VAR_5->key, VAR_5->key_len, VAR_1, VAR_2)) {
        return VAR_5->ptr;
      }
    }
  }

  return ((void*)0);
}
