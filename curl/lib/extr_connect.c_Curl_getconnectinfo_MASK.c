
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct connfind {int found; struct connectdata* tofind; } ;
struct connectdata {int * sock; struct Curl_easy* data; } ;
struct TYPE_6__ {struct connectdata* lastconnect; } ;
struct Curl_easy {TYPE_3__ state; TYPE_2__* multi; TYPE_1__* multi_easy; } ;
typedef int curl_socket_t ;
struct TYPE_5__ {int conn_cache; } ;
struct TYPE_4__ {int conn_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*,int *,struct connfind*,int ) ;
 int FUNC_1 (struct Curl_easy*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

curl_socket_t FUNC_2(struct Curl_easy *VAR_4,
                                  struct connectdata **VAR_5)
{
  FUNC_1(VAR_4);






  if(VAR_4->state.lastconnect && (VAR_4->multi_easy || VAR_4->multi)) {
    struct connectdata *VAR_6 = VAR_4->state.lastconnect;
    struct connfind VAR_7;
    VAR_7.tofind = VAR_4->state.lastconnect;
    VAR_7.found = VAR_1;

    FUNC_0(VAR_4, VAR_4->multi_easy?
                           &VAR_4->multi_easy->conn_cache:
                           &VAR_4->multi->conn_cache, &VAR_7, VAR_3);

    if(!VAR_7.found) {
      VAR_4->state.lastconnect = ((void*)0);
      return VAR_0;
    }

    if(VAR_5) {

      *VAR_5 = VAR_6;
      VAR_6->data = VAR_4;
    }
    return VAR_6->sock[VAR_2];
  }
  else
    return VAR_0;
}
