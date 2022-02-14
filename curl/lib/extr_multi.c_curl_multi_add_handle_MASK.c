
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


struct TYPE_12__ {TYPE_4__* closure_handle; } ;
struct Curl_multi {int timer_lastcall; int num_alive; int num_easy; struct Curl_easy* easyp; struct Curl_easy* easylp; int psl; TYPE_5__ conn_cache; int hostcache; scalar_t__ in_callback; } ;
struct TYPE_14__ {int no_signal; int server_response_timeout; int timeout; scalar_t__* errorbuffer; } ;
struct TYPE_13__ {TYPE_5__* conn_cache; int timeoutlist; } ;
struct TYPE_8__ {scalar_t__ hostcachetype; int * hostcache; } ;
struct Curl_easy {TYPE_7__ set; TYPE_6__ state; struct Curl_multi* multi; struct Curl_easy* prev; struct Curl_easy* next; int * psl; TYPE_2__* share; TYPE_1__ dns; } ;
struct TYPE_10__ {int no_signal; int server_response_timeout; int timeout; } ;
struct TYPE_11__ {TYPE_3__ set; } ;
struct TYPE_9__ {int specifier; int psl; TYPE_5__ conn_cache; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct Curl_multi*) ;
 int VAR_8 ;
 int FUNC_3 (struct Curl_easy*) ;
 int FUNC_4 (struct Curl_multi*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct Curl_easy*,int ) ;

CURLMcode FUNC_7(struct Curl_multi *VAR_11,
                                struct Curl_easy *VAR_12)
{

  if(!FUNC_4(VAR_11))
    return VAR_2;


  if(!FUNC_3(VAR_12))
    return VAR_1;



  if(VAR_12->multi)
    return VAR_0;

  if(VAR_11->in_callback)
    return VAR_4;


  FUNC_1(&VAR_12->state.timeoutlist, ((void*)0));







  if(VAR_12->set.errorbuffer)
    VAR_12->set.errorbuffer[0] = 0;


  FUNC_6(VAR_12, VAR_5);



  if(!VAR_12->dns.hostcache ||
     (VAR_12->dns.hostcachetype == VAR_10)) {
    VAR_12->dns.hostcache = &VAR_11->hostcache;
    VAR_12->dns.hostcachetype = VAR_9;
  }


  if(VAR_12->share && (VAR_12->share->specifier & (1<< VAR_6)))
    VAR_12->state.conn_cache = &VAR_12->share->conn_cache;
  else
    VAR_12->state.conn_cache = &VAR_11->conn_cache;
  VAR_12->next = ((void*)0);
  if(VAR_11->easyp) {
    struct Curl_easy *VAR_13 = VAR_11->easylp;
    VAR_13->next = VAR_12;
    VAR_12->prev = VAR_13;
    VAR_11->easylp = VAR_12;
  }
  else {

    VAR_12->prev = ((void*)0);
    VAR_11->easylp = VAR_11->easyp = VAR_12;
  }


  VAR_12->multi = VAR_11;







  FUNC_0(VAR_12, 0, VAR_8);


  VAR_11->num_easy++;


  VAR_11->num_alive++;
  FUNC_5(&VAR_11->timer_lastcall, 0, sizeof(VAR_11->timer_lastcall));





  VAR_12->state.conn_cache->closure_handle->set.timeout = VAR_12->set.timeout;
  VAR_12->state.conn_cache->closure_handle->set.server_response_timeout =
    VAR_12->set.server_response_timeout;
  VAR_12->state.conn_cache->closure_handle->set.no_signal =
    VAR_12->set.no_signal;

  FUNC_2(VAR_11);
  return VAR_3;
}
