
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash_element {size_t key_len; void* ptr; int key; } ;


 struct curl_hash_element* FUNC_0 (int) ;
 int FUNC_1 (int ,void const*,size_t) ;

__attribute__((used)) static struct curl_hash_element *
FUNC_2(const void *VAR_0, size_t VAR_1, const void *VAR_2)
{

  struct curl_hash_element *VAR_3 = FUNC_0(sizeof(struct curl_hash_element) +
                                        VAR_1);
  if(VAR_3) {

    FUNC_1(VAR_3->key, VAR_0, VAR_1);
    VAR_3->key_len = VAR_1;
    VAR_3->ptr = (void *) VAR_2;
  }
  return VAR_3;
}
