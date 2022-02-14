
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_hash_iterator {int dummy; } ;
struct curl_hash_element {int key_len; int key; struct connectbundle* ptr; } ;
struct connectbundle {int dummy; } ;
struct conncache {int hash; } ;


 int FUNC_0 (int *,int ,int ) ;
 struct curl_hash_element* FUNC_1 (struct curl_hash_iterator*) ;
 int FUNC_2 (int *,struct curl_hash_iterator*) ;

__attribute__((used)) static void FUNC_3(struct conncache *VAR_0,
                                    struct connectbundle *VAR_1)
{
  struct curl_hash_iterator VAR_2;
  struct curl_hash_element *VAR_3;

  if(!VAR_0)
    return;

  FUNC_2(&VAR_0->hash, &VAR_2);

  VAR_3 = FUNC_1(&VAR_2);
  while(VAR_3) {
    if(VAR_3->ptr == VAR_1) {


      FUNC_0(&VAR_0->hash, VAR_3->key, VAR_3->key_len);
      return;
    }

    VAR_3 = FUNC_1(&VAR_2);
  }
}
