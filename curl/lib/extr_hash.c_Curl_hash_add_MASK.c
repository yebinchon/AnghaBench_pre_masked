
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_llist_element {scalar_t__ ptr; struct curl_llist_element* next; } ;
struct curl_llist {int tail; struct curl_llist_element* head; } ;
struct curl_hash_element {int list; int key_len; int key; } ;
struct curl_hash {int size; scalar_t__ (* comp_func ) (int ,int ,void*,size_t) ;} ;


 int FUNC_0 (struct curl_llist*,int ,struct curl_hash_element*,int *) ;
 int FUNC_1 (struct curl_llist*,struct curl_llist_element*,void*) ;
 struct curl_llist* FUNC_2 (struct curl_hash*,void*,size_t) ;
 struct curl_hash_element* FUNC_3 (void*,size_t,void*) ;
 scalar_t__ FUNC_4 (int ,int ,void*,size_t) ;

void *
FUNC_5(struct curl_hash *VAR_0, void *VAR_1, size_t VAR_2, void *VAR_3)
{
  struct curl_hash_element *VAR_4;
  struct curl_llist_element *VAR_5;
  struct curl_llist *VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);

  for(VAR_5 = VAR_6->head; VAR_5; VAR_5 = VAR_5->next) {
    VAR_4 = (struct curl_hash_element *) VAR_5->ptr;
    if(VAR_0->comp_func(VAR_4->key, VAR_4->key_len, VAR_1, VAR_2)) {
      FUNC_1(VAR_6, VAR_5, (void *)VAR_0);
      --VAR_0->size;
      break;
    }
  }

  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if(VAR_4) {
    FUNC_0(VAR_6, VAR_6->tail, VAR_4, &VAR_4->list);
    ++VAR_0->size;
    return VAR_3;
  }

  return ((void*)0);
}
