
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct curl_llist_element {struct Curl_message* ptr; struct curl_llist_element* next; } ;
struct TYPE_14__ {struct curl_llist_element* head; } ;
struct Curl_multi {int num_easy; TYPE_5__* easylp; TYPE_4__* easyp; TYPE_7__ msglist; int psl; TYPE_7__ pending; int num_alive; scalar_t__ in_callback; } ;
struct TYPE_10__ {struct Curl_easy* easy_handle; } ;
struct Curl_message {TYPE_3__ extmsg; } ;
struct TYPE_9__ {int * conn_cache; int timeoutlist; } ;
struct TYPE_8__ {scalar_t__ hostcachetype; int * hostcache; } ;
struct Curl_easy {scalar_t__ mstate; TYPE_5__* prev; TYPE_4__* next; int * multi; int * psl; TYPE_6__* conn; TYPE_2__ state; int wildcard; TYPE_1__ dns; struct curl_llist_element connect_queue; int result; } ;
struct TYPE_13__ {struct Curl_easy* data; } ;
struct TYPE_12__ {TYPE_4__* next; } ;
struct TYPE_11__ {TYPE_5__* prev; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_7__*,struct curl_llist_element*,int *) ;
 int FUNC_3 (struct Curl_multi*) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (struct Curl_easy*) ;
 int FUNC_6 (struct Curl_multi*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct Curl_easy*) ;
 int FUNC_8 (struct Curl_easy*,int ,int) ;
 int FUNC_9 (struct Curl_multi*,struct Curl_easy*) ;
 int FUNC_10 (TYPE_6__*,char*) ;

CURLMcode FUNC_11(struct Curl_multi *VAR_10,
                                   struct Curl_easy *VAR_11)
{
  struct Curl_easy *VAR_12 = VAR_11;
  bool VAR_13;
  bool VAR_14;
  struct curl_llist_element *VAR_15;


  if(!FUNC_6(VAR_10))
    return VAR_1;


  if(!FUNC_5(VAR_11))
    return VAR_0;


  if(!VAR_11->multi)
    return VAR_2;

  if(VAR_10->in_callback)
    return VAR_3;

  VAR_13 = (VAR_11->mstate < VAR_4) ? VAR_9 : VAR_6;
  VAR_14 = (VAR_11->conn && (VAR_11->conn->data == VAR_12)) ?
    VAR_9 : VAR_6;



  if(VAR_13) {


    VAR_10->num_alive--;
  }

  if(VAR_11->conn &&
     VAR_11->mstate > VAR_5 &&
     VAR_11->mstate < VAR_4) {


    VAR_11->conn->data = VAR_12;
    FUNC_10(VAR_11->conn, "Removed with partial response");
    VAR_14 = VAR_9;
  }

  if(VAR_11->conn) {



    if(VAR_14) {






      (void)FUNC_8(VAR_11, VAR_11->result, VAR_13);
    }
  }




  FUNC_0(VAR_11);

  if(VAR_11->connect_queue.ptr)


    FUNC_2(&VAR_10->pending, &VAR_11->connect_queue, ((void*)0));

  if(VAR_11->dns.hostcachetype == VAR_7) {


    VAR_11->dns.hostcache = ((void*)0);
    VAR_11->dns.hostcachetype = VAR_8;
  }

  FUNC_4(&VAR_11->wildcard);



  FUNC_1(&VAR_11->state.timeoutlist, ((void*)0));



  VAR_11->state.conn_cache = ((void*)0);



  VAR_11->mstate = VAR_4;
  FUNC_9(VAR_10, VAR_12);



  if(VAR_11->conn) {
    VAR_11->conn->data = ((void*)0);
    FUNC_7(VAR_11);
  }







  VAR_11->multi = ((void*)0);




  for(VAR_15 = VAR_10->msglist.head; VAR_15; VAR_15 = VAR_15->next) {
    struct Curl_message *VAR_16 = VAR_15->ptr;

    if(VAR_16->extmsg.easy_handle == VAR_12) {
      FUNC_2(&VAR_10->msglist, VAR_15, ((void*)0));

      break;
    }
  }


  if(VAR_11->prev)
    VAR_11->prev->next = VAR_11->next;
  else
    VAR_10->easyp = VAR_11->next;


  if(VAR_11->next)
    VAR_11->next->prev = VAR_11->prev;
  else
    VAR_10->easylp = VAR_11->prev;



  VAR_10->num_easy--;

  FUNC_3(VAR_10);
  return VAR_2;
}
