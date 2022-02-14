
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_llist_element {struct connectdata* ptr; struct curl_llist_element* next; } ;
struct curl_hash_iterator {int dummy; } ;
struct curl_hash_element {struct connectbundle* ptr; } ;
typedef struct connectdata connectdata ;
struct TYPE_2__ {struct curl_llist_element* head; } ;
struct connectbundle {TYPE_1__ conn_list; } ;
struct conncache {int hash; } ;
struct Curl_easy {int dummy; } ;


 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (struct Curl_easy*) ;
 struct curl_hash_element* FUNC_2 (struct curl_hash_iterator*) ;
 int FUNC_3 (int *,struct curl_hash_iterator*) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_4(struct Curl_easy *VAR_2,
                            struct conncache *VAR_3,
                            void *VAR_4,
                            int (*VAR_5)(struct connectdata *VAR_6, void *VAR_7))
{
  struct curl_hash_iterator VAR_8;
  struct curl_llist_element *VAR_9;
  struct curl_hash_element *VAR_10;

  if(!VAR_3)
    return VAR_0;

  FUNC_0(VAR_2);
  FUNC_3(&VAR_3->hash, &VAR_8);

  VAR_10 = FUNC_2(&VAR_8);
  while(VAR_10) {
    struct connectbundle *VAR_11;

    VAR_11 = VAR_10->ptr;
    VAR_10 = FUNC_2(&VAR_8);

    VAR_9 = VAR_11->conn_list.head;
    while(VAR_9) {


      struct connectdata *VAR_12 = VAR_9->ptr;
      VAR_9 = VAR_9->next;

      if(1 == VAR_5(VAR_12, VAR_4)) {
        FUNC_1(VAR_2);
        return VAR_1;
      }
    }
  }
  FUNC_1(VAR_2);
  return VAR_0;
}
