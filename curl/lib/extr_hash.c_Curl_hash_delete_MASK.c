
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist_element {struct curl_hash_element* ptr; struct curl_llist_element* next; } ;
struct curl_llist {struct curl_llist_element* head; } ;
struct curl_hash_element {int key_len; int key; } ;
struct curl_hash {int size; scalar_t__ (* comp_func ) (int ,int ,void*,size_t) ;} ;


 int FUNC_0 (struct curl_llist*,struct curl_llist_element*,void*) ;
 struct curl_llist* FUNC_1 (struct curl_hash*,void*,size_t) ;
 scalar_t__ FUNC_2 (int ,int ,void*,size_t) ;

int FUNC_3(struct curl_hash *VAR_0, void *VAR_1, size_t VAR_2)
{
  struct curl_llist_element *VAR_3;
  struct curl_llist *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

  for(VAR_3 = VAR_4->head; VAR_3; VAR_3 = VAR_3->next) {
    struct curl_hash_element *VAR_5 = VAR_3->ptr;
    if(VAR_0->comp_func(VAR_5->key, VAR_5->key_len, VAR_1, VAR_2)) {
      FUNC_0(VAR_4, VAR_3, (void *) VAR_0);
      --VAR_0->size;
      return 0;
    }
  }
  return 1;
}
