
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int timediff_t ;
struct curltime {int dummy; } ;
struct connectdata {scalar_t__* tempsock; int timeoutms_per_addr; struct Curl_easy* data; TYPE_3__** tempaddr; int num_addr; } ;
struct TYPE_6__ {int happy_eyeballs_timeout; } ;
struct TYPE_5__ {int numconnects; } ;
struct Curl_easy {TYPE_2__ set; TYPE_1__ info; } ;
struct Curl_dns_entry {TYPE_3__* addr; } ;
struct TYPE_7__ {struct TYPE_7__* ai_next; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 struct curltime FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct Curl_easy*,struct curltime*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_5 (struct connectdata*,TYPE_3__*,int ) ;

CURLcode FUNC_6(struct connectdata *VAR_6,
                          const struct Curl_dns_entry *VAR_7)
{
  struct Curl_easy *VAR_8 = VAR_6->data;
  struct curltime VAR_9 = FUNC_1();
  CURLcode VAR_10 = VAR_0;

  timediff_t VAR_11 = FUNC_3(VAR_8, &VAR_9, VAR_5);

  if(VAR_11 < 0) {

    FUNC_4(VAR_8, "Connection time-out");
    return VAR_2;
  }

  VAR_6->num_addr = FUNC_2(VAR_7->addr);
  VAR_6->tempaddr[0] = VAR_7->addr;
  VAR_6->tempaddr[1] = ((void*)0);
  VAR_6->tempsock[0] = VAR_3;
  VAR_6->tempsock[1] = VAR_3;


  VAR_6->timeoutms_per_addr =
    VAR_6->tempaddr[0]->ai_next == ((void*)0) ? VAR_11 : VAR_11 / 2;


  while(VAR_6->tempaddr[0]) {
    VAR_10 = FUNC_5(VAR_6, VAR_6->tempaddr[0], 0);
    if(!VAR_10)
      break;
    VAR_6->tempaddr[0] = VAR_6->tempaddr[0]->ai_next;
  }

  if(VAR_6->tempsock[0] == VAR_3) {
    if(!VAR_10)
      VAR_10 = VAR_0;
    return VAR_10;
  }

  VAR_8->info.numconnects++;
  FUNC_0(VAR_6->data, VAR_8->set.happy_eyeballs_timeout,
              VAR_4);

  return VAR_1;
}
