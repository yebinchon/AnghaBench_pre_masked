
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostcache_prune_data {int cache_timeout; int now; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_6__ {int hostcache; } ;
struct TYPE_5__ {int dns_cache_timeout; } ;
struct TYPE_4__ {scalar_t__ wildcard_resolve; } ;
struct Curl_easy {TYPE_3__ dns; TYPE_2__ set; TYPE_1__ change; } ;
struct Curl_dns_entry {int dummy; } ;
typedef int entry_id ;


 int FUNC_0 (int ,char*,size_t) ;
 struct Curl_dns_entry* FUNC_1 (int ,char*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (char const*,int,char*,int) ;
 scalar_t__ FUNC_3 (struct hostcache_prune_data*,struct Curl_dns_entry*) ;
 int FUNC_4 (struct Curl_easy*,char*) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct Curl_dns_entry *
FUNC_7(struct connectdata *VAR_1,
                const char *VAR_2,
                int VAR_3)
{
  struct Curl_dns_entry *VAR_4 = ((void*)0);
  size_t VAR_5;
  struct Curl_easy *VAR_6 = VAR_1->data;
  char VAR_7[VAR_0];


  FUNC_2(VAR_2, VAR_3, VAR_7, sizeof(VAR_7));
  VAR_5 = FUNC_5(VAR_7);


  VAR_4 = FUNC_1(VAR_6->dns.hostcache, VAR_7, VAR_5 + 1);


  if(!VAR_4 && VAR_6->change.wildcard_resolve) {
    FUNC_2("*", VAR_3, VAR_7, sizeof(VAR_7));
    VAR_5 = FUNC_5(VAR_7);


    VAR_4 = FUNC_1(VAR_6->dns.hostcache, VAR_7, VAR_5 + 1);
  }

  if(VAR_4 && (VAR_6->set.dns_cache_timeout != -1)) {

    struct hostcache_prune_data VAR_8;

    FUNC_6(&VAR_8.now);
    VAR_8.cache_timeout = VAR_6->set.dns_cache_timeout;

    if(FUNC_3(&VAR_8, VAR_4)) {
      FUNC_4(VAR_6, "Hostname in DNS cache was stale, zapped\n");
      VAR_4 = ((void*)0);
      FUNC_0(VAR_6->dns.hostcache, VAR_7, VAR_5 + 1);
    }
  }

  return VAR_4;
}
