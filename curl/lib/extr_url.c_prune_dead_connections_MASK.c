
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long timediff_t ;
struct prunedead {int * extracted; struct Curl_easy* data; } ;
struct curltime {int dummy; } ;
struct TYPE_3__ {TYPE_2__* conn_cache; } ;
struct Curl_easy {TYPE_1__ state; } ;
struct TYPE_4__ {struct curltime last_cleanup; } ;


 scalar_t__ FUNC_0 (struct Curl_easy*,TYPE_2__*,struct prunedead*,int ) ;
 int FUNC_1 (struct Curl_easy*,int *,int ) ;
 struct curltime FUNC_2 () ;
 long FUNC_3 (struct curltime,struct curltime) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct Curl_easy *VAR_2)
{
  struct curltime VAR_3 = FUNC_2();
  timediff_t VAR_4 =
    FUNC_3(VAR_3, VAR_2->state.conn_cache->last_cleanup);

  if(VAR_4 >= 1000L) {
    struct prunedead VAR_5;
    VAR_5.data = VAR_2;
    VAR_5.extracted = ((void*)0);
    while(FUNC_0(VAR_2, VAR_2->state.conn_cache, &VAR_5,
                                 VAR_1)) {

      (void)FUNC_1(VAR_2, VAR_5.extracted, VAR_0);
    }
    VAR_2->state.conn_cache->last_cleanup = VAR_3;
  }
}
