
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Curl_multi {int psl; int hostcache; int pending; int msglist; int conn_cache; int sockhash; struct Curl_easy* easyp; scalar_t__ type; scalar_t__ in_callback; } ;
struct TYPE_4__ {int * conn_cache; int done; } ;
struct TYPE_3__ {scalar_t__ hostcachetype; int * hostcache; } ;
struct Curl_easy {int * psl; int * multi; TYPE_2__ state; TYPE_1__ dns; scalar_t__ conn; struct Curl_easy* next; } ;
typedef int CURLMcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct Curl_easy*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct Curl_multi*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct Curl_multi*) ;
 int FUNC_8 (struct Curl_easy*,int ,int ) ;

CURLMcode FUNC_9(struct Curl_multi *VAR_7)
{
  struct Curl_easy *VAR_8;
  struct Curl_easy *VAR_9;

  if(FUNC_6(VAR_7)) {
    if(VAR_7->in_callback)
      return VAR_3;

    VAR_7->type = 0;


    VAR_8 = VAR_7->easyp;
    while(VAR_8) {
      VAR_9 = VAR_8->next;
      if(!VAR_8->state.done && VAR_8->conn)

        (void)FUNC_8(VAR_8, VAR_0, VAR_6);
      if(VAR_8->dns.hostcachetype == VAR_4) {

        FUNC_3(VAR_8, VAR_8->dns.hostcache);
        VAR_8->dns.hostcache = ((void*)0);
        VAR_8->dns.hostcachetype = VAR_5;
      }


      VAR_8->state.conn_cache = ((void*)0);
      VAR_8->multi = ((void*)0);






      VAR_8 = VAR_9;
    }


    FUNC_0(&VAR_7->conn_cache);

    FUNC_2(&VAR_7->sockhash);
    FUNC_1(&VAR_7->conn_cache);
    FUNC_4(&VAR_7->msglist, ((void*)0));
    FUNC_4(&VAR_7->pending, ((void*)0));

    FUNC_2(&VAR_7->hostcache);
    FUNC_5(&VAR_7->psl);
    FUNC_7(VAR_7);

    return VAR_2;
  }
  return VAR_1;
}
