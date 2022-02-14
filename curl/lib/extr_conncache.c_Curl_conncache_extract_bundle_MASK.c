
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ timediff_t ;
struct curltime {int dummy; } ;
struct curl_llist_element {struct curl_llist_element* next; struct connectdata* ptr; } ;
struct connectdata {struct Curl_easy* data; int lastused; } ;
struct TYPE_4__ {struct curl_llist_element* head; } ;
struct connectbundle {TYPE_1__ conn_list; } ;
struct TYPE_6__ {TYPE_2__* conn_cache; } ;
struct Curl_easy {TYPE_3__ state; } ;
struct TYPE_5__ {int num_conn; } ;


 int FUNC_0 (struct connectdata*) ;
 struct curltime FUNC_1 () ;
 scalar_t__ FUNC_2 (struct curltime,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct connectbundle*,struct connectdata*) ;
 int FUNC_5 (struct Curl_easy*,char*,int ) ;

struct connectdata *
FUNC_6(struct Curl_easy *VAR_0,
                              struct connectbundle *VAR_1)
{
  struct curl_llist_element *VAR_2;
  timediff_t VAR_3 = -1;
  timediff_t VAR_4;
  struct curltime VAR_5;
  struct connectdata *VAR_6 = ((void*)0);
  struct connectdata *VAR_7;

  (void)VAR_0;

  VAR_5 = FUNC_1();

  VAR_2 = VAR_1->conn_list.head;
  while(VAR_2) {
    VAR_7 = VAR_2->ptr;

    if(!FUNC_0(VAR_7) && !VAR_7->data) {

      VAR_4 = FUNC_2(VAR_5, VAR_7->lastused);

      if(VAR_4 > VAR_3) {
        VAR_3 = VAR_4;
        VAR_6 = VAR_7;
      }
    }
    VAR_2 = VAR_2->next;
  }
  if(VAR_6) {

    FUNC_4(VAR_1, VAR_6);
    VAR_0->state.conn_cache->num_conn--;
    FUNC_3(FUNC_5(VAR_0, "The cache now contains %zu members\n",
                 VAR_0->state.conn_cache->num_conn));
    VAR_6->data = VAR_0;
  }

  return VAR_6;
}
