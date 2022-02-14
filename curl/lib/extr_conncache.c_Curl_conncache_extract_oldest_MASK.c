
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timediff_t ;
struct curltime {int dummy; } ;
struct curl_llist_element {struct curl_llist_element* next; struct connectdata* ptr; } ;
struct curl_hash_iterator {int dummy; } ;
struct curl_hash_element {struct connectbundle* ptr; } ;
struct connectdata {struct Curl_easy* data; int lastused; } ;
struct TYPE_4__ {struct curl_llist_element* head; } ;
struct connectbundle {TYPE_2__ conn_list; } ;
struct conncache {int num_conn; int hash; } ;
struct TYPE_3__ {struct conncache* conn_cache; } ;
struct Curl_easy {TYPE_1__ state; } ;


 int FUNC_0 (struct connectdata*) ;
 int FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (struct Curl_easy*) ;
 struct curl_hash_element* FUNC_3 (struct curl_hash_iterator*) ;
 int FUNC_4 (int *,struct curl_hash_iterator*) ;
 struct curltime FUNC_5 () ;
 int FUNC_6 (struct curltime,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct connectbundle*,struct connectdata*) ;
 int FUNC_9 (struct Curl_easy*,char*,int ) ;

struct connectdata *
FUNC_10(struct Curl_easy *VAR_0)
{
  struct conncache *VAR_1 = VAR_0->state.conn_cache;
  struct curl_hash_iterator VAR_2;
  struct curl_llist_element *VAR_3;
  struct curl_hash_element *VAR_4;
  timediff_t VAR_5 =- 1;
  timediff_t VAR_6;
  struct curltime VAR_7;
  struct connectdata *VAR_8 = ((void*)0);
  struct connectbundle *VAR_9;
  struct connectbundle *VAR_10 = ((void*)0);

  VAR_7 = FUNC_5();

  FUNC_1(VAR_0);
  FUNC_4(&VAR_1->hash, &VAR_2);

  VAR_4 = FUNC_3(&VAR_2);
  while(VAR_4) {
    struct connectdata *VAR_11;

    VAR_9 = VAR_4->ptr;

    VAR_3 = VAR_9->conn_list.head;
    while(VAR_3) {
      VAR_11 = VAR_3->ptr;

      if(!FUNC_0(VAR_11) && !VAR_11->data) {

        VAR_6 = FUNC_6(VAR_7, VAR_11->lastused);

        if(VAR_6 > VAR_5) {
          VAR_5 = VAR_6;
          VAR_8 = VAR_11;
          VAR_10 = VAR_9;
        }
      }
      VAR_3 = VAR_3->next;
    }

    VAR_4 = FUNC_3(&VAR_2);
  }
  if(VAR_8) {

    FUNC_8(VAR_10, VAR_8);
    VAR_1->num_conn--;
    FUNC_7(FUNC_9(VAR_0, "The cache now contains %zu members\n",
                 VAR_1->num_conn));
    VAR_8->data = VAR_0;
  }
  FUNC_2(VAR_0);

  return VAR_8;
}
