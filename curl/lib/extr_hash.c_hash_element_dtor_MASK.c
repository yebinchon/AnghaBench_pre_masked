
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash_element {scalar_t__ key_len; int * ptr; } ;
struct curl_hash {int (* dtor ) (int *) ;} ;


 int FUNC_0 (struct curl_hash_element*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, void *VAR_1)
{
  struct curl_hash *VAR_2 = (struct curl_hash *) VAR_0;
  struct curl_hash_element *VAR_3 = (struct curl_hash_element *) VAR_1;

  if(VAR_3->ptr) {
    VAR_2->dtor(VAR_3->ptr);
    VAR_3->ptr = ((void*)0);
  }

  VAR_3->key_len = 0;

  FUNC_0(VAR_3);
}
