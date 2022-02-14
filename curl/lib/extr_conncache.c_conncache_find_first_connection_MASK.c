
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_llist_element {struct connectdata* ptr; } ;
struct curl_hash_iterator {int dummy; } ;
struct curl_hash_element {struct connectbundle* ptr; } ;
struct connectdata {int dummy; } ;
struct TYPE_2__ {struct curl_llist_element* head; } ;
struct connectbundle {TYPE_1__ conn_list; } ;
struct conncache {int hash; } ;


 struct curl_hash_element* FUNC_0 (struct curl_hash_iterator*) ;
 int FUNC_1 (int *,struct curl_hash_iterator*) ;

__attribute__((used)) static struct connectdata *
FUNC_2(struct conncache *VAR_0)
{
  struct curl_hash_iterator VAR_1;
  struct curl_hash_element *VAR_2;
  struct connectbundle *VAR_3;

  FUNC_1(&VAR_0->hash, &VAR_1);

  VAR_2 = FUNC_0(&VAR_1);
  while(VAR_2) {
    struct curl_llist_element *VAR_4;
    VAR_3 = VAR_2->ptr;

    VAR_4 = VAR_3->conn_list.head;
    if(VAR_4) {
      return VAR_4->ptr;
    }

    VAR_2 = FUNC_0(&VAR_1);
  }

  return ((void*)0);
}
